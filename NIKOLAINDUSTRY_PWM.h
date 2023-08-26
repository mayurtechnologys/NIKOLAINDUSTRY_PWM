#include "NIKOLAINDUSTRY_PWM.h"

NIKOLAINDUSTRY_PWM::NIKOLAINDUSTRY_PWM(int pwmPin) {
    _pwmPin = pwmPin;
}

void NIKOLAINDUSTRY_PWM::setup() {
    pinMode(_pwmPin, OUTPUT); // Set the PWM pin as an output
}

void NIKOLAINDUSTRY_PWM::setOutput(int value) {
    analogWrite(_pwmPin, value); // Set PWM duty cycle for general output
}
