/*	WARNING: COPYRIGHT (C) 2017 XSENS TECHNOLOGIES OR SUBSIDIARIES WORLDWIDE. ALL RIGHTS RESERVED.
	THIS FILE AND THE SOURCE CODE IT CONTAINS (AND/OR THE BINARY CODE FILES FOUND IN THE SAME
	FOLDER THAT CONTAINS THIS FILE) AND ALL RELATED SOFTWARE (COLLECTIVELY, "CODE") ARE SUBJECT
	TO A RESTRICTED LICENSE AGREEMENT ("AGREEMENT") BETWEEN XSENS AS LICENSOR AND THE AUTHORIZED
	LICENSEE UNDER THE AGREEMENT. THE CODE MUST BE USED SOLELY WITH XSENS PRODUCTS INCORPORATED
	INTO LICENSEE PRODUCTS IN ACCORDANCE WITH THE AGREEMENT. ANY USE, MODIFICATION, COPYING OR
	DISTRIBUTION OF THE CODE IS STRICTLY PROHIBITED UNLESS EXPRESSLY AUTHORIZED BY THE AGREEMENT.
	IF YOU ARE NOT AN AUTHORIZED USER OF THE CODE IN ACCORDANCE WITH THE AGREEMENT, YOU MUST STOP
	USING OR VIEWING THE CODE NOW, REMOVE ANY COPIES OF THE CODE FROM YOUR COMPUTER AND NOTIFY
	XSENS IMMEDIATELY BY EMAIL TO INFO@XSENS.COM. ANY COPIES OR DERIVATIVES OF THE CODE (IN WHOLE
	OR IN PART) IN SOURCE CODE FORM THAT ARE PERMITTED BY THE AGREEMENT MUST RETAIN THE ABOVE
	COPYRIGHT NOTICE AND THIS PARAGRAPH IN ITS ENTIRETY, AS REQUIRED BY THE AGREEMENT.
*/

#ifndef XSDID_H
#define XSDID_H

// DID Type (high nibble)
#define XS_DID_TYPEL_MASK				0x000F0000
#define XS_DID_TYPEH_MASK				0x00F00000
#define XS_DID_GPL_MASK					0x0F000000
#define XS_DID_GPH_MASK					0xF0000000
#define XS_DID_TYPE_MASK				(XS_DID_TYPEH_MASK | XS_DID_TYPEL_MASK)
#define XS_DID_GP_MASK					(XS_DID_GPH_MASK | XS_DID_GPL_MASK)
#define XS_DID_MK4TYPE_MASK				(XS_DID_TYPEH_MASK | XS_DID_GPL_MASK)
#define XS_DID_ID_MASK					0x0000FFFF
#define XS_DID_FULLTYPE_MASK			0xFFFF0000

#define XS_DID_TYPEL_SHIFT				16
#define XS_DID_TYPEH_SHIFT				20
#define XS_DID_GPL_SHIFT				24
#define XS_DID_GPH_SHIFT				28

#define XS_DID_TYPEH_INTERNAL			0x00000000
#define XS_DID_TYPEH_XM					0x00100000
#define XS_DID_TYPEH_AWINDAMASTER		0x00200000
#define XS_DID_TYPEH_MTI_MTX			0x00300000
#define XS_DID_TYPEH_MTIG				0x00500000
#define XS_DID_TYPEH_MT_X0				0x00600000
#define XS_DID_TYPEH_MT_X00				0x00700000
#define XS_DID_TYPEH_MTX2_MTW2			0x00B00000
#define XS_DID_TYPEH_BODYPACK			0x00A00000
#define XS_DID_TYPEH_MT_X_MPU			0x00800000
#define XS_DID_TYPEH_MT_X_FIS			0x00C00000

#define XS_DID_TYPEL_STATION			0x00000000
#define XS_DID_TYPEL_DONGLE				0x00010000
#define XS_DID_TYPEL_OEM				0x00020000
#define XS_DID_TYPEL_SYNCSTATION		0x00030000
#define XS_DID_TYPEL_BUS_MASTER			0x00040000

#define XS_DID_TYPEL_RS232				0x00000000
#define XS_DID_TYPEL_RS422				0x00010000
#define XS_DID_TYPEL_RS485XM			0x00020000
#define XS_DID_TYPEL_RS485				0x00030000
#define XS_DID_TYPEL_WIRELESS			0x00040000
#define XS_DID_TYPEL_MULTI				0x00080000
#define XS_DID_TYPEL_MK5				0x00080000

