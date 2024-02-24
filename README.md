# com

This library provides a simple code for nRf24l01.

**The library is for Arduino and ESP32**

## nRf24l01:

![NRF24L01_Series](https://github.com/nadav-golan-yanay/com/assets/78790309/a17a9664-b253-432c-8bcb-36d03230a4fe)

**How to connect it to arduino:**

Connections:  ------------------------
Gyro | Arduino
-----|------
GND  | GND
VCC  | 5V
SCL  | A5
SDA  | A4

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


**`getyewang()`**  //I know 'yaw' is written with an 'a' and not with 'e,' but I initially wrote it with 'e' and didn't want to change the entire code.

This function read from the gyro the **yew angle** (most of the time its the Z axis).
The function returns an integer (int), so it cloude be used as variable
