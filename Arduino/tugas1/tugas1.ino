String dataTerima;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if (Serial.available() > 0){
  dataTerima = Serial.readStringUntil('\n');

  if (dataTerima == "on"){
    digitalWrite(13, HIGH);
    }else
    if (dataTerima == "off"){
      digitalWrite(13, LOW);
      }
  }
}