#define XS_DID_GPL_1					0x01000000
#define XS_DID_GPL_2					0x02000000
#define XS_DID_GPL_3					0x03000000
#define XS_DID_GPL_10					0x01000000
#define XS_DID_GPL_20					0x02000000
#define XS_DID_GPL_30					0x03000000
#define XS_DID_GPL_100					0x01000000
#define XS_DID_GPL_200					0x02000000
#define XS_DID_GPL_300					0x03000000
#define XS_DID_GPL_400					0x04000000
#define XS_DID_GPL_500					0x05000000
#define XS_DID_GPL_600					0x06000000
#define XS_DID_GPL_700					0x07000000
#define XS_DID_GPL_800					0x08000000
#define XS_DID_GPL_900					0x09000000
#define XS_DID_GPL_IMU					0x01000000
#define XS_DID_GPL_VRU					0x02000000
#define XS_DID_GPL_AHRS					0x03000000
#define XS_DID_GPL_AWINDA2				0x01000000
#define XS_DID_GPL_AHRSGNSS				XS_DID_GPL_400
#define XS_DID_GPL_AHRSGNSSG			XS_DID_GPL_500
#define XS_DID_GPL_GNSSINS				XS_DID_GPL_600
#define XS_DID_GPL_GNSSINSG				XS_DID_GPL_700

#define XS_DID_TYPE_XBUS_MASTER			(XS_DID_TYPEH_XM | 0x00030000)

#define XS_DID_TYPE_AWINDA				XS_DID_TYPEH_AWINDAMASTER
#define XS_DID_TYPE_AWINDA_STATION		(XS_DID_TYPEH_AWINDAMASTER | XS_DID_TYPEL_STATION)
#define XS_DID_TYPE_AWINDA_DONGLE		(XS_DID_TYPEH_AWINDAMASTER | XS_DID_TYPEL_DONGLE)
#define XS_DID_TYPE_AWINDA_OEM			(XS_DID_TYPEH_AWINDAMASTER | XS_DID_TYPEL_OEM)
#define XS_DID_TYPE_SYNCSTATION			(XS_DID_TYPEH_AWINDAMASTER | XS_DID_TYPEL_SYNCSTATION)

#define XS_DID_FULLTYPE_AWINDA1_STATION	XS_DID_TYPE_AWINDA_STATION
#define XS_DID_FULLTYPE_AWINDA1_DONGLE	XS_DID_TYPE_AWINDA_DONGLE
#define XS_DID_FULLTYPE_AWINDA1_OEM		XS_DID_TYPE_AWINDA_OEM
#define XS_DID_FULLTYPE_SYNCSTATION1	XS_DID_TYPE_SYNCSTATION

#define XS_DID_FULLTYPE_AWINDA2_STATION	(XS_DID_GPL_AWINDA2 | XS_DID_TYPE_AWINDA_STATION)
#define XS_DID_FULLTYPE_AWINDA2_DONGLE	(XS_DID_GPL_AWINDA2 | XS_DID_TYPE_AWINDA_DONGLE)
#define XS_DID_FULLTYPE_AWINDA2_OEM		(XS_DID_GPL_AWINDA2 | XS_DID_TYPE_AWINDA_OEM)
#define XS_DID_FULLTYPE_SYNCSTATION2	(XS_DID_GPL_AWINDA2 | XS_DID_TYPE_SYNCSTATION)

#define XS_DID_TYPE_MTW1				(XS_DID_TYPEH_MTI_MTX | XS_DID_TYPEL_WIRELESS)
#define XS_DID_TYPE_MTIX_RS232			(XS_DID_TYPEH_MTI_MTX | XS_DID_TYPEL_RS232)
#define XS_DID_TYPE_MTIX_RS422			(XS_DID_TYPEH_MTI_MTX | XS_DID_TYPEL_RS422)
#define XS_DID_TYPE_MTIX_RS485			(XS_DID_TYPEH_MTI_MTX | XS_DID_TYPEL_RS485)
#define XS_DID_TYPE_MTX_XBUS			(XS_DID_TYPEH_MTI_MTX | XS_DID_TYPEL_RS485XM)
#define XS_DID_TYPE_MTX2				(XS_DID_TYPEH_MTX2_MTW2 | XS_DID_TYPEL_RS485XM)
#define XS_DID_TYPE_MTW2				(XS_DID_TYPEH_MTX2_MTW2 | XS_DID_TYPEL_WIRELESS)

