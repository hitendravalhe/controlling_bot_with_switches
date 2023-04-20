int en1=13;
int f1=12;
int r1=10;
int en2=11;
int f2=9;
int r2=8;
int sw1=7;
int sw2=6;
int sw3=5;
int sw4=4;
int but1;
int but2;
int but3;
int but4;

//function below

int forward(){
  digitalWrite(en1,HIGH);
  digitalWrite(f1,HIGH);
  digitalWrite(r1,LOW);
  digitalWrite(en2,HIGH);
  digitalWrite(f2,HIGH);
  digitalWrite(r2,LOW);
  }

int reverse(){
  digitalWrite(en1,HIGH);
  digitalWrite(f1,LOW);
  digitalWrite(r1,HIGH);
  digitalWrite(en2,HIGH);
  digitalWrite(f2,LOW);
  digitalWrite(r2,HIGH);
}

int left(){
  digitalWrite(en1,HIGH);
  digitalWrite(f1,LOW);
  digitalWrite(r1,HIGH);
  digitalWrite(en2,HIGH);
  digitalWrite(f2,HIGH);
  digitalWrite(r2,LOW);
}

int right(){
  digitalWrite(en1,HIGH);
  digitalWrite(f1,HIGH);
  digitalWrite(r1,LOW);
  digitalWrite(en2,HIGH);
  digitalWrite(f2,LOW);
  digitalWrite(r2,HIGH);
}

int mydelay(){
  digitalWrite(en1,LOW);
  digitalWrite(f1,LOW);
  digitalWrite(r1,LOW);
  digitalWrite(en2,LOW);
  digitalWrite(f2,LOW);
  digitalWrite(r2,LOW);
  delay(2111);
}


void setup() {
  pinMode(en1,OUTPUT);
  pinMode(en2,OUTPUT);
  pinMode(f1,OUTPUT);
  pinMode(r1,OUTPUT);
  pinMode(f2,OUTPUT);
  pinMode(r2,OUTPUT);

}

void loop() {
  but1=digitalRead(sw1);
  but2=digitalRead(sw2);
  but3=digitalRead(sw3);
  but4=digitalRead(sw4);
       if(but1==0 && but2==1 && but3==1 && but4==1){
    forward();
  }
  else if(but1==1 && but2==0 && but3==1 && but4==1){
    reverse();
  }
  else if(but1==1 && but2==1 && but3==0 && but4==1){
    left();
  }
  else if(but1==1 && but2==1 && but3==1 && but4==0){
    right();
    }
  mydelay();
}
