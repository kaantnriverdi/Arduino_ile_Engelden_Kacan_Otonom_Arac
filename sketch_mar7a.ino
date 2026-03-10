#define pwm 13
#define pwm2 9
#define in1 12
#define in2 11
#define in3 10
#define in4 8
const int pinPin = 7;
#define trigPin 4
#define echoPin 5
long sure;
int mesafe;

void setup() {

  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(pwm, OUTPUT);
  pinMode(pwm2, OUTPUT);

}

void loop() {

  digitalWrite(trigPin, 0);
  delayMicroseconds(2);
  digitalWrite(trigPin, 1);
  delayMicroseconds(10);
  digitalWrite(trigPin, 0);
  sure = pulseIn(echoPin, 1);
  mesafe = (sure*.0343)/2;

  digitalWrite(in1 ,0);
  digitalWrite(in2 ,1);
  digitalWrite(pwm ,255);
  digitalWrite(in3 ,0);
  digitalWrite(in4 ,1);
  digitalWrite(pwm2 ,255);

  if(mesafe<30)
  {
    digitalWrite(in1 ,1);
    digitalWrite(in2 ,1);
    digitalWrite(pwm ,0);
    digitalWrite(in3 ,1);
    digitalWrite(in4 ,1);
    digitalWrite(pwm2 ,0);

    delay(1000);
    
  digitalWrite(in1 ,1);
  digitalWrite(in2 ,0);
  digitalWrite(pwm ,255);
  digitalWrite(in3 ,1);
  digitalWrite(in4 ,0);
  digitalWrite(pwm2 ,255);

  delay(500);

  digitalWrite(in1 ,1);
  digitalWrite(in2 ,0);
  digitalWrite(pwm ,50);
  digitalWrite(in3 ,0);
  digitalWrite(in4 ,1);
  digitalWrite(pwm2 ,50);

  delay(700);
  }

  else
  {
  digitalWrite(in1 ,0);
  digitalWrite(in2 ,1);
  digitalWrite(pwm ,255);
  digitalWrite(in3 ,0);
  digitalWrite(in4 ,1);
  digitalWrite(pwm2 ,255);
  }

}
