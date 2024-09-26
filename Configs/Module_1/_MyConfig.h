/*
   This file is meant to keep your settings after an upgrade of the multi source.
   If you know parameters you want for sure to be enabled or disabled in future
   then just force their values here.
   To enable  a setting use #define <setting name>
   To disable a setting use #undef  <setting name>
*/

// For example you can also define multiple module configurations, uncomment the one you want to compile for:
#define Module_1
//#define Module_2
//#define Module_3

//Example on how to force the "Flash from TX" feature for all modules
#define CHECK_FOR_BOOTLOADER

//Example on how to force the same ID for all modules: be carefull this is really if you want to be able to use one or another radio but not both!
//#define FORCE_GLOBAL_ID	0x12345678

#if defined Module_1
	//Example on how to remove unwanted protocols to fit in flash for Atmega 328 modules
	#undef	AFHDS2A_A7105_INO

	#undef	DEVO_CYRF6936_INO
	#undef	J6PRO_CYRF6936_INO
	#undef	WK2x01_CYRF6936_INO

	#undef	FRSKYV_CC2500_INO
	#undef	FRSKYX_CC2500_INO

	#undef	KN_NRF24L01_INO
	#undef	SLT_CCNRF_INO

	#undef	FY326_NRF24L01_INO
	#undef	FQ777_NRF24L01_INO
	#undef	ASSAN_NRF24L01_INO
	#undef	HONTAI_NRF24L01_INO
	#undef	Q303_CCNRF_INO
	#undef	GW008_NRF24L01_INO
	#undef	DM002_NRF24L01_INO
	#undef	CABELL_NRF24L01_INO
	#undef	ESKY150_NRF24L01_INO
	#undef	H8_3D_NRF24L01_INO

	#undef	AFHDS2A_RX_A7105_INO
	#undef	BUGS_A7105_INO
	#undef	FLYSKY_A7105_INO
	#undef	HEIGHT_A7105_INO
	#undef	HUBSAN_A7105_INO
	#undef	JOYSWAY_A7105_INO
	#undef	KYOSHO_A7105_INO
	#undef	PELIKAN_A7105_INO
	#undef	WFLY2_A7105_INO
	#undef	DSM_RX_CYRF6936_INO
	#undef	E010R5_CYRF6936_INO
	#undef	E01X_CYRF6936_INO
	#undef	E129_CYRF6936_INO
	#undef	J6PRO_CYRF6936_INO
	#undef	KYOSHO3_CYRF6936_INO
	#undef	LOSI_CYRF6936_INO		//Need DSM to be enabled
	#undef	MLINK_CYRF6936_INO
	#undef	SCORPIO_CYRF6936_INO
	#undef	TRAXXAS_CYRF6936_INO
	#undef	WFLY_CYRF6936_INO
	#undef	WK2x01_CYRF6936_INO
	#undef	ESKY150V2_CC2500_INO
	#undef	FRSKYL_CC2500_INO
	#undef	FRSKYD_CC2500_INO
	#undef	FRSKYV_CC2500_INO
	#undef	FRSKYX_CC2500_INO
	#undef	FRSKY_RX_CC2500_INO
	#undef	HITEC_CC2500_INO
	#undef	HOTT_CC2500_INO
	#undef	SCANNER_CC2500_INO
	#undef	FUTABA_CC2500_INO
	#undef	SKYARTEC_CC2500_INO
	#undef	REDPINE_CC2500_INO
	#undef	RLINK_CC2500_INO
	#undef	BAYANG_RX_NRF24L01_INO
	#undef	BUGSMINI_NRF24L01_INO
	#undef	CABELL_NRF24L01_INO
	#undef	CFLIE_NRF24L01_INO
	#undef	CG023_NRF24L01_INO
	#undef	CX10_NRF24L01_INO		//Include Q2X2 protocol
	#undef	DM002_NRF24L01_INO
	#undef	E016H_NRF24L01_INO
	#undef	EAZYRC_NRF24L01_INO
	#undef	ESKY_NRF24L01_INO
	#undef	ESKY150_NRF24L01_INO
	#undef	FQ777_NRF24L01_INO
	#undef	FX_NRF24L01_INO
	#undef	FY326_NRF24L01_INO
	#undef	GW008_NRF24L01_INO
	#undef	HISKY_NRF24L01_INO
	#undef	HONTAI_NRF24L01_INO
	#undef	H8_3D_NRF24L01_INO
	#undef	JJRC345_NRF24L01_INO
	#undef	KN_NRF24L01_INO
	#undef	KYOSHO2_NRF24L01_INO
	#undef	LOLI_NRF24L01_INO
	#undef	MOULDKG_NRF24L01_INO
	#undef	NCC1701_NRF24L01_INO
	#undef	POTENSIC_NRF24L01_INO
	#undef	PROPEL_NRF24L01_INO
	#undef	REALACC_NRF24L01_INO
	#undef	SGF22_NRF24L01_INO
	#undef	SHENQI_NRF24L01_INO
	#undef	SYMAX_NRF24L01_INO
	#undef	V2X2_NRF24L01_INO
	#undef	V761_NRF24L01_INO
	#undef	XERALL_NRF24L01_INO
	#undef	YD717_NRF24L01_INO
	#undef	ZSX_NRF24L01_INO

