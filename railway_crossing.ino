int sensor1=A0;
int sensor2=A1;
int motor1=10;
int motor2=9;
int motor11=11;
int motor12=12;
int s1g=3;
int s1rsi=4;
int s3s4g=5;
int s3s4r=6;
int s2r=8;
int s2y=A2;
int i=0;


void setup()
{
  pinMode(sensor1,INPUT);
  pinMode(sensor2,INPUT);
  pinMode(motor1,OUTPUT);
  pinMode(motor2,OUTPUT);
  pinMode(motor11,OUTPUT);
  pinMode(motor12,OUTPUT);
  pinMode(s1g,OUTPUT);
  pinMode(s1rsi,OUTPUT);
  pinMode(s3s4g,OUTPUT);
  pinMode(s3s4r,OUTPUT);
  pinMode(s2r,OUTPUT);
  pinMode(s2y,INPUT);
  
}
void loop()
{
int Val1=analogRead(sensor1);
int Val2=analogRead(sensor2);
int Val3=analogRead(s2y);
if(Val1>350)
{
  i=1;
}
if(i==1 && (Val2<650))
{
  digitalWrite(s1rsi,HIGH);
  digitalWrite(s1g,LOW);
  delay(500);
  digitalWrite(s3s4g,LOW);
  digitalWrite(s3s4r,HIGH);
}
else
{
  digitalWrite(s1rsi,LOW);
  digitalWrite(s1g,HIGH);
  delay(500);
  digitalWrite(s3s4g,HIGH);
  digitalWrite(s3s4r,LOW);
}
if(i==1)
{
  digitalWrite(motor1,HIGH);
  digitalWrite(motor2,LOW);
  digitalWrite(motor11,HIGH);
  digitalWrite(motor12,LOW);
  delay(5000);
 // digitalWrite(motor1,HIGH);
 // digitalWrite(motor2,HIGH);
  //digitalWrite(motor11,HIGH);
 // digitalWrite(motor12,HIGH);
}
if(Val2>650)
{
  i=0;
}
if(Val2>650)
{
  digitalWrite(motor1,LOW);
  digitalWrite(motor2,HIGH);
  digitalWrite(motor11,LOW);
  digitalWrite(motor12,HIGH);
  delay(5000);
  digitalWrite(motor1,HIGH);
  digitalWrite(motor2,HIGH);
  digitalWrite(motor11,HIGH);
  digitalWrite(motor12,HIGH);
  
}
  while(Val3>400)
  {
    digitalWrite(s2r,LOW);
  }
  
}
