#incluse <HCSR04.h>

//Initialize Ultrasonic Sensor and the pins it uses
int trigPin = 11; //trigger pin connected to pin 11
int echoPin = 12; //echo Pin connected to pin 12
int freq = 500; //delay frequency of ultrasonic sensor readings in miliseconds
UltraSonicDistanceSensor distanceSensor(trigPin, echoPin);

void setup() 
{
    //Initialize serial connection
    Serial.begin(9600);

  
}

void loop() 
{
    double distance = distanceSensor.measureDistanceCm();
    Serial.println(distance);
    delay(freq); //using predetermined time, in miliseconds, delay after each measurment and print
}
