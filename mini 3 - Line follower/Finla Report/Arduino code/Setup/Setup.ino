// Right motor 
#define Rmotor 5   //pin of the motor
#define Rspeed 180 //to control the speed of Right Motor
#define in3    3   // direction of the motor
#define in4    4   // direction of the motor
unsigned long currentMillis = millis();
unsigned long previousMillis = 0;
const long interval = 300; 

//Left motor 
#define Lmotor 6   //pin of the motor
#define Lspeed 180 //to control the speed of Left Motor
#define in2    2   // direction of the motor
#define in3    3   // direction of the motor

//sensors 
int RSensor = 11;
int LSensor = 12;
int CSensor = 13;

void setup() {
  // put your setup code here, to run once:
pinMode(Rmotor,OUTPUT);
pinMode(in3,OUTPUT);
pinMode(in4,OUTPUT);
pinMode(Lmotor,OUTPUT);
pinMode(in2,OUTPUT);
pinMode(in3,OUTPUT);

pinMode(RSensor,INPUT);
pinMode(LSensor,INPUT);
pinMode(CSensor,INPUT);
}




