#include <com.h>

com mycom;

void setup() {
  // put your setup code here, to run once:
  mycom.begin(0); //reciver
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  mycom.recive();
  Serial.println(mycom.channelRead(0));

}
