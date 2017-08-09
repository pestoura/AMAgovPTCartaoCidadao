#ifndef GAPI_H
#define GAPI_H

#include <QQuickImageProvider>
#include <QQmlEngine>
#include <QObject>
#include <QMap>
#include <QTimer>
#include <QDebug>
#include <QtQml>
#include <QPixmap>
#include <poppler-qt5.h>

//MW libraries
#include "eidlib.h"
#include "eidErrors.h"
#include "eidlibException.h"

#include "CMDSignature.h"
#include "cmdErrors.h"

/*
    GAPI - Graphic Application Programming Interface

    // GAPI init
    GAPI gapi;

*/

class GAPI;

//***********************************************
// callback data class
// This class can be used to store whatever info we
// need from the callback function
//***********************************************
class CallBackData
{
public:
    CallBackData( void )
        : m_readerName()
        , m_mainWnd()
        , m_cardID(0)
    {
    }
    CallBackData( const char* pReaderName, GAPI* pGAPI )
        : m_readerName(pReaderName)
        , m_mainWnd(pGAPI)
        , m_cardID(0)
    {
    }
    virtual ~CallBackData( void )
    {
    }
    QString const& getReaderName()
    {
        return m_readerName;
    }
    void setReaderName( QString const& readerName)
    {
        m_readerName = readerName;
    }
    void setReaderName( const char* readerName)
    {
        m_readerName = readerName;
    }
    GAPI* getMainWnd( void )
    {
        return m_mainWnd;
    }
private:
    QString m_readerName;
    GAPI*   m_mainWnd;
public:
    unsigned long   m_cardID;
};

typedef QMap<QString,unsigned long> tCallBackHandles;
typedef QMap<QString,CallBackData*> tCallBackData;

class PhotoImageProvider: public QQuickImageProvider 
{
public:
    PhotoImageProvider() : QQuickImageProvider(QQuickImageProvider::Pixmap) {}

    QPixmap requestPixmap(const QString &id, QSize *size, const QSize &requestedSize);
    void setPixmap(QPixmap &pixmap) { p = pixmap; }

private:
    QPixmap p;
};

struct SignParams {
public:
    QString loadedFilePath; QString outputFile;
    int page;
    double coord_x;
    double coord_y;
    QString reason;
    QString location;
    double isTimestamp;
    double isSmallSignature;
};

struct CmdSignParams {
public:
    QString mobileNumber;
    QString secret_code;
    QString loadedFilePath;
    QString outputFile;
    int page;
    double coord_x;
    double coord_y;
    QString reason;
    QString location;
    double isTimestamp;
    double isSmallSignature;
};

struct SignBatchParams {
public:
    QList<QString> loadedFileBatchPath; QString outputFile;
    int page;
    double coord_x;
    double coord_y;
    QString reason;
    QString location;
    double isTimestamp;
    double isSmallSignature;
};

class PDFPreviewImageProvider: public QObject, public QQuickImageProvider
{
    Q_OBJECT
public:
    PDFPreviewImageProvider() : QQuickImageProvider(QQuickImageProvider::Pixmap), m_doc(NULL) { }

    QPixmap requestPixmap(const QString &id, QSize *size, const QSize &requestedSize);

signals:
    Q_SIGNAL    void signalPdfSourceChanged(int pdfWidth, int pdfHeight);
private:
    QPixmap renderPdf(int page,const QSize &requestedSize);
    QPixmap renderPDFPage(unsigned int page);
    Poppler::Document *m_doc;
    QString m_filePath;
};

class GAPI : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QMap<IDInfoKey, QString> m_data
               NOTIFY signalCardDataChanged)
    Q_PROPERTY(QMap<AddressInfoKey, QString> m_addressData NOTIFY signalAddressLoaded)
    Q_PROPERTY(QString persoData MEMBER m_persoData NOTIFY signalPersoDataLoaded)
    Q_PROPERTY(bool isAddressLoaded READ isAddressLoaded WRITE setAddressLoaded NOTIFY signalAddressLoadedChanged)

public:
    explicit GAPI(QObject *parent = 0);

    //bool isIdentityLoaded;
    //bool isPersoDateLoaded;
    //bool isAddressLoaded;

    enum IDInfoKey { Documenttype, Documentversion, Surname, Givenname, Sex, Height, Nationality, Birthdate, Documentnum, Validitybegindate, Validityenddate,
                     NIC, NIF, NISS, NSNS, IssuingEntity, PlaceOfRequest, Country, Father, Mother, AccidentalIndications };

    enum AddressInfoKey { District, Municipality, Parish, Streettype, Streetname, Buildingtype, Doorno, Floor, Side, Locality, Place, Zip4, Zip3, PostalLocality};

    enum CardAccessError { NoReaderFound, NoCardFound, CardReadError, SodCardReadError, CardUnknownError };

    enum eCustomEventType { ET_UNKNOWN, ET_CARD_CHANGED, ET_CARD_REMOVED };

    Q_ENUMS(CardAccessError)
    Q_ENUMS(eCustomEventType)
    Q_ENUMS(IDInfoKey)
    Q_ENUMS(AddressInfoKey)

    bool isAddressLoaded() {return m_addressLoaded; }

    QQuickImageProvider * buildImageProvider() { return image_provider; }
    QQuickImageProvider * buildPdfImageProvider() { return image_provider_pdf; }

    PDFPreviewImageProvider * image_provider_pdf;

    // Public Method to Test GAPI
    //void fillDataCardIdentifyDummy();
    void testUpdateCardIdentify(int timerValue);

    //This flag is used to start the application in specific subpage
    void setShortcutFlag(int value) { m_shortcutFlag = value; }
    void setShortcutPDFPath(QString &inputPdf) { m_shortcutInputPDF = inputPdf ;}

    // Do not forget to declare your class to the QML system.
    static void declareQMLTypes() {
        qmlRegisterType<GAPI>("eidguiV2", 1, 0, "GAPI");
    }

