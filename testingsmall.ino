

#define trigpin 8
#define echopin 7

void setup() {
  Serial.begin  (9600);
  pinMode(trigpin, OUTPUT);
  pinMode(echopin, INPUT);
  

}

void loop() {
  digitalWrite(echopin, HIGH);
  Serial.println("WELCOME");

}
