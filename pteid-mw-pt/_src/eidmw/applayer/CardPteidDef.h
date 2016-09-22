/* ****************************************************************************

 * eID Middleware Project.
 * Copyright (C) 2008-2009 FedICT.
 *
 * This is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License version
 * 3.0 as published by the Free Software Foundation.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this software; if not, see
 * http://www.gnu.org/licenses/.

**************************************************************************** */
#pragma once

#ifndef __CARDPTEIDDEF_H__
#define __CARDPTEIDDEF_H__

namespace eIDMW
{

//#define PTEID_FILE_ID					"3F00DF014031"
#define PTEID_FILE_ID					"3F005F00EF02"
#define PTEID_FILE_TRACE				"3F000003"
#define PTEID_FILE_PERSODATA			"3F005F00EF07"
//#define PTEID_FILE_ID_SIGN				"3F00DF014032"
#define PTEID_FILE_ID_SIGN				"3F005F00EF08"
//#define PTEID_FILE_ADDRESS				"3F00DF014033"
#define PTEID_FILE_ADDRESS				"3F005F00EF05"
#define PTEID_FILE_ADDRESS_SIGN				"3F00DF014034"
//#define PTEID_FILE_PHOTO					"3F00DF014035"
#define PTEID_FILE_SOD					"3F005F00EF06"
#define PTEID_FILE_TOKENINFO			"3F004F005032"

#define PTEID_FILE_CERT_AUTHENTICATION			"3F005F00EF09"
#define PTEID_FILE_CERT_SIGNATURE				"3F005F00EF08"
#define PTEID_FILE_CERT_ROOT_AUTH				"3F005F00EF10"
#define PTEID_FILE_CERT_ROOT					"3F005F00EF11"
#define PTEID_FILE_CERT_ROOT_SIGN				"3F005F00EF0F"

#define PTEID_FILE_CERTS					"CERTS"					//pseudo file
#define PTEID_FILE_CERTS_P15				"CERTS_P15"				//pseudo file
#define PTEID_FILE_CERTS_COUNT			"CERTS_COUNT"			//pseudo file
#define PTEID_FILE_PINS_P15				"PINS_P15"				//pseudo file
#define PTEID_FILE_PINS_COUNT			"PINS_COUNT"			//pseudo file
#define PTEID_FILE_CARDINFO				"CARDINFO"				//pseudo file
#define PTEID_FILE_CHALLENGE				"CHALLENGE"				//pseudo file
#define PTEID_FILE_CHALLENGE_RESPONSE	"CHALLENGE_RESPONSE"	//pseudo file

#define PTEID_CARDTYPE_FOREIGNER_CODE_MIN	11
#define PTEID_CARDTYPE_FOREIGNER_CODE_MAX	18

//Add PTeID-ng Trace defines
#define PTEIDNG_FIELD_TRACE_POS_VALIDATION				5
#define PTEIDNG_FIELD_TRACE_LEN_VALIDATION				1
#define PTEIDNG_ACTIVE_CARD								1

//Add PTeid-ng ID defines - ok
#define PTEIDNG_FIELD_ID_POS_FILE						0
#define PTEIDNG_FIELD_ID_LEN_FILE						15500

#define PTEIDNG_FIELD_ID_POS_IssuingEntity				0
#define PTEIDNG_FIELD_ID_LEN_IssuingEntity				40
#define PTEIDNG_FIELD_ID_POS_Country					40
#define PTEIDNG_FIELD_ID_LEN_Country					80
#define PTEIDNG_FIELD_ID_POS_DocumentType				120
#define PTEIDNG_FIELD_ID_LEN_DocumentType				34
#define PTEIDNG_FIELD_ID_POS_DocumentNumber				154
#define PTEIDNG_FIELD_ID_LEN_DocumentNumber				28
#define PTEIDNG_FIELD_ID_POS_DocumentNumberPAN			182
#define PTEIDNG_FIELD_ID_LEN_DocumentNumberPAN			16
#define PTEIDNG_FIELD_ID_POS_DocumentVersion			214
#define PTEIDNG_FIELD_ID_LEN_DocumentVersion			16
#define PTEIDNG_FIELD_ID_POS_ValidityBeginDate			230
#define PTEIDNG_FIELD_ID_LEN_ValidityBeginDate			20
#define PTEIDNG_FIELD_ID_POS_LocalofRequest				250
#define PTEIDNG_FIELD_ID_LEN_LocalofRequest				60
#define PTEIDNG_FIELD_ID_POS_ValidityEndDate			310
#define PTEIDNG_FIELD_ID_LEN_ValidityEndDate			20
#define PTEIDNG_FIELD_ID_POS_Surname					330
#define PTEIDNG_FIELD_ID_LEN_Surname					120
#define PTEIDNG_FIELD_ID_POS_Name						450
#define PTEIDNG_FIELD_ID_LEN_Name						120
#define PTEIDNG_FIELD_ID_POS_Gender						570
#define PTEIDNG_FIELD_ID_LEN_Gender						2
#define PTEIDNG_FIELD_ID_POS_Nacionality				572
#define PTEIDNG_FIELD_ID_LEN_Nacionality				6
#define PTEIDNG_FIELD_ID_POS_DateOfBirth				578
#define PTEIDNG_FIELD_ID_LEN_DateOfBirth				20
#define PTEIDNG_FIELD_ID_POS_Height						598
#define PTEIDNG_FIELD_ID_LEN_Height						8
#define PTEIDNG_FIELD_ID_POS_CivilianIdNumber			606
#define PTEIDNG_FIELD_ID_LEN_CivilianIdNumber			18
#define PTEIDNG_FIELD_ID_POS_SurnameMother				624
#define PTEIDNG_FIELD_ID_LEN_SurnameMother				120
#define PTEIDNG_FIELD_ID_POS_GivenNameMother			744
#define PTEIDNG_FIELD_ID_LEN_GivenNameMother			120
#define PTEIDNG_FIELD_ID_POS_SurnameFather				864
#define PTEIDNG_FIELD_ID_LEN_SurnameFather				120
#define PTEIDNG_FIELD_ID_POS_GivenNameFather			984
#define PTEIDNG_FIELD_ID_LEN_GivenNameFather			120
#define PTEIDNG_FIELD_ID_POS_TaxNo						1104
#define PTEIDNG_FIELD_ID_LEN_TaxNo						18
#define PTEIDNG_FIELD_ID_POS_SocialSecurityNo			1122
#define PTEIDNG_FIELD_ID_LEN_SocialSecurityNo			22
#define PTEIDNG_FIELD_ID_POS_HealthNo					1144
#define PTEIDNG_FIELD_ID_LEN_HealthNo					18
#define PTEIDNG_FIELD_ID_POS_AccidentalIndications		1162
#define PTEIDNG_FIELD_ID_LEN_AccidentalIndications		120
#define PTEIDNG_FIELD_ID_POS_Mrz1						1282
#define PTEIDNG_FIELD_ID_LEN_Mrz1						30
#define PTEIDNG_FIELD_ID_POS_Mrz2						1312
#define PTEIDNG_FIELD_ID_LEN_Mrz2						30
#define PTEIDNG_FIELD_ID_POS_Mrz3						1342
#define PTEIDNG_FIELD_ID_LEN_Mrz3						30

// martinho - ok
#define PTEIDNG_FIELD_ID_POS_MODULUS					1372
#define PTEIDNG_FIELD_ID_LEN_MODULUS					128
#define PTEIDNG_FIELD_ID_POS_EXPONENT					1500
#define PTEIDNG_FIELD_ID_LEN_EXPONENT					3


// photo data - ok
#define PTEIDNG_FIELD_ID_POS_CBEFF						1503
#define PTEIDNG_FIELD_ID_LEN_CBEFF						34
#define PTEIDNG_FIELD_ID_POS_FACIALRECHDR				1537
#define PTEIDNG_FIELD_ID_LEN_FACIALRECHDR				14
#define PTEIDNG_FIELD_ID_POS_FACIALINFO					1551
#define PTEIDNG_FIELD_ID_LEN_FACIALINFO					20
#define PTEIDNG_FIELD_ID_POS_IMAGEINFO					1571
#define PTEIDNG_FIELD_ID_LEN_IMAGEINFO					12
#define PTEIDNG_FIELD_ID_POS_Photo						1583
#define PTEIDNG_FIELD_ID_LEN_Photo						14128


// common address defines - ok
#define PTEIDNG_FIELD_ADDRESS_POS_TYPE						0
#define PTEIDNG_FIELD_ADDRESS_LEN_TYPE						2
#define PTEIDNG_FIELD_ADDRESS_POS_COUNTRY					2
#define PTEIDNG_FIELD_ADDRESS_LEN_COUNTRY					4

// specific portuguese address details - ok
#define PTEIDNG_FIELD_ADDRESS_POS_DISTRICT					6
#define PTEIDNG_FIELD_ADDRESS_LEN_DISTRICT					4
#define PTEIDNG_FIELD_ADDRESS_POS_DISTRICT_DESCRIPTION		10
#define PTEIDNG_FIELD_ADDRESS_LEN_DISTRICT_DESCRIPTION		100
#define PTEIDNG_FIELD_ADDRESS_POS_MUNICIPALITY				110
#define PTEIDNG_FIELD_ADDRESS_LEN_MUNICIPALITY				8
#define PTEIDNG_FIELD_ADDRESS_POS_MUNICIPALITY_DESCRIPTION	118
#define PTEIDNG_FIELD_ADDRESS_LEN_MUNICIPALITY_DESCRIPTION	100
#define PTEIDNG_FIELD_ADDRESS_POS_CIVILPARISH				218
#define PTEIDNG_FIELD_ADDRESS_LEN_CIVILPARISH				12
#define PTEIDNG_FIELD_ADDRESS_POS_CIVILPARISH_DESCRIPTION	230
#define PTEIDNG_FIELD_ADDRESS_LEN_CIVILPARISH_DESCRIPTION	100
#define PTEIDNG_FIELD_ADDRESS_POS_ABBR_STREET_TYPE			330
#define PTEIDNG_FIELD_ADDRESS_LEN_ABBR_STREET_TYPE			20
#define PTEIDNG_FIELD_ADDRESS_POS_STREET_TYPE				350
#define PTEIDNG_FIELD_ADDRESS_LEN_STREET_TYPE				100
#define PTEIDNG_FIELD_ADDRESS_POS_STREETNAME				450
#define PTEIDNG_FIELD_ADDRESS_LEN_STREETNAME				200
#define PTEIDNG_FIELD_ADDRESS_POS_ABBR_BUILDING_TYPE		650
#define PTEIDNG_FIELD_ADDRESS_LEN_ABBR_BUILDING_TYPE		20
#define PTEIDNG_FIELD_ADDRESS_POS_BUILDING_TYPE				670
#define PTEIDNG_FIELD_ADDRESS_LEN_BUILDING_TYPE				100
#define PTEIDNG_FIELD_ADDRESS_POS_DOORNO					770
#define PTEIDNG_FIELD_ADDRESS_LEN_DOORNO					20
#define PTEIDNG_FIELD_ADDRESS_POS_FLOOR						790
#define PTEIDNG_FIELD_ADDRESS_LEN_FLOOR						40
#define PTEIDNG_FIELD_ADDRESS_POS_SIDE						830
#define PTEIDNG_FIELD_ADDRESS_LEN_SIDE						40
#define PTEIDNG_FIELD_ADDRESS_POS_PLACE						870
#define PTEIDNG_FIELD_ADDRESS_LEN_PLACE						100
#define PTEIDNG_FIELD_ADDRESS_POS_LOCALITY					970
#define PTEIDNG_FIELD_ADDRESS_LEN_LOCALITY					100
#define PTEIDNG_FIELD_ADDRESS_POS_ZIP4						1070
#define PTEIDNG_FIELD_ADDRESS_LEN_ZIP4						8
#define PTEIDNG_FIELD_ADDRESS_POS_ZIP3						1078
#define PTEIDNG_FIELD_ADDRESS_LEN_ZIP3						6
#define PTEIDNG_FIELD_ADDRESS_POS_POSTALLOCALITY			1084
#define PTEIDNG_FIELD_ADDRESS_LEN_POSTALLOCALITY			50
#define PTEIDNG_FIELD_ADDRESS_POS_GENADDRESS_NUM			1134
#define PTEIDNG_FIELD_ADDRESS_LEN_GENADDRESS_NUM			12

// generic foreign address details - ok
#define PTEIDNG_FIELD_FOREIGN_ADDRESS_POS_COUNTRY_DESCRIPTION	6
#define PTEIDNG_FIELD_FOREIGN_ADDRESS_LEN_COUNTRY_DESCRIPTION	100
#define PTEIDNG_FIELD_FOREIGN_ADDRESS_POS_ADDRESS				106
#define PTEIDNG_FIELD_FOREIGN_ADDRESS_LEN_ADDRESS				300
#define PTEIDNG_FIELD_FOREIGN_ADDRESS_POS_CITY					406
#define PTEIDNG_FIELD_FOREIGN_ADDRESS_LEN_CITY					100
#define PTEIDNG_FIELD_FOREIGN_ADDRESS_POS_REGION				506
#define PTEIDNG_FIELD_FOREIGN_ADDRESS_LEN_REGION				100
#define PTEIDNG_FIELD_FOREIGN_ADDRESS_POS_LOCALITY				606
#define PTEIDNG_FIELD_FOREIGN_ADDRESS_LEN_LOCALITY				100
#define PTEIDNG_FIELD_FOREIGN_ADDRESS_POS_POSTAL_CODE			706
#define PTEIDNG_FIELD_FOREIGN_ADDRESS_LEN_POSTAL_CODE			100
#define PTEIDNG_FIELD_FOREIGN_ADDRESS_POS_GENADDRESS_NUM		806
#define PTEIDNG_FIELD_FOREIGN_ADDRESS_LEN_GENADDRESS_NUM		12

//PTeid-ng Sod defines
#define PTEIDNG_FIELD_SOD_POS_FILE						0
#define PTEIDNG_FIELD_SOD_LEN_FILE						4000

//PTeid-ng PersoData defines
#define PTEIDNG_FIELD_PERSODATA_POS_FILE				0
#define PTEIDNG_FIELD_PERSODATA_LEN_FILE				1000

#define PTEID_FIELD_TAG_ID_Version				0x00
#define PTEID_FIELD_TAG_ID_CardNr				0x01
#define PTEID_FIELD_TAG_ID_ChipNr				0x02
#define PTEID_FIELD_TAG_ID_ValidityBeginDate		0x03
#define PTEID_FIELD_TAG_ID_ValidityEndDate		0x04
#define PTEID_FIELD_TAG_ID_IssuingMunicipality	0x05
#define PTEID_FIELD_TAG_ID_NationalNr			0x06
#define PTEID_FIELD_TAG_ID_Surname				0x07
#define PTEID_FIELD_TAG_ID_FirstName_1			0x08
#define PTEID_FIELD_TAG_ID_Nationality			0x0A
#define PTEID_FIELD_TAG_ID_LocationOfBirth		0x0B
#define PTEID_FIELD_TAG_ID_DateOfBirth			0x0C
#define PTEID_FIELD_TAG_ID_Gender				0x0D
#define PTEID_FIELD_TAG_ID_Nobility				0x0E
#define PTEID_FIELD_TAG_ID_DocumentType			0x0F
#define PTEID_FIELD_TAG_ID_SpecialStatus			0x10
#define PTEID_FIELD_TAG_ID_PhotoHash				0x11
#define PTEID_FIELD_TAG_ID_Duplicata				0x12
#define PTEID_FIELD_TAG_ID_SpecialOrganization	0x13
#define PTEID_FIELD_TAG_ID_MemberOfFamily		0x14

#define PTEID_FIELD_TAG_ADDR_Version				0x00
#define PTEID_FIELD_TAG_ADDR_Street				0x01
#define PTEID_FIELD_TAG_ADDR_ZipCode             0x02
#define PTEID_FIELD_TAG_ADDR_Municipality        0x03

#define PTEID_FIELD_BYTE_TOKENINFO_GraphicalPersonalisation             37
#define PTEID_FIELD_BYTE_TOKENINFO_ElectricalPersonalisation            38
#define PTEID_FIELD_BYTE_TOKENINFO_ElectricalPersonalisationInterface   39

//martinho - ok
#define PTEIDNG_FIELD_ROOTCA_PK_POS_MODULUS_IAS101		23
#define PTEIDNG_FIELD_ROOTCA_PK_POS_EXPONENT_IAS_101	153
#define PTEIDNG_FIELD_ROOTCA_PK_POS_MODULUS_IAS07		14
#define PTEIDNG_FIELD_ROOTCA_PK_POS_EXPONENT_IAS_07		155
#define PTEIDNG_FIELD_ROOTCA_PK_LEN_EXPONENT			3
#define PTEIDNG_FIELD_ROOTCA_PK_LEN_MODULUS				128


#define CARDTYPE_NAME_PTEID_EID					"eid"
#define CARDTYPE_NAME_PTEID_FOREIGNER			"foreigner"

#define PTEID_TLV_TAG_VERSION						0x00
#define PTEID_TLV_TAG_FILE_ID						0x01
#define PTEID_TLV_TAG_FILE_IDSIGN					0x02
#define PTEID_TLV_TAG_FILE_ADDR						0x03
#define PTEID_TLV_TAG_FILE_ADDRSIGN					0x04
#define PTEID_TLV_TAG_FILE_SOD						0x05
#define PTEID_TLV_TAG_FILE_CARDINFO					0x06
#define PTEID_TLV_TAG_FILE_TOKENINFO					0x07
#define PTEID_TLV_TAG_FILE_CHALLENGE					0x09
#define PTEID_TLV_TAG_FILE_CHALLENGE_RESPONSE		0x0A
#define PTEID_TLV_TAG_CARDTYPE						0x0B
#define PTEID_TLV_TAG_FILE_CERTS						0x0C
#define PTEID_TLV_TAG_FILE_PINS						0x0D

#define PTEID_CSV_TAG_VERSION						0
#define PTEID_CSV_TAG_CARDTYPE						1
#define PTEID_CSV_TAG_FILE_ID						26
#define PTEID_CSV_TAG_FILE_IDSIGN					27
#define PTEID_CSV_TAG_FILE_ADDR						28
#define PTEID_CSV_TAG_FILE_ADDRSIGN					29
#define PTEID_CSV_TAG_FILE_PHOTO						30
#define PTEID_CSV_TAG_FILE_CARDINFO					47
#define PTEID_CSV_TAG_FILE_TOKENINFO					48
#define PTEID_CSV_TAG_FILE_CHALLENGE					49
#define PTEID_CSV_TAG_FILE_CHALLENGE_RESPONSE		50
#define PTEID_CSV_TAG_FILE_CERTS_COUNT				55
#define PTEID_CSV_TAG_FILE_CERTS_FIRST				58
#define PTEID_CSV_TAG_FILE_CERTS_P15_FIRST			59
#define PTEID_CSV_TAG_FILE_CERTS_STEP				4
#define PTEID_CSV_TAG_FILE_PINS_STEP					7

#define PTEID_XML_PATH_FILE_ID					"/pteid_card/biographic/files/file_id"
#define PTEID_XML_PATH_FILE_IDSIGN				"/pteid_card/biographic/files/file_id_sign"
#define PTEID_XML_PATH_FILE_ADDR					"/pteid_card/biographic/files/file_address"
#define PTEID_XML_PATH_FILE_ADDRSIGN				"/pteid_card/biographic/files/file_address_sign"
#define PTEID_XML_PATH_FILE_PHOTO				"/pteid_card/biometric/picture/data"
#define PTEID_XML_PATH_FILE_CARDINFO				"/pteid_card/scard/files/file_datainfo"
#define PTEID_XML_PATH_FILE_TOKENINFO			"/pteid_card/scard/files/file_tokeninfo"
#define PTEID_XML_PATH_FILE_CHALLENGE			"/pteid_card/challenge_response/challenge"
#define PTEID_XML_PATH_FILE_CHALLENGE_RESPONSE	"/pteid_card/challenge_response/response"
#define PTEID_XML_PATH_FILE_CERTS				"/pteid_card/cryptographic/certificates/certificate/data"
#define PTEID_XML_PATH_FILE_CERTS_P15			"/pteid_card/cryptographic/certificates/certificate/p15_struct"
#define PTEID_XML_PATH_FILE_PINS_P15				"/pteid_card/cryptographic/pins/pin/p15_struct"

/* Root Certificates */
static const unsigned char _pteid_root_cert[] =
{
		0x30,0x82,0x07,0xAF,0x30,0x82,0x05,0x97,0xA0,0x03,0x02,0x01,0x02,0x02,0x08,0x58,
		0xA8,0x7F,0x85,0x74,0xDC,0x28,0xD2,0x30,0x0D,0x06,0x09,0x2A,0x86,0x48,0x86,0xF7,
		0x0D,0x01,0x01,0x05,0x05,0x00,0x30,0x81,0x84,0x31,0x20,0x30,0x1E,0x06,0x03,0x55,
		0x04,0x03,0x0C,0x17,0x43,0x61,0x72,0x74,0xC3,0xA3,0x6F,0x20,0x64,0x65,0x20,0x43,
		0x69,0x64,0x61,0x64,0xC3,0xA3,0x6F,0x20,0x30,0x30,0x31,0x31,0x11,0x30,0x0F,0x06,
		0x03,0x55,0x04,0x0B,0x0C,0x08,0x45,0x43,0x45,0x73,0x74,0x61,0x64,0x6F,0x31,0x40,
		0x30,0x3E,0x06,0x03,0x55,0x04,0x0A,0x0C,0x37,0x53,0x43,0x45,0x45,0x20,0x2D,0x20,
		0x53,0x69,0x73,0x74,0x65,0x6D,0x61,0x20,0x64,0x65,0x20,0x43,0x65,0x72,0x74,0x69,
		0x66,0x69,0x63,0x61,0xC3,0xA7,0xC3,0xA3,0x6F,0x20,0x45,0x6C,0x65,0x63,0x74,0x72,
		0xC3,0xB3,0x6E,0x69,0x63,0x61,0x20,0x64,0x6F,0x20,0x45,0x73,0x74,0x61,0x64,0x6F,
		0x31,0x0B,0x30,0x09,0x06,0x03,0x55,0x04,0x06,0x13,0x02,0x50,0x54,0x30,0x1E,0x17,
		0x0D,0x30,0x37,0x30,0x31,0x32,0x36,0x31,0x38,0x35,0x30,0x34,0x31,0x5A,0x17,0x0D,
		0x31,0x38,0x30,0x35,0x32,0x37,0x31,0x39,0x30,0x30,0x34,0x31,0x5A,0x30,0x81,0x84,
		0x31,0x20,0x30,0x1E,0x06,0x03,0x55,0x04,0x03,0x0C,0x17,0x43,0x61,0x72,0x74,0xC3,
		0xA3,0x6F,0x20,0x64,0x65,0x20,0x43,0x69,0x64,0x61,0x64,0xC3,0xA3,0x6F,0x20,0x30,
		0x30,0x31,0x31,0x11,0x30,0x0F,0x06,0x03,0x55,0x04,0x0B,0x0C,0x08,0x45,0x43,0x45,
		0x73,0x74,0x61,0x64,0x6F,0x31,0x40,0x30,0x3E,0x06,0x03,0x55,0x04,0x0A,0x0C,0x37,
		0x53,0x43,0x45,0x45,0x20,0x2D,0x20,0x53,0x69,0x73,0x74,0x65,0x6D,0x61,0x20,0x64,
		0x65,0x20,0x43,0x65,0x72,0x74,0x69,0x66,0x69,0x63,0x61,0xC3,0xA7,0xC3,0xA3,0x6F,
		0x20,0x45,0x6C,0x65,0x63,0x74,0x72,0xC3,0xB3,0x6E,0x69,0x63,0x61,0x20,0x64,0x6F,
		0x20,0x45,0x73,0x74,0x61,0x64,0x6F,0x31,0x0B,0x30,0x09,0x06,0x03,0x55,0x04,0x06,
		0x13,0x02,0x50,0x54,0x30,0x82,0x02,0x22,0x30,0x0D,0x06,0x09,0x2A,0x86,0x48,0x86,
		0xF7,0x0D,0x01,0x01,0x01,0x05,0x00,0x03,0x82,0x02,0x0F,0x00,0x30,0x82,0x02,0x0A,
		0x02,0x82,0x02,0x01,0x00,0xE7,0xFA,0x84,0x16,0x6C,0xE8,0x5E,0xD9,0x4E,0x88,0x1F,
		0x94,0xBC,0x3E,0x42,0x4D,0xE7,0xA2,0xCC,0x42,0x53,0xC2,0xCB,0x5F,0xD8,0x93,0x13,
		0x4B,0xC6,0xCE,0x6E,0x1B,0x31,0x5C,0xA2,0xA1,0x9A,0xB6,0xE0,0xEC,0x60,0xA1,0xB4,
		0x27,0xEF,0x60,0x44,0xBA,0x29,0x53,0x11,0x55,0x0A,0x3C,0x6F,0x48,0xA5,0x40,0x04,
		0x5F,0xFF,0xF3,0xBF,0xDA,0x5C,0x13,0x56,0xD7,0x44,0x01,0x2F,0x78,0xBA,0x83,0x90,
		0xCB,0x18,0x87,0x7A,0x62,0xCA,0x7A,0x62,0x92,0x0B,0x08,0x0A,0x95,0x89,0x93,0x9F,
		0x9D,0x9C,0xD4,0x8C,0xC1,0x5B,0x9E,0x5C,0xE4,0x08,0xEF,0x74,0xCF,0x66,0xF1,0x84,
		0xF3,0xC6,0xF3,0xAB,0x8D,0xB3,0xFF,0x91,0x79,0x2C,0x84,0xF0,0xF8,0xE3,0x4F,0x88,
		0x32,0x7F,0x06,0x2A,0xAB,0x3A,0x20,0xC0,0x66,0xC2,0xDE,0xBB,0x42,0x32,0xEB,0xF6,
		0x9F,0xF4,0xD8,0xA8,0x89,0x1C,0x78,0x5D,0xA1,0x01,0xD9,0x7C,0xB3,0x02,0x53,0x52,
		0x5D,0x37,0x19,0xC8,0x88,0x3E,0x05,0xD0,0x3C,0xDA,0xFF,0xA1,0xE9,0x07,0xA3,0x6A,
		0xCB,0x56,0x84,0xC4,0x10,0x6A,0x53,0x6F,0x46,0x95,0x59,0x05,0xD0,0x86,0x0F,0xE8,
		0xC3,0xEA,0x87,0xA7,0xF7,0xF1,0x9D,0xBC,0xFC,0x59,0x48,0x3F,0x9A,0x5C,0xDB,0x8A,
		0x99,0xFE,0x2F,0xB1,0x41,0x3E,0xAB,0x9A,0xBB,0x92,0x53,0xA7,0xF2,0x40,0xDB,0xB9,
		0xE3,0xAB,0xAE,0x02,0x4E,0x32,0xE5,0xBE,0x85,0x68,0x82,0x12,0xA5,0x8F,0x6D,0x3A,
		0xC1,0x96,0x86,0x31,0x99,0xE5,0xB5,0x8F,0xB0,0x7F,0x9B,0xED,0x38,0x05,0xB5,0x00,
		0x85,0x65,0x74,0x8B,0x50,0x85,0x19,0x90,0x4C,0x30,0x57,0xFB,0xA4,0xDA,0xB6,0x5E,
		0xDA,0x9F,0xEF,0xC0,0x51,0x52,0xF8,0x5F,0x81,0xCC,0x57,0x20,0x0F,0xDB,0xBD,0xB0,
		0xC5,0x36,0x1D,0xF7,0x42,0x3C,0x8D,0xB2,0x9D,0xB2,0x66,0x6A,0x26,0xB6,0xA4,0xAA,
		0x5B,0xB7,0xDE,0x6B,0xEA,0x4C,0x73,0xF5,0x46,0xE6,0xB6,0xA2,0xA1,0x87,0xB0,0x83,
		0x48,0xBE,0x1F,0x3E,0x3A,0x91,0xA1,0x74,0x30,0x75,0xE1,0x87,0xE4,0x1A,0x7B,0xBD,
		0xF8,0x87,0x9B,0xBD,0xD9,0x35,0xEE,0x0C,0x54,0x57,0xAA,0xB2,0x85,0x4F,0xA2,0x37,
		0x0F,0xCC,0x4F,0xA5,0xD3,0x10,0x11,0xED,0xDC,0x6D,0x03,0xF6,0x34,0x44,0x2E,0xF6,
		0xD0,0x1C,0x67,0xDC,0x3D,0x5E,0x23,0x49,0x46,0xDD,0x84,0x13,0x53,0xF5,0x03,0x5F,
		0x50,0x76,0x85,0x78,0x11,0x8B,0x54,0x50,0x22,0xA1,0x78,0x39,0x5D,0x7C,0xDF,0xA1,
		0xA8,0x35,0xDF,0x48,0x35,0xC2,0x5D,0x46,0xDA,0x9B,0x3F,0xC8,0xFF,0x12,0x19,0xB7,
		0x0F,0xBD,0x48,0xB3,0x31,0xCC,0x5F,0xD5,0x49,0x60,0x7B,0x31,0xEF,0x64,0x4E,0x95,
		0xFE,0xD8,0xC2,0xFE,0xA4,0x27,0x73,0x5A,0x7C,0xC3,0xCE,0x0E,0x5D,0x63,0x48,0xFE,
		0x05,0x02,0x1C,0x7C,0xFF,0x38,0xA6,0x61,0x5A,0x4E,0x5B,0xFE,0x37,0x48,0xB0,0xAE,
		0xB9,0xD0,0x06,0x28,0x65,0xBC,0xB5,0xC4,0xCE,0x2C,0x10,0x62,0x0F,0xEB,0xC3,0x10,
		0x8D,0xF3,0x90,0x63,0x27,0x46,0x14,0x8E,0x22,0x2A,0x0E,0x0F,0x2E,0xD3,0x31,0x4C,
		0x01,0x38,0x9F,0xEC,0x3C,0x51,0x78,0x9F,0x9E,0x20,0x90,0x11,0x8B,0x23,0xA3,0x8E,
		0x04,0xD2,0x4C,0x3B,0x49,0x02,0x03,0x01,0x00,0x01,0xA3,0x82,0x02,0x21,0x30,0x82,
		0x02,0x1D,0x30,0x0F,0x06,0x03,0x55,0x1D,0x13,0x01,0x01,0xFF,0x04,0x05,0x30,0x03,
		0x01,0x01,0xFF,0x30,0x0E,0x06,0x03,0x55,0x1D,0x0F,0x01,0x01,0xFF,0x04,0x04,0x03,
		0x02,0x01,0x06,0x30,0x1D,0x06,0x03,0x55,0x1D,0x0E,0x04,0x16,0x04,0x14,0xB2,0x67,
		0x30,0xB2,0xCF,0x45,0x6A,0xE3,0x91,0xB5,0x6F,0x3B,0x63,0xFB,0x8D,0xA8,0xA7,0xE1,
		0x6D,0x9E,0x30,0x1F,0x06,0x03,0x55,0x1D,0x23,0x04,0x18,0x30,0x16,0x80,0x14,0xB2,
		0x67,0x30,0xB2,0xCF,0x45,0x6A,0xE3,0x91,0xB5,0x6F,0x3B,0x63,0xFB,0x8D,0xA8,0xA7,
		0xE1,0x6D,0x9E,0x30,0x82,0x01,0x5F,0x06,0x03,0x55,0x1D,0x20,0x04,0x82,0x01,0x56,
		0x30,0x82,0x01,0x52,0x30,0x81,0xB3,0x06,0x0B,0x60,0x84,0x6C,0x01,0x01,0x01,0x02,
		0x04,0x00,0x01,0x01,0x30,0x81,0xA3,0x30,0x81,0xA0,0x06,0x08,0x2B,0x06,0x01,0x05,
		0x05,0x07,0x02,0x02,0x30,0x81,0x93,0x1E,0x81,0x90,0x00,0x68,0x00,0x74,0x00,0x74,
		0x00,0x70,0x00,0x3A,0x00,0x2F,0x00,0x2F,0x00,0x70,0x00,0x6B,0x00,0x69,0x00,0x2E,
		0x00,0x63,0x00,0x61,0x00,0x72,0x00,0x74,0x00,0x61,0x00,0x6F,0x00,0x64,0x00,0x65,
		0x00,0x63,0x00,0x69,0x00,0x64,0x00,0x61,0x00,0x64,0x00,0x61,0x00,0x6F,0x00,0x2E,
		0x00,0x70,0x00,0x74,0x00,0x2F,0x00,0x70,0x00,0x75,0x00,0x62,0x00,0x6C,0x00,0x69,
		0x00,0x63,0x00,0x6F,0x00,0x2F,0x00,0x70,0x00,0x6F,0x00,0x6C,0x00,0x69,0x00,0x74,
		0x00,0x69,0x00,0x63,0x00,0x61,0x00,0x73,0x00,0x2F,0x00,0x70,0x00,0x63,0x00,0x2F,
		0x00,0x63,0x00,0x63,0x00,0x5F,0x00,0x65,0x00,0x63,0x00,0x5F,0x00,0x63,0x00,0x69,
		0x00,0x64,0x00,0x61,0x00,0x64,0x00,0x61,0x00,0x6F,0x00,0x5F,0x00,0x70,0x00,0x63,
		0x00,0x2E,0x00,0x68,0x00,0x74,0x00,0x6D,0x00,0x6C,0x30,0x32,0x06,0x04,0x55,0x1D,
		0x20,0x00,0x30,0x2A,0x30,0x28,0x06,0x08,0x2B,0x06,0x01,0x05,0x05,0x07,0x02,0x01,
		0x16,0x1C,0x68,0x74,0x74,0x70,0x3A,0x2F,0x2F,0x77,0x77,0x77,0x2E,0x73,0x63,0x65,
		0x65,0x2E,0x67,0x6F,0x76,0x2E,0x70,0x74,0x2F,0x70,0x63,0x65,0x72,0x74,0x30,0x66,
		0x06,0x0A,0x60,0x84,0x6C,0x01,0x01,0x01,0x02,0x04,0x00,0x07,0x30,0x58,0x30,0x56,
		0x06,0x08,0x2B,0x06,0x01,0x05,0x05,0x07,0x02,0x01,0x16,0x4A,0x68,0x74,0x74,0x70,
		0x3A,0x2F,0x2F,0x70,0x6B,0x69,0x2E,0x63,0x61,0x72,0x74,0x61,0x6F,0x64,0x65,0x63,
		0x69,0x64,0x61,0x64,0x61,0x6F,0x2E,0x70,0x74,0x2F,0x70,0x75,0x62,0x6C,0x69,0x63,
		0x6F,0x2F,0x70,0x6F,0x6C,0x69,0x74,0x69,0x63,0x61,0x73,0x2F,0x64,0x70,0x63,0x2F,
		0x63,0x63,0x5F,0x65,0x63,0x5F,0x63,0x69,0x64,0x61,0x64,0x61,0x6F,0x5F,0x64,0x70,
		0x63,0x2E,0x68,0x74,0x6D,0x6C,0x30,0x57,0x06,0x03,0x55,0x1D,0x1F,0x04,0x50,0x30,
		0x4E,0x30,0x4C,0xA0,0x4A,0xA0,0x48,0x86,0x46,0x68,0x74,0x74,0x70,0x3A,0x2F,0x2F,
		0x70,0x6B,0x69,0x2E,0x63,0x61,0x72,0x74,0x61,0x6F,0x64,0x65,0x63,0x69,0x64,0x61,
		0x64,0x61,0x6F,0x2E,0x70,0x74,0x2F,0x70,0x75,0x62,0x6C,0x69,0x63,0x6F,0x2F,0x6C,
		0x72,0x63,0x2F,0x63,0x63,0x5F,0x65,0x63,0x5F,0x63,0x69,0x64,0x61,0x64,0x61,0x6F,
		0x5F,0x63,0x72,0x6C,0x30,0x30,0x31,0x5F,0x63,0x72,0x6C,0x2E,0x63,0x72,0x6C,0x30,
		0x0D,0x06,0x09,0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x01,0x05,0x05,0x00,0x03,0x82,
		0x02,0x01,0x00,0x47,0x57,0xE7,0xE8,0x9A,0x0C,0x2C,0x2C,0xDA,0xB2,0x2B,0x2E,0x52,
		0xE9,0xA2,0xB3,0xB8,0xB6,0x5A,0x32,0x98,0xF5,0xD7,0xC5,0x59,0x50,0xD7,0xAF,0x5E,
		0xAF,0x6E,0xDB,0x35,0xAD,0xC9,0x8D,0x5D,0x70,0x26,0x4B,0xD5,0x37,0x87,0x59,0x6F,
		0x41,0x15,0x88,0x01,0x53,0x97,0x16,0x33,0xAC,0xC9,0xF8,0xC0,0x70,0x27,0x28,0xC5,
		0x92,0x61,0x76,0x23,0x14,0x83,0x5E,0xFD,0x00,0x08,0xD2,0xAE,0x4B,0xCB,0x45,0x18,
		0x6C,0xC1,0xD5,0xC4,0x5D,0xB6,0xB7,0x02,0x88,0xE6,0xDC,0x33,0x1D,0x31,0x42,0xA7,
		0xFC,0xB7,0xE9,0xAC,0x15,0xE8,0x6F,0x6A,0xC6,0xE7,0x27,0x36,0x83,0xFC,0x5A,0x5E,
		0xA8,0x6A,0xD7,0x7B,0x67,0xF3,0xE2,0x17,0xA7,0x45,0x96,0x1E,0x06,0x48,0xD1,0xFB,
		0x52,0x10,0x02,0xD2,0x62,0x7A,0x21,0xA8,0x11,0x2A,0x76,0xA3,0xB5,0x19,0x70,0xC8,
		0x51,0x7C,0x7E,0x8E,0xD8,0x5A,0xED,0x35,0xF1,0xE4,0xE6,0xD2,0x4D,0x4F,0xAB,0x7F,
		0x46,0x5A,0x67,0x6E,0x53,0x0F,0x2A,0x81,0x12,0x95,0x03,0x89,0x79,0x1D,0x78,0x72,
		0xF8,0xD8,0xCF,0xE8,0xFD,0x63,0x1A,0x6B,0x49,0xB1,0x1C,0xC3,0x63,0x11,0x19,0xC6,
		0x64,0x46,0x35,0x09,0x70,0x1D,0xFA,0x0D,0x09,0x4C,0x0A,0xF3,0xEC,0x1D,0xB2,0xBF,
		0x9D,0xB4,0xD1,0x78,0xA1,0x88,0x84,0x92,0x5F,0x65,0x76,0xB6,0x62,0xA2,0xC8,0xE4,
		0x39,0xBD,0x53,0x6D,0xE9,0x73,0x4F,0xA7,0x4A,0x4A,0xBE,0xEE,0x2A,0x67,0xE3,0xC3,
		0xD2,0x4A,0xE1,0xB5,0xC2,0x61,0x1F,0x1E,0x53,0xDD,0xCC,0x95,0x1A,0x12,0xBC,0x9E,
		0xBE,0x2A,0x95,0x8E,0xBF,0xCB,0xD4,0xD3,0x7E,0x5F,0x60,0x96,0xA7,0x3D,0x0B,0xF6,
		0xD5,0xE4,0x28,0x24,0x97,0xE5,0xDB,0x13,0x59,0xDC,0xA4,0x89,0x6B,0xF3,0x07,0xF8,
		0x5A,0x5F,0x36,0xB7,0x37,0x42,0x1C,0x08,0xFE,0xF6,0x1F,0xE8,0x41,0x61,0x9F,0xDB,
		0x0F,0x62,0xF1,0x7B,0xC6,0x0C,0x60,0x62,0x89,0xF6,0xEF,0x54,0x82,0x16,0x50,0x4E,
		0xCF,0x72,0xDD,0xF5,0xAD,0xB7,0x8E,0xDF,0xC1,0xEC,0xDA,0xE2,0xD9,0xD2,0x10,0xF4,
		0x2E,0xC4,0x19,0xEA,0xF5,0xF8,0x63,0x87,0xE6,0xD1,0x4F,0x13,0xC7,0x04,0x5E,0x1B,
		0xCA,0x14,0x3B,0x95,0xF8,0xB4,0xA5,0x91,0x60,0x3C,0xDC,0x8F,0x09,0x43,0x34,0x28,
		0x1C,0xA6,0x6A,0x48,0x05,0x58,0xA6,0x9A,0x6E,0x8D,0x77,0xC4,0x9B,0x52,0x63,0x27,
		0xE9,0x63,0x28,0x03,0x82,0x8B,0xB2,0xB4,0xD3,0xCE,0x3A,0xC6,0xCA,0x48,0xAE,0x78,
		0xF6,0x25,0x78,0x4E,0xCF,0xB8,0x82,0x41,0x57,0x50,0x89,0xDB,0x2B,0xEB,0xFC,0x58,
		0xA5,0x24,0xF2,0x12,0x9E,0xA4,0xF5,0x1E,0x67,0xA5,0x95,0xC6,0x93,0x12,0x59,0xD3,
		0x50,0x66,0xD6,0xF9,0x54,0xC2,0xB5,0x6F,0x6C,0x3C,0x09,0x39,0x00,0xE2,0x10,0x17,
		0xC1,0x5D,0x61,0x15,0x13,0x06,0x2D,0xDF,0x4E,0x9F,0xEA,0x67,0x88,0x7D,0xAC,0x69,
		0xC9,0x6A,0xAD,0xE3,0x82,0x33,0xD1,0xC2,0x6A,0xA2,0x14,0x84,0x26,0x1B,0x2B,0xB4,
		0x3E,0x1A,0xAD,0xB1,0x32,0x98,0x98,0x61,0x66,0x03,0xBB,0x0E,0x28,0xFE,0x2B,0x26,
		0x13,0x18,0xF8,0x8F,0xF7,0xDB,0xE4,0xC6,0xF8,0xD5,0x5E,0xA7,0x27,0xE4,0x70,0x36,
		0x93,0x56,0x8B,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
};

static const unsigned char *const _pteid_root_certs[] = 
{
	_pteid_root_cert,
	NULL
};

static const unsigned long _pteid_root_certs_size[] = 
{
	sizeof(_pteid_root_cert)
};

static const char *const _pteid_files_to_warn[] = 
{
	PTEID_FILE_ID,			
	PTEID_FILE_ADDRESS,		
	PTEID_FILE_SOD,
	NULL
};

}

#endif //__CARDPTEIDDEF_H__
