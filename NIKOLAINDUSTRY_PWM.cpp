#ifndef NIKOLAINDUSTRY_PWM_h
#define NIKOLAINDUSTRY_PWM_h

#include <Arduino.h>

class NIKOLAINDUSTRY_PWM {
public:
    NIKOLAINDUSTRY_PWM(int pwmPin);
    void setup();
    void setOutput(int value);
    
private:
    int _pwmPin;
};

#endif
