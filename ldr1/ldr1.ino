const int led1=5;
const int ldr1=A0;
int vldr;

void setup()
{
  pinMode (led1,OUTPUT);
  pinMode (ldr1,INPUT);
}
void loop()
{
  vldr=analogRead(ldr1);
  vldr=map(vldr,0,1023,0,255);
  analogWrite(led1,vldr);
}

