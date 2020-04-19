#ifndef MYSERIAL_H
#define MYSERIAL_H
#include <Arduino.h>
class mySerial
{
public:
void getData();//get receive data --> print serial port with \n 
private:
int bufferLen,receiveLen;
char rxBuffer[],txBuffer[];  
};
#endif
