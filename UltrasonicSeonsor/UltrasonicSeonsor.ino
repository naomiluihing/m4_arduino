#include <HCSR04.h>

//Initialize Ultrasonic Sensor and the pins it uses
int trigPin = 11; //trigger pin connected to pin 11
int echoPin = 12; //echo Pin connected to pin 12
int freq = 500; //delay frequency of ultrasonic sensor readings in milliseconds
UltraSonicDistanceSensor distanceSensor(trigPin, echoPin);

bool car; //state variable if car is at parking lot entrance or not


void setup() 
{
    //Initialize serial connection
    Serial.begin(9600);
}

void loop() 
{
    double distance = distanceSensor.measureDistanceCm();
    
    car = isCar(d1,d2); //test if car is there or not
    delay(freq); //using predetermined time, in milliseconds, delay after each measurement and return
    
}
