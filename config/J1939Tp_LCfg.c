/*
* Configuration of module: J1939Tp (J1939Tp_LCfg.c)
*
* Created by:              
* Copyright:               
*
* Configured for (MCU):    HCS12
*
* Module vendor:           ArcCore
* Generator version:       1.0.7
*
* Generated by Arctic Studio (http://arccore.com) 
*/

	

#include "J1939Tp.h"
#include "CanIf.h"
#include "PduR.h"

extern const J1939Tp_PgType Pgs[J1939TP_PG_COUNT];

const J1939Tp_PgType* TxChannel1_Pgs[TXCHANNEL1_PG_COUNT] = {
	&(Pgs[0]),
};
const J1939Tp_PgType* RxChannel1_Pgs[RXCHANNEL1_PG_COUNT] = {
	&(Pgs[1]),
};

const J1939Tp_ChannelType J1939Tp_Channels[J1939TP_CHANNEL_COUNT] = {
	{	/* TxChannel1 */
		/* .Protocol = */ J1939TP_PROTOCOL_CMDT,
		/* .DtNPdu = */ CANIF_TX_vEcuC_Pdu_1,
		/* .CmNPdu = */ CANIF_TX_vEcuC_Pdu_1,
		/* .FcNPdu = */ CANIF_RX_vEcuC_Pdu_1,			
		/* .Direction = */ J1939TP_TX,
		/* .PgCount = */ TXCHANNEL1_PG_COUNT,
		/* .Pgs = */ TxChannel1_Pgs			
	},
	{	/* RxChannel1 */
		/* .Protocol = */ J1939TP_PROTOCOL_CMDT,
		/* .DtNPdu = */ CANIF_RX_vEcuC_Pdu_1,
		/* .CmNPdu = */ CANIF_RX_vEcuC_Pdu_1,
		/* .FcNPdu = */ CANIF_TX_vEcuC_Pdu_1,			
		/* .Direction = */ J1939TP_TX,
		/* .PgCount = */ TXCHANNEL1_PG_COUNT,
		/* .Pgs = */ RxChannel1_Pgs			
	}
};

const J1939Tp_PgType Pgs[J1939TP_PG_COUNT] = {
		{	//PG: TxPg
		    /* .DynLength = */ FALSE,
			/* .Pgn = */ 0,			
			/* .DirectNPdu = */ CANIF_TX_vEcuC_Pdu_1,			
			/* .NSdu = */ PDUR_TX_vEcuC_Pdu_1,
			/* .Channel = */ &J1939Tp_Channels[0] /* parent channel */
		},
		{	//PG: RxPg
		    /* .DynLength = */ FALSE,
			/* .Pgn = */ 0,			
			/* .DirectNPdu = */ CANIF_RX_vEcuC_Pdu_1,			
			/* .NSdu = */ PDUR_RX_vEcuC_Pdu_1,
			/* .Channel = */ &J1939Tp_Channels[1] /* parent channel */
		},
};

const J1939Tp_RxPduInfoType RxPdus[J1939TP_RX_PDU_COUNT] = {
	{
		/* .PacketType = */ J1939TP_CM,
		/* .ChannelIndex = */ 0,
		/* .PgPtr = */ 0, 
	},
	{
		/* .PacketType = */ J1939TP_DT,
		/* .ChannelIndex = */ 0,
		/* .PgPtr = */ 0, 
	},
	{
		/* .PacketType = */ J1939TP_REVERSE_CM,
		/* .ChannelIndex = */ 0,
		/* .PgPtr = */ 0, 
	},
	{
		/* .PacketType = */ J1939TP_DIRECT,
		/* .ChannelIndex = */ 0,
		/* .PgPtr = */ &(Pgs[0]), 
	},
	{
		/* .PacketType = */ J1939TP_CM,
		/* .ChannelIndex = */ 1,
		/* .PgPtr = */ 0, 
	},
	{
		/* .PacketType = */ J1939TP_DT,
		/* .ChannelIndex = */ 1,
		/* .PgPtr = */ 0, 
	},
	{
		/* .PacketType = */ J1939TP_DIRECT,
		/* .ChannelIndex = */ 1,
		/* .PgPtr = */ &(Pgs[1]), 
	},
};

const J1939Tp_RxPduInfoType* RxPduRelations_PDUR_TX_vEcuC_Pdu_1[] = {
		&RxPdus[0],
		&RxPdus[5],
		&RxPdus[6],		
};
const J1939Tp_RxPduInfoType* RxPduRelations_PDU_2[] = {
		&RxPdus[3],		
};
const J1939Tp_RxPduInfoType* RxPduRelations_PDUR_RX_vEcuC_Pdu_1[] = {
		&RxPdus[1],
		&RxPdus[2],
		&RxPdus[4],		
};

const J1939Tp_RxPduInfoRelationsType RxPduRelations[J1939TP_RX_PDU_COUNT] = {
	{
		/* .RxPdus = */ RxPduRelations_PDUR_TX_vEcuC_Pdu_1,
		/* .RxPduCount = */ 3,
	},
	{
		/* .RxPdus = */ RxPduRelations_PDU_2,
		/* .RxPduCount = */ 1,
	},
	{
		/* .RxPdus = */ RxPduRelations_PDUR_RX_vEcuC_Pdu_1,
		/* .RxPduCount = */ 3,
	},
};
const J1939Tp_ConfigType J1939Tp_Config = {
    /* .RxPduRelations = */ RxPduRelations,
    /* .Channels = */ J1939Tp_Channels,
	/* .Pgs = */ Pgs   
};
