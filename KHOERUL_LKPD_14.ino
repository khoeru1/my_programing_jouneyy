// KHOERUL RIZQY
// XI TAV 1

#define MQ2_PIN 4
void setup() {  // put your setup code here, to run once:
Serial.begin(115200);
pinMode(MQ2_PIN, INPUT);}
void loop() {  // put your main code here, to run repeatedly:
int mq2Value = analogRead(MQ2_PIN);
Serial.print("nilai MQ-: ");
Serial.println(mq2Value);
delay(1000);}