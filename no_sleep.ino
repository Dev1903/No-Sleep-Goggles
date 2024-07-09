
int in1 = 8;
int in2 = 7;
long int irtime=0;
// Motor B connections
int relay = 6;
int led=2;
int ir=3;
int in3 = 5;
int in4 = 4;
int state;
void(* resetFunc) (void) = 0;
void setup() {
  // Set all the motor control pins to outputs
  Serial.begin(9600);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(led, OUTPUT);
  pinMode(relay, OUTPUT);
  pinMode(ir, INPUT);
  

  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
}

void loop() {
  directionControl();
  int iroutput=digitalRead(ir);
  if (iroutput==1)
  {
    irtime=millis();
    if(irtime>=3000)
    {
      digitalWrite(relay,0);
      digitalWrite(led,1);
      delay(30);
      digitalWrite(led,0);
      delay(30);
      digitalWrite(led,1);
      delay(30);
      digitalWrite(led,0);
      
  }
  
  }
  else
  {
    
    
      digitalWrite(led,0);
      delay(2000);
      digitalWrite(relay,1);
  }
  if(iroutput==0)
  {
    resetFunc();
  }
}
// This function lets you control spinning direction of motors
void directionControl() {
   
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
   }
  

