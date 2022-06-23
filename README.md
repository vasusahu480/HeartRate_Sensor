# HeartRate_Sensor
In this project, we will monitor Heart Rate and oxygen saturation (Sp02) values on the ESP8266 NodeMCU

![image](https://user-images.githubusercontent.com/63048880/170036228-92406ceb-843e-41fb-b2ae-a89745efd1ec.png)

**Working of MAX30100 Pulse Oximeter Sensor **:

The sensor has two LEDs, one emitting red light, the other emitting infrared light. Infrared light is required for pulse rate. But, Both red light and infrared light are required for measuring Sp02 levels in the blood.

When the heart pumps the blood, the oxygen level is increased because there is more blood. But, when the heart rests, there is a decrease in oxygenated blood. Hence, the pulse rate is determined by getting the time between the rise and fall of oxygenated blood.

![image](https://user-images.githubusercontent.com/63048880/170038094-1e421592-7cd8-406b-8e88-5385bddf697a.png)

The oxygenated blood absorbs more infrared light and passes more red light. But, deoxygenated blood absorbs red light and passes more infrared light. Basically, the MAX30100 sensor reads the absorption levels for both light sources and stores them in a buffer that can be read via I2C pins.

**Interfacing MAX30100 with ESP8266 NodeMCU **:

The MAX30100 Oximeter Sensor works with the I2C bus. So, Interface the I2C pins (SCL &SDA) oximeter modules with D1 and D2 pins of NodeMCU. Connect the INT pin to the NodeMCU D0 pin. Similarly, provide 3.3V power to the VCC and Ground the GND pin. Basically, you can follow the _**circuit diagram**_ to make your connections.


![Interfacing-Max30100-pulse-oximeter-sensor-with-NodeMCU-ESP8266 (1)](https://user-images.githubusercontent.com/63048880/170036697-37c3a3ac-12ad-4ee9-a7b8-64c175863ab3.jpg)


**Installing MAX30100_PulseOximeter Library**

To install the library, First, download them and install them from the library manager. ELse, navigate to the Sketch > Include Library > Manage Libraries… Wait some time for Arduino IDE to update the list of installed libraries.

Now in the search field search for “MAX30100” and install the library


**Monitor Heart Rate and oxygen saturation (Sp02) values & Temperature using Arduino UNO**
In /LCD_Test folder:
-Monitoring Heart Rate and oxygen saturation (Sp02) values with MAX30100. 
-Montitring Temprature with BMP sensor.
-Controling the ventilator with L298N.
-Using Ardunio UNO.
