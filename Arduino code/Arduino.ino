int motorPin = 3;
int pirPin = 12;

void setup() {
  pinMode(motorPin, OUTPUT);
 pinMode(pirPin,INPUT);
 Serial.begin(9600);
}

void loop() {
 int val = digitalRead(pirPin);
 Serial.println(val);

 if(val == HIGH){
  digitalWrite(motorPin, HIGH);

 }
 else  {
  digitalWrite(motorPin, LOW);
  
 }
 

 
 

}
