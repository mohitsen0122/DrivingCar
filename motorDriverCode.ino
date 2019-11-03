int m1_one = D0;
int m1_two = D1;
int m2_one = D2;
int m2_two = D3;
char ch;

void deviceInit(){
  pinMode(m1_one, OUTPUT);
  pinMode(m1_two, OUTPUT);
  pinMode(m2_one, OUTPUT);
  pinMode(m2_two, OUTPUT);
  Serial.begin(9600);
}
void stopAllMotors(){
  digitalWrite(m1_one,HIGH);
  digitalWrite(m1_two,HIGH);
  digitalWrite(m2_one,HIGH);
  digitalWrite(m2_two,HIGH);
}
void m1Forward(){
  digitalWrite(m1_one, LOW);
  digitalWrite(m1_two, HIGH); 
}
void m1Backward(){
  digitalWrite(m1_one, HIGH);
  digitalWrite(m1_two, LOW);
}
void m1stop(){
  digitalWrite(m1_one, HIGH);
  digitalWrite(m1_two, HIGH);  
}
void m2Forward(){
  digitalWrite(m2_one, LOW);
  digitalWrite(m2_two, HIGH);
}
void m2Backward(){
  digitalWrite(m2_one, HIGH);
  digitalWrite(m2_two, LOW);
}
void m2stop(){
  digitalWrite(m2_one, HIGH);
  digitalWrite(m2_two, HIGH);
}
void leftForward(){
  m1Backward();
  m2Forward();
}
void rightForward(){
  m2Backward();
  m1Forward();
}
void taskSerial(){
  if(Serial.available() > 0){
    Serial.print("Entered: ");
    Serial.println(ch);
    ch = Serial.read();
    switch(ch){
      case '1':
        m1Forward();
      break;
      case '2':
        m1Backward();
      break;
      case '3':
        m1stop();
      break;
      case '4':
        m2Forward();
      break;
      case '5':
        m2Backward();
      break;
      case '6':
        m2stop();
      break;
      case '7':
        stopAllMotors();
      break;
    }
  }
}
