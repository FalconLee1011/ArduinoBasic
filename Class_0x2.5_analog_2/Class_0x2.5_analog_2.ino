int AIA = 5;
int AIB = 6;
int val;
int in = A0;

void setup() {
  Serial.begin(9600);
  pinMode(AIA, OUTPUT);
  pinMode(AIB, OUTPUT);
}

void loop() {
  
  val = analogRead(in) / 4;
  
  Serial.println(val);
  
  analogWrite(AIA, val);
  analogWrite(AIB, 0);
}
