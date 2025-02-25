//Define pin
#define inA 2
#define inB 3
#define inC 4
#define out1 A3
#define out2 A2
#define out3 A1
#define out4 A0
#define out5 A10 
// Diagram for a tree
//This will base on the format (in,out)
//           A,3
//       B,2 B,3 B,4
//   C,1 C,2 C,3 C,4 C,5

void FirstRow(int time);
void SecondRow(int time);
void ThirdRow(int time);
void setup() {
  // put your setup code here, to run once:
  pinMode(inA,OUTPUT);
  pinMode(inB,OUTPUT);
  pinMode(inC,OUTPUT);
  pinMode(out1,OUTPUT);
  pinMode(out2,OUTPUT);
  pinMode(out3,OUTPUT);
  pinMode(out4,OUTPUT);
  pinMode(out5,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  FirstRow(1000);
  SecondRow(1000);
  ThirdRow(1000);
}

//This will light up the entire first row
void FirstRow(int time){
  //On
  digitalWrite(inA , HIGH);
  analogWrite(out3, 255);
  //Delay
  delay(time);
  //Off
  digitalWrite(inA , LOW);
  analogWrite(out1, 0);
}
//This will light up the entire second row
void SecondRow(int time){
  //On
  digitalWrite(inB , HIGH);
  analogWrite(out2, 255);
  analogWrite(out3, 255);
  analogWrite(out4, 255);
  //Delay
  delay(time);
  //Off
  digitalWrite(inB , LOW);
  analogWrite(out2, 0);
  analogWrite(out3, 0);
  analogWrite(out4, 0);
}

void ThirdRow(int time){
  //On
  digitalWrite(inC , HIGH);
  analogWrite(out1, 255);
  analogWrite(out2, 255);
  analogWrite(out3, 255);
  analogWrite(out4, 255);
  analogWrite(out5, 255);
  //Delay
  delay(time);
  //Off
  digitalWrite(inC , LOW);
  analogWrite(out1, 0);
  analogWrite(out2, 0);
  analogWrite(out3, 0);
  analogWrite(out4, 0);
  analogWrite(out5, 0);
}
