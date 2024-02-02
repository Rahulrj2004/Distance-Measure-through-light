int trigg=13;
int echo=12;
int duration;
int distance;
int led1=31;
int led2=37;
int led3=36;
int led4=46;
int led5=47;
int i=5;


void setup() {
  Serial.begin(9600);
  pinMode(trigg,OUTPUT);
  pinMode(echo,INPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
}

void loop() {
  digitalWrite(trigg,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigg,LOW);  

  duration=pulseIn(echo,HIGH);
  distance=(duration/2)/28.5;
  Serial.println(distance); 
  if(distance>25){
    digitalWrite(led5,LOW);
    digitalWrite(led4,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led1,LOW);
  }

  else if(distance>20)
  {
    digitalWrite(led5,HIGH);
   
  }
  else if(distance>15)
  {
    digitalWrite(led5,HIGH);
    digitalWrite(led4,HIGH);
   
  }
  else if(distance>10)
  {
    digitalWrite(led5,HIGH);
    digitalWrite(led4,HIGH);
    digitalWrite(led3,HIGH);
   
  }
  else if(distance>5)
  {
    digitalWrite(led5,HIGH);
    digitalWrite(led4,HIGH);
    digitalWrite(led3,HIGH);
    digitalWrite(led2,HIGH);
  
  }
  else if(distance>3)
  {
    digitalWrite(led5,HIGH);
    digitalWrite(led4,HIGH);
    digitalWrite(led3,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led1,HIGH);
  }
  else
  {
    digitalWrite(led5,LOW);
    digitalWrite(led4,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led1,LOW);
  }
  

}
