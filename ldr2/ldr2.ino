const int led1=6;
const int led2=5;
const int led3=3;
const int ldr1=A0;
const int ldr2=A1;
const int ldr3=A2;
int vldr1;
int vldr2;
int vldr3;

void setup()
{
  pinMode (led1,OUTPUT);
  pinMode (led2,OUTPUT);
  pinMode (led3,OUTPUT);
  pinMode (ldr1,INPUT);
  pinMode (ldr2,INPUT);
  pinMode (ldr3,INPUT);
}
void loop()
{
  vldr1=analogRead(ldr1);
  vldr1=map(vldr1,0,1023,0,255);
  analogWrite(led1,vldr1);
  vldr2=analogRead(ldr2);
  vldr2=map(vldr2,0,1023,0,255);
  analogWrite(led2,vldr2);
  vldr3=analogRead(ldr3);
  vldr3=map(vldr3,0,1023,0,255);
  analogWrite(led3,vldr3);
}

