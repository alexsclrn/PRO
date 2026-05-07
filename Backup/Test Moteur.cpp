// Aide de claude pour la structure du code

#define ENA D3
#define IN1 D4
#define IN2 D7
#define ENB D8
#define IN3 D5
#define IN4 D6

void setup() {
 pinMode(ENA, OUTPUT);
 pinMode(IN1, OUTPUT);
 pinMode(IN2, OUTPUT);
 pinMode(ENB, OUTPUT);
 pinMode(IN3, OUTPUT);
 pinMode(IN4, OUTPUT);
 digitalWrite(ENA, HIGH);
 digitalWrite(ENB, HIGH);
 Serial.begin(115200);
}

void loop() {
 digitalWrite(IN1, HIGH);
 digitalWrite(IN2, LOW);
 delay(2000);
 digitalWrite(IN1, LOW);
 digitalWrite(IN2, LOW);
 delay(1000);
 digitalWrite(IN1, LOW);
 digitalWrite(IN2, HIGH);
 delay(2000);
 digitalWrite(IN1, LOW);
 digitalWrite(IN2, LOW);
 delay(1000);
 digitalWrite(IN3, HIGH);
 digitalWrite(IN4, LOW);
 delay(2000);
 digitalWrite(IN3, LOW);
 digitalWrite(IN4, LOW);
 delay(1000);
 digitalWrite(IN3, LOW);
 digitalWrite(IN4, HIGH);
 delay(2000);
 digitalWrite(IN3, LOW);
 digitalWrite(IN4, LOW);
 delay(1000);
}
