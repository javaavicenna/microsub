int Motor1 = 7;
int Motor2 = 6;
int Motor3 = 5;
int Motor4 = 4;
int DataCheck = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(Motor1, OUTPUT);
  pinMode(Motor2, OUTPUT);
  pinMode(Motor3, OUTPUT);
  pinMode(Motor4, OUTPUT);

  digitalWrite(Motor1, HIGH);
  digitalWrite(Motor2, HIGH);
  digitalWrite(Motor3, HIGH);
  digitalWrite(Motor4, HIGH);
  Serial.print("Simulasi Pengendali Motor DC dgn Xbee :");
  Serial.println();
  Serial.println("TELEKOMUNIKASI");
  Serial.println();
  Serial.println();
  Serial.println();
  
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available())
  {
    char data = Serial.read();
    Serial.print(data);
    Serial.print("      ========= >     ");

    if(data == '1'){DataCheck = 1; digitalWrite(Motor2, LOW); digitalWrite(Motor1, HIGH); Serial.println("Motor Pertama Berputar searah Jarum Jam.");}
    if(data == '2'){DataCheck = 1; digitalWrite(Motor1, LOW); digitalWrite(Motor2, HIGH); Serial.println("Motor Pertama Berputar Berlawanan Arah Jarum Jam.");}
    if(data == '3'){DataCheck = 1; digitalWrite(Motor1, LOW); digitalWrite(Motor2, LOW); Serial.println("Motor Pertama Berhenti.");}
    if(data == '4'){DataCheck = 1; digitalWrite(Motor3, LOW); digitalWrite(Motor4, HIGH); Serial.println("Motor Kedua Berputar searah Jarum Jam.");}
    if(data == '5'){DataCheck = 1; digitalWrite(Motor4, LOW); digitalWrite(Motor3, HIGH); Serial.println("Motor Kedua Berputar Berlawanan Arah Jarum Jam.");}
    if(data == '6'){DataCheck = 1; digitalWrite(Motor3, LOW); digitalWrite(Motor4, LOW); Serial.println("Motor Kedua Berhenti.");}
    if(data == '7'){DataCheck = 1; digitalWrite(Motor1, HIGH); digitalWrite(Motor2, LOW); digitalWrite(Motor3, LOW); digitalWrite(Motor4, LOW);Serial.println("Motor Pertama berputar dan Motor Kedua berhenti.");}
    if(data == '8'){DataCheck = 1; digitalWrite(Motor1, HIGH); digitalWrite(Motor2, LOW); (Motor3, LOW); digitalWrite(Motor4, HIGH); Serial.println("Kedua Motor berputar.");}
    if(data == '9'){DataCheck = 1; digitalWrite(Motor1, LOW); digitalWrite(Motor2, LOW);(Motor3, LOW); digitalWrite(Motor4, LOW); Serial.println("Kedua Motor Berhenti.");}
    if(data == 0){Serial.println("Perintah Salah. Silahkan Ulangi!!!");}
    Serial.println();
    DataCheck = 0;

    
  }
}