#elif defined Module_2
	//Example of a module which doesn't need the telemetry signal to be inverted
	#undef INVERT_TELEMETRY
	
#elif defined Module_3
	//Example of a module which will be PPM only with a different protocol table
	#undef ENABLE_SERIAL
	#undef NBR_BANKS
	#define NBR_BANKS 1		// redefine the number of banks
	#define MY_PPM_PROT		// Use the bellow protocol list
	const PPM_Parameters My_PPM_prot[14*NBR_BANKS]={
//******************************       BANK 1       ******************************
//	Switch	Protocol 		Sub protocol	RX_Num	Power		Auto Bind		Option	Chan Order
/*	1	*/	{PROTO_KN	,	WLTOYS		,	0	,	P_HIGH	,	NO_AUTOBIND	,	0	,	0x00000000 },
/*	2	*/	{PROTO_FLYSKY,	Flysky		,	0	,	P_HIGH	,	AUTOBIND	,	0	,	0x00000000 },
/*	3	*/	{PROTO_AFHDS2A,	PWM_IBUS	,	1	,	P_HIGH	,	NO_AUTOBIND	,	0	,	0x00000000 },	// RX number 1
/*	4	*/	{PROTO_AFHDS2A,	PWM_IBUS	,	2	,	P_HIGH	,	NO_AUTOBIND	,	0	,	0x00000000 },	// RX number 2
/*	5	*/	{PROTO_AFHDS2A,	PWM_IBUS	,	3	,	P_HIGH	,	NO_AUTOBIND	,	0	,	0x00000000 },	// RX number 3
/*	6	*/	{PROTO_AFHDS2A,	PWM_IBUS	,	2	,	P_HIGH	,	NO_AUTOBIND	,	0	,	0x00000000 },	// RX number 4
/*	7	*/	{PROTO_AFHDS2A,	PWM_IBUS	,	3	,	P_HIGH	,	NO_AUTOBIND	,	0	,	0x00000000 },	// RX number 5
/*	8	*/	{PROTO_HUBSAN,	H107		,	0	,	P_HIGH	,	NO_AUTOBIND	,	0	,	0x00000000 },
/*	9	*/	{PROTO_FRSKYV,	NONE		,	0	,	P_HIGH	,	NO_AUTOBIND	,	40	,	0x00000000 },	// option=fine freq tuning
/*	10	*/	{PROTO_FRSKYD,	NONE		,	0	,	P_HIGH	,	NO_AUTOBIND	,	40	,	0x00000000 },	// option=fine freq tuning
/*	11	*/	{PROTO_FRSKYX,	CH_16		,	0	,	P_HIGH	,	NO_AUTOBIND	,	40	,	0x00000000 },	// option=fine freq tuning
/*	12	*/	{PROTO_FRSKYX,	EU_16		,	0	,	P_HIGH	,	NO_AUTOBIND	,	40	,	0x00000000 },	// option=fine freq tuning
/*	13	*/	{PROTO_DEVO	,	NONE		,	0	,	P_HIGH	,	NO_AUTOBIND	,	0	,	0x00000000 },
/*	14	*/	{PROTO_WK2x01,	WK2801		,	0	,	P_HIGH	,	NO_AUTOBIND	,	0	,	0x00000000 },
	};
#endif