public slots:
    // Slots to Gui request values
    void setAddressLoaded(bool addressLoaded) {m_addressLoaded = addressLoaded; }
    void startCardReading();
    int getStringByteLenght(QString text);
    void startReadingPersoNotes();
    void startWritingPersoNotes(QString text);
    void startReadingAddress();
    int getShortcutFlag() {return m_shortcutFlag; }
    QString getShortcutInputPDF() { return m_shortcutInputPDF; }
    //This method should be used by basic and advanced signature modes
    void startSigningPDF(QString loadedFilePath, QString outputFile, int page, double coord_x, double coord_y,
                         QString reason, QString location, double isTimestamp, double isSmall);
    void startSigningBatchPDF(QList<QString> loadedFileBatchPath, QString outputFile, int page, double coord_x, double coord_y,
                         QString reason, QString location, double isTimestamp, double isSmall);
    unsigned int getPDFpageCount(QString loadedFilePath);

    void startSigningXADES(QString loadedFilePath, QString outputFile, double isTimestamp);
    unsigned int verifyAuthPin(QString pin);
    unsigned int getTriesLeftAuthPin();
    unsigned int verifySignPin(QString pin);
    unsigned int getTriesLeftSignPin();
    unsigned int verifyAddressPin(QString pin);
    unsigned int getTriesLeftAddressPin();

    unsigned int changeAuthPin(QString currentPin, QString newPin);
    unsigned int changeSignPin(QString currentPin, QString newPin);
    unsigned int changeAddressPin(QString currentPin, QString newPin);

    void changeAddress(QString process, QString secret_code);
    void doChangeAddress(const char *process, const char *secret_code);
    void signCMD(QString mobileNumber, QString secret_code, QString loadedFilePath,
                  QString outputFile, int page, double coord_x, double coord_y, QString reason, QString location,
                 double isTimestamp, double isSmall);
    void doSignCMD(CmdSignParams &params);
    static void addressChangeCallback(void *, int);
    void showChangeAddressDialog(long code);
    void showSignCMDDialog(long code);

    QString getCardActivation();
    QString getDataCardIdentifyValue(GAPI::IDInfoKey key);
    QString getAddressField(GAPI::AddressInfoKey key);

    void setEventCallbacks( void );
    void startfillCertificateList ( void );

signals:
    // Signal from GAPI to Gui
    // Notify about Card Identify changed
    void signalCardDataChanged();
    void signalAddressLoaded();
    void signalCardAccessError(int error_code);
    void signalPersoDataLoaded(const QString& persoNotes);
    void signalAddressLoadedChanged();
    void signalPdfSignSucess();
    void signalPdfSignError();
    void signalUpdateProgressBar(int value);
    void signalUpdateProgressStatus(const QString statusMessage);
    void addressChangeFinished(long return_code);
    void signCMDFinished(long return_code);
    void signalCardChanged(const int error_code);
    void signalSetPersoDataFile(const QString titleMessage, const QString statusMessage);
    void signalCertificatesChanged(const QVariantMap certificatesMap);
private:
    void setDataCardIdentify(QMap<GAPI::IDInfoKey, QString> m_data);
    void connectToCard();
    void getPersoDataFile();
    void setPersoDataFile(QString text);
    void getAddressFile();
    void doSignPDF(SignParams &params);
    void doSignBatchPDF(SignBatchParams &params);
    void doSignXADES(QString loadedFilePath, QString outputFile, double isTimestamp);
    void buildTree(eIDMW::PTEID_Certificate &cert, bool &bEx, QVariantMap &certificatesMap);
    void fillCertificateList (void );

    eIDMW::PTEID_EIDCard & getCardInstance();

    // Data Card Identify map
    QMap<GAPI::IDInfoKey, QString> m_data;
    QMap<GAPI::AddressInfoKey, QString> m_addressData;
    //Don't free this!, we release ownership to the QMLEngine in buildImageProvider()
    PhotoImageProvider *image_provider;


    QString m_persoData;
    bool m_addressLoaded;
    int m_shortcutFlag;
    QString m_shortcutInputPDF;

    tCallBackHandles		m_callBackHandles;
    tCallBackData			m_callBackData;

private slots:
    // Test functions
    void triggerTestUpdateCardIdentify();
};
#endif // GAPI_H