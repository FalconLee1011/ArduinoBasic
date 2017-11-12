int led = 3;
int val;
int in = A0;

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop() {
  val = analogRead(in) / 4;
  Serial.println(val);
  analogWrite(led, val);
}
