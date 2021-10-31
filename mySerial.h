//http://www.raspberry-projects.com/pi/programming-in-c/uart-serial-port/using-the-uart
#ifndef SERIAL
#define SERIAL

#include <string>


class  mySerial
{

public:

  int handle;
  std::string  deviceName;
  int baud;

  mySerial(std::string deviceName, int baud);
  ~mySerial();

  bool Send( unsigned char  * data,int len);
  bool Send(unsigned char value);
  bool Send( std::string value);
  int Receive( unsigned char  * data, int len);
  bool IsOpen(void);
  void Close(void);
  bool Open(std::string deviceName, int baud);
  bool NumberByteRcv(int &bytelen);
};

#endif


