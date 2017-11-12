int TC_1 = 2;
int TC_2 = 3;

int R1;
int R2;

void setup(){
  Serial.begin(9600);
  pinMode(TC_1, INPUT);
  pinMode(TC_2, INPUT);
}

void loop() {
  R1 = digitalRead(TC_1);
  R2 = digitalRead(TC_2);

  Serial.println(R1);
  Serial.println(R2);
  Serial.println("--------");
}