#define XS_DID_MK4TYPE_MT_1_FIS			(XS_DID_TYPEH_MT_X_FIS | XS_DID_GPL_1)
#define XS_DID_MK4TYPE_MT_2_FIS			(XS_DID_TYPEH_MT_X_FIS | XS_DID_GPL_2)
#define XS_DID_MK4TYPE_MT_3_FIS			(XS_DID_TYPEH_MT_X_FIS | XS_DID_GPL_3)
#define XS_DID_MK4TYPE_MT_1_MPU			(XS_DID_TYPEH_MT_X_MPU | XS_DID_GPL_1)
#define XS_DID_MK4TYPE_MT_2_MPU			(XS_DID_TYPEH_MT_X_MPU | XS_DID_GPL_2)
#define XS_DID_MK4TYPE_MT_3_MPU			(XS_DID_TYPEH_MT_X_MPU | XS_DID_GPL_3)
#define XS_DID_MK4TYPE_MT_10			(XS_DID_TYPEH_MT_X0 | XS_DID_GPL_10)
#define XS_DID_MK4TYPE_MT_20			(XS_DID_TYPEH_MT_X0 | XS_DID_GPL_20)
#define XS_DID_MK4TYPE_MT_30			(XS_DID_TYPEH_MT_X0 | XS_DID_GPL_30)
#define XS_DID_MK4TYPE_MT_100			(XS_DID_TYPEH_MT_X00 | XS_DID_GPL_100)
#define XS_DID_MK4TYPE_MT_200			(XS_DID_TYPEH_MT_X00 | XS_DID_GPL_200)
#define XS_DID_MK4TYPE_MT_300			(XS_DID_TYPEH_MT_X00 | XS_DID_GPL_300)
#define XS_DID_MK4TYPE_MT_400			(XS_DID_TYPEH_MT_X00 | XS_DID_GPL_400)
#define XS_DID_MK4TYPE_MT_500			(XS_DID_TYPEH_MT_X00 | XS_DID_GPL_500)
#define XS_DID_MK4TYPE_MT_600			(XS_DID_TYPEH_MT_X00 | XS_DID_GPL_600)
#define XS_DID_MK4TYPE_MT_700			(XS_DID_TYPEH_MT_X00 | XS_DID_GPL_700)
#define XS_DID_MK4TYPE_MT_800			(XS_DID_TYPEH_MT_X00 | XS_DID_GPL_800)
#define XS_DID_MK4TYPE_MT_900			(XS_DID_TYPEH_MT_X00 | XS_DID_GPL_900)

#define XS_DID_MK5TYPE_MT_10			(XS_DID_TYPEH_MT_X0 | XS_DID_GPL_10 | XS_DID_TYPEL_MK5)
#define XS_DID_MK5TYPE_MT_20			(XS_DID_TYPEH_MT_X0 | XS_DID_GPL_20 | XS_DID_TYPEL_MK5)
#define XS_DID_MK5TYPE_MT_30			(XS_DID_TYPEH_MT_X0 | XS_DID_GPL_30 | XS_DID_TYPEL_MK5)
#define XS_DID_MK5TYPE_MT_100			(XS_DID_TYPEH_MT_X00 | XS_DID_GPL_100 | XS_DID_TYPEL_MK5)
#define XS_DID_MK5TYPE_MT_200			(XS_DID_TYPEH_MT_X00 | XS_DID_GPL_200 | XS_DID_TYPEL_MK5)
#define XS_DID_MK5TYPE_MT_300			(XS_DID_TYPEH_MT_X00 | XS_DID_GPL_300 | XS_DID_TYPEL_MK5)
#define XS_DID_MK5TYPE_MT_400			(XS_DID_TYPEH_MT_X00 | XS_DID_GPL_400 | XS_DID_TYPEL_MK5)
#define XS_DID_MK5TYPE_MT_500			(XS_DID_TYPEH_MT_X00 | XS_DID_GPL_500 | XS_DID_TYPEL_MK5)
#define XS_DID_MK5TYPE_MT_600			(XS_DID_TYPEH_MT_X00 | XS_DID_GPL_600 | XS_DID_TYPEL_MK5)
#define XS_DID_MK5TYPE_MT_700			(XS_DID_TYPEH_MT_X00 | XS_DID_GPL_700 | XS_DID_TYPEL_MK5)
#define XS_DID_MK5TYPE_MT_800			(XS_DID_TYPEH_MT_X00 | XS_DID_GPL_800 | XS_DID_TYPEL_MK5)
#define XS_DID_MK5TYPE_MT_900			(XS_DID_TYPEH_MT_X00 | XS_DID_GPL_900 | XS_DID_TYPEL_MK5)

#define XS_DID_BROADCAST				0x80000000
#define XS_DID_MASTER					0x00000000
#define XS_DID_ABMCLOCKMASTER			0x00000100

