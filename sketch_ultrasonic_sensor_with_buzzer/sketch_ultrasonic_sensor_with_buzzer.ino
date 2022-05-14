int tri = 13;
int echo = 12;
int spk = 11;
int duration, distance;

void setup()
{
  pinMode(tri, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(spk, OUTPUT);
}

void loop() {
  long duration, distance;
  digitalWrite(tri, LOW);
  delay(10);
  digitalWrite(tri, HIGH);
  delay(10);
  digitalWrite(tri, LOW);
  duration = pulseIn(echo, HIGH);
  distance = (duration/2) / 29.1;
  if(distance<60){
    analogWrite(spk, 255);}
    else{
      analogWrite(spk, 00);}
  delay(100);
}
