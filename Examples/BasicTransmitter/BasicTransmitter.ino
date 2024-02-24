#include <com.h>

com mycom;

void setup() {
  // put your setup code here, to run once:
  mycom.begin(1); //transmitter
}

void loop() {
  // put your main code here, to run repeatedly:
  mycom.channelWrite(0, 42);

  mycom.transmit();
}
