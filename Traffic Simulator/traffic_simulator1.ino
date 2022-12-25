//Traffic Simulator
//
const int buttonPin=2;

int  buttonState=0;

void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(buttonPin,INPUT);
  Serial.begin(9600);
}

void loop()
{
  buttonState=digitalRead(buttonPin);
  
  if (buttonState==HIGH) {
  digitalWrite(13, HIGH);
  Serial.print("RED LIGHT !! \n");
  Serial.print("YOU CAN CROSS!! \n");
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(13, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(12, HIGH);
  Serial.print("YELLOW LIGHT !! \n"); 
  Serial.print("CAREFULL !! \n");    
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(12, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(11, HIGH);
  Serial.print("GREEN LIGHT !! \n"); 
  Serial.print("YOU CANT CROSS,STOP!! \n");  
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(11, LOW);  
    
}
  
}
  