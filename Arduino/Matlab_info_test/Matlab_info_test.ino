
int incomingbyte=0;
#define LED 13

// The setup routine runs once when you press reset:
void setup() {
  // Initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  pinMode(LED,OUTPUT);
}

// The loop routine runs over and over again forever:
void loop() {
  
  if (Serial.available()>0)//hy:read only when the data is available in the port.
  {
  incomingByte=Serial.read();}
  

  if (incomingbyte==4)//hy:read only when the data is available in the port.number can be changed
  {
  digitalWrite(LED,HIGH); //write TTL to Pin13
  delay(200);
  }

}
