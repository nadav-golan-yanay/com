#ifndef com_h
#define com_h

#include <Arduino.h>

class com {
  public:
    com();
    void begin(int ReTr);
    void recive();
    double getch(int num);
    double channelRead(int num);
    void channelWrite(int chNum, double val);
    void transmit();
    double calibrate(double val, double cal);

};

#endif