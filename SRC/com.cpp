#include "com.h"
//#include <SPI.h>

#include <nRF24L01.h>
#include "RF24.h"

// Instantiate RF24 class with CE and CSN values //9, 8
// Address to devices comunicate each other (same in both)
//const uint64_t pipe = 0xE8E8F0F0E1LL;
// A variable to hold some info
boolean info = false;

RF24 radio(5, 4); //CE, CSN

int control[20]; //How much Channels



com::com(){
  
}

void com::begin(int ReTr){
  // Start RF
  radio.begin();
  // Setup the channel to work within, number 100
  radio.setChannel(100);

  if (ReTr == 0){
    // Open recept pipe
    radio.openReadingPipe(1, 0xE8E8F0F0E1LL);
    // Start to listen
    radio.startListening();
  } else if (ReTr == 1) {
    radio.openWritingPipe(0xE8E8F0F0E1LL);
  } else {
    Serial.println("Please choose between 'begin Receiver (0)' and 'begin Transmitter (1).");
  }
  
}

void com::recive(){
  radio.read(&control, sizeof(control));
}

double com::getch(int num){
  return control[num];
}

double com::channelRead(int num){
  double tempch1 = getch(num);
  double tempch12 = getch(num); 
  while(tempch1 != tempch12 && !tempch1){ //hold untill we get two successive measurres, different from 0
   tempch1 = getch(num);
   tempch12 = getch(num);
  }
  return (tempch1);
}

double com::calibrate(double val, double cal){
  double re = val+cal;

  return(re);
}

void com::transmit(){
  radio.write(&control, sizeof(control));
}

void com::channelWrite(int chNum, double val){
  control[chNum] = val;
}