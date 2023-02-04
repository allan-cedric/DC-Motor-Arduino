#include <DC-Motor-Arduino.h>

#define PWM_PIN 9
#define CW_PIN 7
#define CCW_PIN 8

DC_Motor motor1(PWM_PIN, CW_PIN, CCW_PIN);

void setup()
{
}

void loop()
{
    motor1.forward(255);
    delay(2000);

    motor1.stop();
    delay(1000);

    motor1.backwards(255);
    delay(2000);

    motor1.stop();
    delay(1000);
}
