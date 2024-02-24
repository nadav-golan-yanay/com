# com

This library provides a simple code for nRf24l01.

**The library is for Arduino and ESP32**

## nRf24l01:

![NRF24L01_Series](https://github.com/nadav-golan-yanay/com/assets/78790309/a17a9664-b253-432c-8bcb-36d03230a4fe)

**How to connect it to arduino:**

The nRF24l01 needs **3.3V** but his pins can work with 5V (So you can connect it to arduino and ESP with no problem or external component like logic level shifter). It wrks with **SPI** (serial peripheral interface).
Connections:

Chip  | SCK  |  MISO  |  MOSI  |  CE  |  CSN  |  VCC  |  GND
|  :---  | :---: | :---: | :---: | :---: | :---: | :---: | ---: |
Arduino Uno  |  13 | 12 | 11 | 5 | 4 | 3V3 | GND
Arduino Nano  |  13 | 12 | 11 | 5 | 4 | 3V3 | GND
Arduino Mega  |  52 | 50 | 51 | 5 | 4 | 3V3 | GND
ESP32  |  13 | 12 | 11 | 5 | 4 | 3V3 | GND

You could choose your own CE and CSN pins by editing the CPP file (com.cpp), line 13.

![connections](https://howtomechatronics.com/wp-content/uploads/2017/02/NRF24L01-Pinout-NRF24L01-PA-LNA--768x512.png?ezimgfmt=ng:webp/ngcb2)

Specifications:
something  | other thing
-----------------|-----------------------
Frequency range  |  2.4 – 2.5GHz ISM band
Data rates  |  250Kbps / 1Mbps / 2Mbps
Max. output power  |  0dBm
Operating voltage  |  1.9 – 3.6V
Max. operating current  |  12.3mA
Standby current  |  22µA
Logic inputs  |  5V tolerant
Communication range  |  100-1000m (open space, without or with antena)


## Code:

**`begin(int ReTr)`**
- ReTr: reciver or transmitter (0 or 1);

This function **must** be called from `void setup()`.
Please choose between 'begin Receiver (0)' and 'begin Transmitter (1).
its the Y axis).
The function returns an integer (int), so it cloude be used as variable


## Code:

**`recive()`**

This function recive from the radio.
This function **must** be called before the `channelWrite()` function!


**`channelRead(double num);`**
- Num: the channel number that you want to read from.

This function read form the data that recives from the radio (from the function `recive()`).
Other than that, this function also smooth the data thats recives from the radio 
