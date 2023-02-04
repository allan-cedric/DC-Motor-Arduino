## DC-Motor Library (C/C++)
* Library to control a DC Motor on Arduino platform with a motor driver like TB6612FNG
   
## How to use ?   
* Include the library and call the constructor `DC_Motor`:
```C++
#include "DC-Motor-Arduino.h" // Path example
   
DC_Motor motor1(9,7,8); //Ex.: PWM Pin => 9 , Clockwise Pin => 7, Counterclockwise Pin => 8

void setup()
{
 ...
}
    
void loop()
{
 ...
 motor1.forward(255) // Motor runs forward
 motor1.backwards(255) // Motor runs backwards
 motor1.shortBrake()
 motor1.stop() // Motor stops
 ...
}
```