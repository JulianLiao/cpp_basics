

#include <crc16.h>

#include <iostream>
#include <iomanip>

int main(int argc, char *argv[]) {
  uint8_t buf[6] = {0};
  buf[0] = 0x0A;
  buf[1] = 0xC1;
  // buf[0] = 0x05;
  // buf[1] = 0x02;
  buf[2] = 0x00;
  buf[3] = 0x00;

  unsigned short crc_result;
  crc_result = CRC16_MODBUS((unsigned char *)&buf[0], 4);

  uint8_t crc16_H = (uint8_t) ((crc_result >> 8) & 0x00FF);
  uint8_t crc16_L = (uint8_t) (crc_result & 0x00FF);

  std::cout << "crc16_H: 0x" << std::hex << std::setw(2) << std::setfill('0') << (int)crc16_H
    << ", crc16_L: 0x" << std::hex << std::setw(2) << std::setfill('0') << (int)crc16_L << std::endl;

  return 0;
}
