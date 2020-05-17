const int ledPIN=7;
void setup(){
Serial.begin(9600);
pinMode(ledPIN, OUTPUT);
}

void loop(){
digitalWrite(ledPIN, HIGH);
delay(700);
digitalWrite(ledPIN, LOW);
delay(700);
}
