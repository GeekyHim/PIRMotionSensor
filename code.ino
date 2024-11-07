int inputPin = 2;
int val = 0;
int pinSpeaker = 10;

void setup() {
pinMode(pinSpeaker, OUTPUT);
pinMode(inputPin, INPUT);
Serial.begin(9600);
}

void loop(){
val = digitalRead(inputPin);
if (val == HIGH) {
digitalWrite(pinSpeaker, HIGH);
delay(2000);

} else {
digitalWrite(pinSpeaker, LOW);
delay(2000);
}
}
