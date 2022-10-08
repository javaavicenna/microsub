const int led = 7;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  char data = Serial.read();
  if(data=="a"){
    digitalWrite(led, HIGH);
  }
  if(data=="b"){
    digitalWrite(led, LOW);
  }
}
