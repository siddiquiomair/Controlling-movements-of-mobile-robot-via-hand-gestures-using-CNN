#define in1 6                                                          //defining const. variable named "in1" with value 0, which refers to the PICO D0.                  
#define in2 9                                                           //defining const. variable named "in2" with value 1, which refers to the PICO D1.                  
#define in3 5                                                           //defining const. variable named "in3" with value 2, which refers to the PICO D2.                  
#define in4 10                                                           //defining const. variable named "in4" with value 3, which refers to the PICO D3.                  
//#define motorASpeedPin 9                  
//#define motorBSpeedPin 3                  
char val;              
                
/*                  
  forward function takes four arguments x, y, motorSpeed, speedPin.                  
  this function returns nothing.                  
  responsible for running motor A forward by a specific speed.                  
*/               
               
void forward() {                  
 digitalWrite(in1, HIGH);                  
 digitalWrite(in2, LOW);  
 digitalWrite(in3, HIGH);  
 digitalWrite(in4, LOW);                  
                 
}         

    void backward() {                  
 digitalWrite(in1, LOW);                  
 digitalWrite(in2, HIGH);  
 digitalWrite(in3, LOW);  
 digitalWrite(in4, HIGH);                  
                 
}     

  void left() {                  
 digitalWrite(in1, HIGH);                  
 digitalWrite(in2, LOW);  
 digitalWrite(in3, LOW);  
 digitalWrite(in4, LOW);                  
                 
}     

  void right() {                  
 digitalWrite(in1, LOW);                  
 digitalWrite(in2, LOW);  
 digitalWrite(in3, HIGH);  
 digitalWrite(in4, LOW);                  
                 
}     
                              
                      
               
void stopAll() {                  
 digitalWrite(in1, LOW);                  
 digitalWrite(in2, LOW);                  
 digitalWrite(in3, LOW);                  
 digitalWrite(in4, LOW);                  
}                 
             
void setup() {                  
pinMode(in1, OUTPUT);   
pinMode(in2, OUTPUT); 
pinMode(in3, OUTPUT); 
pinMode(in4, OUTPUT);               
 Serial.begin(9600);                  
 //Serial.println("Please enter 'f' to run the motor FORWARD, or 'b' to run the motor BACKWARD");                  
 //Serial.println("or 'r' to run the motor RIGHT, or 'l' to run the motor LEFT, or 's' to STOP all motors. ");                  
}                 
             
void loop() {                  
 if (Serial.available() > 0) {                  
   val = Serial.read();                  
 }                  
 if (val == 'f') {                  
   forward();                                 
   //Serial.println("forward");                  
 }                  
 if (val == 'b') {                  
   backward();                  
               
   //Serial.println("backward");                  
 }                  
 if (val == 'r') {                  
   right();                  
   //Serial.println("right");                  
 }                  
 if (val == 'l') {                  
   left();                  
   //Serial.println("left");                  
 }                  
 if (val == 's') {                  
   stopAll();                  
   //Serial.println("stopAll");                  
 }          
 if (val == 'n') {                  
   stopAll();                  
   //Serial.println("stopAll");                  
 }                 
}