#define XS_DID_INTERNAL(did)			((did & XS_DID_TYPEH_MASK) == XS_DID_TYPEH_INTERNAL)
#define XS_DID_XM(did)					((did & XS_DID_TYPEH_MASK) == XS_DID_TYPEH_XM)
#define XS_DID_NOXM(did)				((did & XS_DID_TYPEH_MASK) != XS_DID_TYPEH_XM)
#define XS_DID_WM(did)					((did & XS_DID_TYPEH_MASK) == XS_DID_TYPEH_AWINDAMASTER)
#define XS_DID_NOWM(did)				((did & XS_DID_TYPEH_MASK) != XS_DID_TYPEH_AWINDAMASTER)
#define XS_DID_WMMT(did)				((did & XS_DID_TYPE_MASK) == XS_DID_TYPE_MTW1)
#define XS_DID_NOWMMT(did)				((did & XS_DID_TYPE_MASK) != XS_DID_TYPE_MTW1)
#define XS_DID_XMMT(did)				((did & XS_DID_TYPE_MASK) == XS_DID_TYPE_MTX_XBUS)
#define XS_DID_NOXMMT(did)				((did & XS_DID_TYPE_MASK) != XS_DID_TYPE_MTX_XBUS)
#define XS_DID_MTIX(did)				(((did & XS_DID_TYPEH_MASK) == XS_DID_TYPEH_MTI_MTX) && XS_DID_NOWMMT(did))
#define XS_DID_MTIG(did)				(((did & XS_DID_TYPEH_MASK) == XS_DID_TYPEH_MTIG) || ((did & XS_DID_MK4TYPE_MASK) == XS_DID_MK4TYPE_MT_700))
#define XS_DID_MTW2(did)				((did & XS_DID_TYPE_MASK) == XS_DID_TYPE_MTW2)
#define XS_DID_MTX2(did)				((did & XS_DID_TYPE_MASK) == XS_DID_TYPE_MTX2)

#define XS_DID_AWINDA1_STATION(did)		((did & XS_DID_FULLTYPE_MASK) == XS_DID_FULLTYPE_AWINDA1_STATION)
#define XS_DID_AWINDA1_DONGLE(did)		((did & XS_DID_FULLTYPE_MASK) == XS_DID_FULLTYPE_AWINDA1_DONGLE)
#define XS_DID_AWINDA1_OEM(did)			((did & XS_DID_FULLTYPE_MASK) == XS_DID_FULLTYPE_AWINDA1_OEM)

#define XS_DID_AWINDA2_STATION(did)		((did & XS_DID_FULLTYPE_MASK) == XS_DID_FULLTYPE_AWINDA2_STATION)
#define XS_DID_AWINDA2_DONGLE(did)		((did & XS_DID_FULLTYPE_MASK) == XS_DID_FULLTYPE_AWINDA2_DONGLE)
#define XS_DID_AWINDA2_OEM(did)			((did & XS_DID_FULLTYPE_MASK) == XS_DID_FULLTYPE_AWINDA2_OEM)

#define XS_DID_SYNCSTATION1(did)		((did & XS_DID_FULLTYPE_MASK) == XS_DID_FULLTYPE_SYNCSTATION1)
#define XS_DID_SYNCSTATION2(did)		((did & XS_DID_FULLTYPE_MASK) == XS_DID_FULLTYPE_SYNCSTATION2)
#define XS_DID_SYNCSTATION(did)			(XS_DID_SYNCSTATION1(did) || XS_DID_SYNCSTATION2(did))

#define XS_DID_AWINDA1(did)				(XS_DID_AWINDA1_STATION(did) || XS_DID_AWINDA1_DONGLE(did) || XS_DID_AWINDA1_OEM(did))
#define XS_DID_AWINDA2(did)				(XS_DID_AWINDA2_STATION(did) || XS_DID_AWINDA2_DONGLE(did) || XS_DID_AWINDA2_OEM(did))

#define XS_DID_BODYPACK(did)			((did & XS_DID_TYPEH_MASK) == XS_DID_TYPEH_BODYPACK)

#define XS_DID_MK4TYPE_MT_710_RANGE_START		(XS_DID_TYPEH_MT_X00 | XS_DID_GPL_700 | 0x1000)
#define XS_DID_MK5TYPE_RANGE_START		0x00002000

/* fairchild devices */
#define XS_DID_TYPEH_FAIRCHILD_DEVICE	0x00F00000
#define XS_DID_GPL_FIS1100EVK			0x00000000
#define XS_DID_GPL_FIS2100EVK			0x01000000
#define XS_DID_TYPE_FIS1100EVK			(XS_DID_TYPEH_FAIRCHILD_DEVICE|XS_DID_GPL_FIS1100EVK)
#define XS_DID_TYPE_FIS2100EVK			(XS_DID_TYPEH_FAIRCHILD_DEVICE|XS_DID_GPL_FIS2100EVK)
#define XS_DID_FIS1100EVK(did)			((did & (XS_DID_TYPEH_MASK | XS_DID_GPL_MASK)) == XS_DID_TYPE_FIS1100EVK)
#define XS_DID_FIS2100EVK(did)			((did & (XS_DID_TYPEH_MASK | XS_DID_GPL_MASK)) == XS_DID_TYPE_FIS2100EVK)

#endif	// file guard