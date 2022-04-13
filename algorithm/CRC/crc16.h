#ifndef __CRC16_H__
#define __CRC16_H__

#ifdef __cplusplus
extern "C" {
#endif


void InvertUint8(unsigned char *dBuf,unsigned char *srcBuf);
void InvertUint16(unsigned short *dBuf,unsigned short *srcBuf);
unsigned short CRC16_MODBUS(unsigned char *puchMsg, unsigned int usDataLen);




#ifdef __cplusplus
}
#endif

#endif
