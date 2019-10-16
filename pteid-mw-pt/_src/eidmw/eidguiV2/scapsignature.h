#ifndef SCAPSIGNATURE_H
#define SCAPSIGNATURE_H

#include <vector>
#include <QString>
#include <string>
#include <vector>
//#include "ASService/soapH.h"
#include "ErrorConn.h"
#include "proxyinfo.h"

#include "OAuthAttributes.h"
#include "AttributeFactory.h"

//Fwd declarations
namespace eIDMW {
	class PTEID_EIDCard;
}

struct CmdSignedFileDetails;


class ns2__AttributesType;
class ns3__AttributeType;

class ns3__AttributeSupplierType;

#define COMPANIES_SUFFIX "_ENTERPRISES.xml"
#define ENTITIES_SUFFIX "_INSTITUTIONS.xml"

class GAPI;

class ScapServices {
public:

	std::vector<ns3__AttributeSupplierType *> getAttributeSuppliers();

	void getEntityAttributes();
    std::vector<ns2__AttributesType *> getAttributes(GAPI *parent, eIDMW::PTEID_EIDCard *card, std::vector<int> supplier_ids, bool useOAuth = false);

    void executeSCAPWithCMDSignature(GAPI *parent, QString &savefilepath, int selected_page,
                double location_x, double location_y, QString &location, QString &reason, int ltv_years,
                std::vector<int> attributes_index, CmdSignedFileDetails cmd_details,
                bool useCustomImage, QByteArray &m_jpeg_scaled_data);

    void executeSCAPSignature(GAPI *parent, QString &inputPath, QString &savefilepath, int selected_page,
		double location_x, double location_y, QString &location, QString &reason, int ltv_years, 
		std::vector<int> selected_attributes, bool useCustomImage, QByteArray &m_jpeg_scaled_data);

    std::vector<ns2__AttributesType *> loadAttributesFromCache(bool isCompanies);
    // Not used: Load attributes from cache only from a unique citizen NIC
    //std::vector<ns2__AttributesType *> loadAttributesFromCache(eIDMW::PTEID_EIDCard &card, bool isCompanies);
    std::vector<ns2__AttributesType *> reloadAttributesFromCache();
    bool removeAttributesFromCache();
    void cancelGetAttributesWithCMD();
	/* Connection error functions */
	//The error message should be in the GUI, we should just return an enum
    //QString getConnErrStr();

private:
	std::vector<ns3__AttributeSupplierType *> m_suppliersList;
	std::vector<ns2__AttributesType *> m_attributesList;
	
	ErrorConn connectionErr;
	eIDMW::OAuthAttributes *m_oauth; //keep to abort oauth listener
	std::vector<ns3__AttributeType*> getSelectedAttributes(std::vector<int> attributes_index);
	void setConnErr( int soapConnectionErr, void *in_suppliers_resp );
	
};

#endif //SCAPSIGNATURE_H
