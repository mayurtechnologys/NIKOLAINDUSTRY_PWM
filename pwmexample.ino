#include <NIKOLAINDUSTRY_PWM.h>

const int ledPin = 5;  
const int motorPin = 18; 

NIKOLAINDUSTRY_PWM ledController(ledPin);
NIKOLAINDUSTRY_PWM motorController(motorPin);

void setup() {
    ledController.setup();
    motorController.setup();
}

void loop() {
    // Vary LED brightness and motor speed
    for (int value = 0; value <= 255; value++) {
        ledController.setOutput(value);
        //motorController.setOutput(value);
        delay(10);
    }
    delay(1000);
    
    for (int value = 255; value >= 0; value--) {
        ledController.setOutput(value);
       // motorController.setOutput(value);
        delay(10);
    }
    delay(1000);

      for (int value = 0; value <= 255; value++) {
        //ledController.setOutput(value);
        motorController.setOutput(value);
        delay(10);
    }
    delay(1000);
    
    for (int value = 255; value >= 0; value--) {
       // ledController.setOutput(value);
        motorController.setOutput(value);
        delay(10);
    }
    delay(1000);
}
