// -- Classe que molda o comportamento de motores DC simples --
// -- Plataforma: Arduino --
// -- Autor: Allan Cedric --

#ifndef __DC_MOTOR_ARDUINO_H__
#define __DC_MOTOR_ARDUINO_H__

// -- Bibliotecas --
#include <Arduino.h>

// -- Classe DC_Motor --
class DC_Motor
{

private:
    uint8_t _pwmPin;                       // Pino PWM do motor p/ controle de velocidade
    uint8_t _clockwise, _counterClockwise; // Pinos para setar o sentido do motor
    uint8_t _speed;                        // Velocidade do motor

public:
    // Construtor
    DC_Motor(uint8_t pwmPin, uint8_t clockwise, uint8_t counterClockwise);

    // Método para setar a velocidade do motor (0 a 255)
    void setSpeed(uint8_t speed);

    // Método que devolve o valor da velocidade do motor (0 a 255)
    uint8_t getSpeed();

    // Método que faz o motor ir para frente
    void forward(uint8_t speed);

    // Método que faz o motor ir para trás
    void backwards(uint8_t speed);

    // Método que para bruscamente o motor
    void shortBrake();

    // Método que desacelera o motor
    void stop();
};

#endif