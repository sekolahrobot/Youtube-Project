#define ledhijau 2
#define ledmerah 3
#define buzzer 4

char result;

void setup() {
  Serial.begin(9600);
  pinMode(ledhijau,OUTPUT);
  pinMode(ledmerah,OUTPUT);
  pinMode(buzzer,OUTPUT);

}

void loop() {
   while (Serial.available() > 0) {
      result = Serial.read();
      switch (result) {
          case '1':
              digitalWrite(ledhijau,HIGH);
              digitalWrite(ledmerah,LOW);
              digitalWrite(buzzer,LOW);
              break;
          case '2':
              digitalWrite(ledhijau,LOW);
              digitalWrite(ledmerah,HIGH);
              digitalWrite(buzzer,HIGH);
              break;
      }
    }
    delay(100);
}
