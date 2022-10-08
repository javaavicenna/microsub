const int button = 8;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(button, INPUT_PULLUP);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  int data = digitalRead(button);
  if(data==LOW){
    Serial.println("a");
  }
  if(data==HIGH){
    Serial.println("B");
  }
}
