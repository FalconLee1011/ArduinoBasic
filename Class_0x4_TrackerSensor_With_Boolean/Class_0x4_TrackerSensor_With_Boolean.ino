const int TC_0 = 2;
const int TC_1 = 3;

const int AIA = 5;
const int AIB = 6;

const int led = 13;

int val_0;
int val_1;

int led = 13

void setup() {
  pinMode(TC_0, INPUT);
  pinMode(TC_1, INPUT);
  pinMode(AIA, OUTPUT);
  pinMode(AIB, OUTPUT);
  pinMode(led, OUTPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  val_0 = digitalRead(TC_0);
  val_1 = digitalRead(TC_1);

  digitalWrite(led, LOW);

  if(val_0 == HIGH && val_1 == HIGH){
    analogWrite(AIA, 255);
    analogWrite(AIB, 0);
  }

  else if(val_0 == LOW && val_1 == HIGH){
    analogWrite(AIA, 0);
    analogWrite(AIA, 255)
  }

  else if(val_0 == HIGH && val_1 == HIGH){
    analogWrite(AIA, 0);
    analogWrite(AIB, 0);
  }

  else{
    digitalWrite(led, HIGH);
  }
  
}
