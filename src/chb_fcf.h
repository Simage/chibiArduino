#ifndef CHB_FCF_H
#define CHB_FCF_H

#define    FCF_FRAME_TYPE        0x0007
#define    FCF_DATA_FRAME        0x0001
#define    FCF_SECURITY_ENABLED  0x0008

#define    FCF_FRAME_PENDING     0x0010
#define    FCF_REQUEST_ACK       0x0020
#define    FCF_PAN_COMPRES       0x0040

#define    FCF_SEQ_SUPRESS       0x0100
#define    FCF_INFO_ELEM         0x0200
#define    FCF_DEST_ADDR         0x0C00
#define    FCF_IEEE_DEST         0x0C00
#define    FCF_SHORT_DEST        0x0800

#define    FCF_FRAME_VERSION     0x0300
#define    FCF_SRC_ADDR          0xC000
#define    FCF_IEEE_SRC          0xC000
#define    FCF_SHORT_SRC         0x8000

#define    DEFAULT_FCF           0x9841

#endif