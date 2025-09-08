#include <Servo.h>
Servo myservo;   

const int rt_fwPin = 12;
const int rt_bwPin = 13;
const int lt_fwPin = 10;
const int lt_bwPin = 11;

int rled = 4;
int gled = 5;

int pos = 0;
int l_dist = 0;
int r_dist = 0;
int c_dist = 0;


long readUltrasonicDistance(int triggerPin, int echoPin){
  pinMode(triggerPin, OUTPUT); 
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  return pulseIn(echoPin, HIGH);
}



void setup() {
  pinMode(rt_fwPin, OUTPUT);
  pinMode(rt_bwPin, OUTPUT);
  pinMode(lt_fwPin, OUTPUT);
  pinMode(lt_bwPin, OUTPUT);
    
  digitalWrite(12,LOW);
  myservo.attach(7); 
  Serial.begin(9600);

  pinMode(rled, OUTPUT);
  pinMode(gled, OUTPUT);
}


void loop() {

  myservo.write(90);

  digitalWrite(gled, HIGH);
  digitalWrite(rled, LOW);
  

  // forward drive
  digitalWrite(rt_fwPin, HIGH);
  digitalWrite(lt_fwPin, HIGH);

  c_dist = 0.01723 * readUltrasonicDistance(9, 8);


  if(c_dist < 20){
    digitalWrite(gled, LOW);
    digitalWrite(rled, HIGH);

    digitalWrite(rt_fwPin, LOW);
    digitalWrite(lt_fwPin, LOW);


    Serial.print(c_dist);
    Serial.println("cm");
    digitalWrite(rt_fwPin, LOW);
    digitalWrite(lt_fwPin, LOW);  

    for (pos = 90; pos <= 180; pos += 1) { 
      myservo.write(pos);             
      delay(15);                       
    }
    l_dist = 0.01723 * readUltrasonicDistance(9, 8);
    delay(500);

    for (pos = 180; pos >= 0; pos -= 1) { 
      myservo.write(pos);
      delay(15);                                     
    }
    r_dist = 0.01723 * readUltrasonicDistance(9, 8);
    delay(500); 

    if(l_dist > r_dist){
    
      // backwards drive
      digitalWrite(rt_bwPin, HIGH);
      digitalWrite(lt_bwPin, HIGH);
      delay(500);

     // turn left forwards
      digitalWrite(rt_fwPin, HIGH);
      digitalWrite(lt_bwPin, HIGH);
      delay(3000);
    }

    if(r_dist > l_dist){

      // backwards drive
      digitalWrite(rt_bwPin, HIGH);
      digitalWrite(lt_bwPin, HIGH);
      delay(500);

      // turn right forwards
      digitalWrite(rt_bwPin, HIGH);
      digitalWrite(lt_fwPin, HIGH);
      delay(3000);
    }

  }
}


/*
  delay(1000);

  // backwards drive
  digitalWrite(rt_bwPin, HIGH);
  digitalWrite(lt_bwPin, HIGH);
  delay(1000);





  // turn left backwards
  digitalWrite(rt_bwPin, HIGH);
  digitalWrite(lt_bwPin, LOW);
  delay(1000);

  // turn right backwards
  digitalWrite(rt_bwPin, LOW);
  digitalWrite(lt_bwPin, HIGH);
  delay(1000);
*/



