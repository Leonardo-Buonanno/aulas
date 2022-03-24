
int botao = 2;
int led = 4;
bool estadoLed = 0;
void setup()
{
  pinMode(botao,INPUT);//
  pinMode(led,OUTPUT);
}

void loop()
{
 if(digitalRead== HIGH)//
 {
   estadoLed = !estadoLed;//
   digitalWrite(led,estadoLed);
   while(digitalRead== HIGH);
   delay(100);
 }
}
