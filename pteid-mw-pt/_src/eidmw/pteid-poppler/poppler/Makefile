

BASENAME=libpteid-poppler

#Need to link to zlib to get FlateEncode compression and decompression

ifeq ($(shell uname), Darwin)
	LIB_FILENAME=$(BASENAME).a
	LDFLAGS += -liconv -lpteidcommon
	CXXFLAGS += -arch x86_64 -std=c++11 -mmacosx-version-min=10.12 -fno-omit-frame-pointer -fPIC -O3 -I.. -I../../common/ -I../goo/ -I../../_Builds/ -g
	CFLAGS += -arch x86_64 -fno-omit-frame-pointer -mmacosx-version-min=10.12 -fPIC -O3 -I.. -I../../common/ -I../goo/ -I../../_Builds/ -g
else
	LIB_FILENAME=$(BASENAME).a
	override CXXFLAGS += -std=c++11 -fno-omit-frame-pointer -fPIC -O3 -I.. -I../../common/ -I../goo/ -I../../_Builds/ -g
	override CFLAGS += -fno-omit-frame-pointer -fPIC -O3 -I.. -I../../common -I../goo/ -I../../_Builds/ -g
endif

SOURCES =		\
	Array.cc 		\
	Annot.cc		\
	CachedFile.cc		\
	Catalog.cc 		\
	DateInfo.cc		\
	Decrypt.cc		\
	Dict.cc 		\
	Error.cc 		\
	FileSpec.cc		\
	Form.cc 		\
	Hints.cc		\
	Iconv.cc		\
	JArithmeticDecoder.cc	\
	JBIG2Stream.cc		\
	JPXStream.cc		\
	Lexer.cc 		\
	Linearization.cc 	\
	Link.cc 		\
	LocalPDFDocBuilder.cc	\
	Myriad-Font.cc		\
	Movie.cc                \
	NameToCharCode.cc	\
	Object.cc 		\
	OptionalContent.cc	\
	Outline.cc		\
	Page.cc 		\
	PageTransition.cc	\
	Parser.cc 		\
	PDFDoc.cc 		\
	PDFDocEncoding.cc	\
	PDFDocFactory.cc	\
	PopplerCache.cc		\
	ProfileData.cc		\
	PSTokenizer.cc		\
	Rendition.cc		\
	StdinCachedFile.cc	\
	StdinPDFDocBuilder.cc	\
	Stream.cc 		\
	ViewerPreferences.cc	\
	XRef.cc			\
	PageLabelInfo.cc	\
	SecurityHandler.cc	\
	FlateEncoder.cc \
	Sound.cc	\
	BuiltinFont.cc	\
	BuiltinFontTables.cc \
	FontEncodingTables.cc
#	UnicodeMap.cc		\
#	CMap.cc			\
#	Gfx.cc 			\
#	GlobalParams.cc		\
#	GfxFont.cc 		\
#	GfxState.cc		\
#	FontInfo.cc		\
#	UnicodeTypeTable.cc	\
#	CharCodeToUnicode.cc	\

GOO_SRC = $(wildcard ../goo/*cc)
FOFI_SRC = $(wildcard ../fofi/*.cc)

OBJS := $(subst .cc,.o,$(SOURCES))
GOO_OBJS := $(subst .cc,.o,$(GOO_SRC))
FOFI_OBJS := $(subst .cc,.o,$(FOFI_SRC))


all:    $(LIB_FILENAME)

$(LIB_FILENAME): $(OBJS) $(GOO_OBJS) memmem.o
	ar rcs $@ $^ 
	cp $(LIB_FILENAME) ../../lib

../goo/%.o : ../goo/%.cc
	$(CXX) -o $@  $(CXXFLAGS) -c $<

../fofi/%.o : ../fofi/%.cc
	$(CXX) -o $@ $(CXXFLAGS) -c $<

memmem.o: memmem.c
	$(CC) $(CFLAGS) -c memmem.c

%.o: %.cc
	$(CXX) $(CXXFLAGS) -c $<

clean:
	rm -fv ../goo/*.o
	rm -fv ../fofi/*.o
	rm -fv *.o
	rm -fv $(LIB_FILENAME)

install:
	echo "pteid-poppler has nothing to install"

.PHONY:	clean install prepare
