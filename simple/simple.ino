//include arduino Servo library
#include "Servo.h"
#include "Arduino.h"
 
// Pin 13 has a LED connected on most Arduino boards.
int ledPin = 13;

//motor object from Servo library
Servo motor; 

//setup
void setup() 
{
      //attach motor to pin 9. Min, max PWM pulse width at default values
      motor.attach(9);
      
      //stops the motor
      motor.write(90);
        
      //also sets LED_PIN as an output
      pinMode(ledPin, OUTPUT);  
}
 
//main loop
void loop() 
{
      digitalWrite(ledPin, HIGH);   // turn the LED on 
      motor.write(170);             // maximum positive angle
      //analogWrite(9, 230);   
      delay(2000);                  // wait for a second

      digitalWrite(ledPin, LOW);    // turn the LED off
      motor.write(10);               // maximum negative angle
      //analogWrite(9, 30);   
      delay(2000);                  // wait for a second
}
