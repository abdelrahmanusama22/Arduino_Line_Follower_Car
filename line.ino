#define IN1 6
#define IN2 7
#define IN3 8
#define IN4 9
#define speedl 5
#define speedr 10
#define sensorL 4
#define sensorR 13

int sl=0;
int sr=0;
void setup() {
  for(int i=5;i<=10;i++)
{
 pinMode(i,OUTPUT);   
}
  pinMode(sensorR,INPUT);
  pinMode(sensorL,INPUT);
}
void forword()
{
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,HIGH);
  digitalWrite(IN4,LOW);
  analogWrite(speedl,255);
  analogWrite(speedr,255);
}
void backword()
{
 digitalWrite(IN1,LOW);
  digitalWrite(IN2,HIGH);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,HIGH);
  analogWrite(speedl,255);
  analogWrite(speedr,255);
}
void left()
{
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,HIGH);
  digitalWrite(IN4,LOW);
  analogWrite(speedl,0);
  analogWrite(speedr,255);
}
void right()
{
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,LOW);
  analogWrite(speedl,255);
  analogWrite(speedr,0);
}
void stopp()
{
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,LOW);
  analogWrite(speedl,0);
  analogWrite(speedr,0);
}
void loop() 
{
  sl=digitalRead(sensorR);
   sr=digitalRead(sensorL);
   if(sl==1&&sr==1)
   forword();
   else if (sl==1&&sr==0)
   right();
   else if (sl==0&&sr==1)
   left();
   else if (sl==1&&sr==1)
   stopp(); 
}  
