int led1=22;
int led2=23;
int led3=24;
int led4=25;
int led5=26;
int led6=27;
int led7=28;
int led8= 29;

int T=300;
void setup() {
  // put your setup code here, to run once:
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);
pinMode(led4, OUTPUT);
pinMode(led5, OUTPUT);
pinMode(led6, OUTPUT);
pinMode(led7, OUTPUT);
pinMode(led8, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(led1, HIGH);
digitalWrite(led2, HIGH);
delay(T);
digitalWrite(led1, LOW);
digitalWrite(led2, LOW);
delay(T);
digitalWrite(led3, HIGH);
digitalWrite(led4, HIGH);
delay(T);
digitalWrite(led3, LOW);
digitalWrite(led4, LOW);
delay(T);
digitalWrite(led5, HIGH);
digitalWrite(led6, HIGH);
delay(T);
digitalWrite(led5, LOW);
digitalWrite(led6, LOW);
delay(T);
digitalWrite(led7, HIGH);
digitalWrite(led8, HIGH);
delay(T);
digitalWrite(led7, LOW);
digitalWrite(led8, LOW);
delay(T);
}
