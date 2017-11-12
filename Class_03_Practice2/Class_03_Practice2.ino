int TC_1 = 2;
int TC_2 = 3;
int AIA = 5;
int AIB = 6;
int led = 13;
int R1;
int R2;

void setup(){
  Serial.begin(9600);
  pinMode(TC_1, INPUT);
  pinMode(TC_2, INPUT);
  pinMode(AIA, OUTPUT);
  pinMode(AIB, OUTPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  R1 = digitalRead(TC_1);
  R2 = digitalRead(TC_2);
  digitalWrite(led,LOW);

  if(R1 == 1 and R2 == 1){
    analogWrite(AIA,0);
    analogWrite(AIB,0);

  }

  else if(R1 == 1 and R2 == 0){
    analogWrite(AIA,255);
    analogWrite(AIB,0);

  }

  else if(R1 == 0 and R2 == 1){
    analogWrite(AIA,0);
    analogWrite(AIB,255);

  }
  
  else if(R1 == 0 and R2 == 0){
    analogWrite(AIA,0);
    analogWrite(AIB,0);
    digitalWrite(led,HIGH);
  }
  
  Serial.println(R1);
  Serial.println(R2);
  Serial.println("--------");
}
