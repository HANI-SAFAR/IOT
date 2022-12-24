//PARKING SENSOR
const int trigpin =7;
const int echopin =6;
int distance;
int duration;

void setup()
{
  pinMode(trigpin,OUTPUT);
  pinMode(echopin,INPUT);
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}
void loop()
{
  digitalWrite(trigpin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigpin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigpin,LOW);
  duration=pulseIn(echopin,HIGH);
  distance=(0.034*duration)/2;
  if(distance>0 and distance<=100){
   Serial.print("UNABLE TO PARK THE CAR \n"); 
   digitalWrite(13, HIGH);
   delay(1000);
   digitalWrite(13,LOW);
   delay(1000); 
  }
  else if(distance>100 and distance<=140){
    Serial.print("READY TO PARK THE CAR \n");
    digitalWrite(12, HIGH);
    delay(1000);
    digitalWrite(12,LOW);
    delay(1000); 
    
  }
  else{
	Serial.print("PARKING THE CAR SUCCESSFULLY \n");
    digitalWrite(11, HIGH);
    delay(1000);
    digitalWrite(11,LOW);
    delay(1000); 
    
  }
  
  
  
}  
  
  