int IN1 = 4;
int IN2 = 5;
int IN3 = 6;
int IN4 = 7;
int ENA = 9;
int ENB = 10;
int right;
int left;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(IN1,OUTPUT);
pinMode(IN2,OUTPUT);
pinMode(IN3,OUTPUT);
pinMode(IN4,OUTPUT);

pinMode(12,INPUT);
pinMode(13,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

right=digitalRead(12);
left=digitalRead(13);

//Stop
if(left=1 and right==1){
    analogWrite(ENA,0);
    analogWrite(ENB,0);
    digitalWrite(IN1,LOW);
    digitalWrite(IN2,LOW);
    digitalWrite(IN3,LOW);
    digitalWrite(IN4,LOW);
}

//Foward 
else if(left==0 and right==0){
    analogWrite(ENA,80);
    analogWrite(ENB,80);
    digitalWrite(IN1,LOW);
    digitalWrite(IN2,HIGH);
    digitalWrite(IN3,LOW);
    digitalWrite(IN4,HIGH);
}


//Right  
else if(left==0 and right==1){
    analogWrite(ENA,250);
    analogWrite(ENB,250);
    digitalWrite(IN1,LOW);
    digitalWrite(IN2,HIGH);
    digitalWrite(IN3,HIGH);
    digitalWrite(IN4,LOW);
}
 
//left  
else if(left==1 and right==0){
    analogWrite(ENA,250);
    analogWrite(ENB,250);
    digitalWrite(IN1,HIGH);
    digitalWrite(IN2,LOW);
    digitalWrite(IN3,LOW);
    digitalWrite(IN4,HIGH);
}

}