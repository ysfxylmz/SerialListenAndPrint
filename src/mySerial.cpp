#include "mySerial.h"

void mySerial::getData()
{
  while(Serial.available())
  {  
    bufferLen=strlen(rxBuffer);
    if(bufferLen>0)
      {
        for(int i=0;i<=bufferLen;i++)
        {
          rxBuffer[i]=NULL;  
        }
        bufferLen=0;
      }
      receiveLen=Serial.available();
      for(int i=0;i<receiveLen;i++)
      {
        if(i==(receiveLen-1)){Serial.println();}
        rxBuffer[i]=Serial.read(); 
        Serial.print(rxBuffer[i]);
         
      }
      
  }
  
}
