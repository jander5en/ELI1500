
#include <Stepper.h>
String inputString = "";
int in1Pin = 12;
int in2Pin = 11;
int in3Pin = 10;
int in4Pin = 9;
bool isdir = false;
bool isnum = false;
int product = 1;
int mov = 0;


//toInt()
Stepper motor(648,  in1Pin,  in2Pin,  in3Pin,  in4Pin);


void setup() {
  inputString.reserve(50);
  motor.setSpeed(20);
  Serial.begin(9600);

}
void loop() {
  inputString = Serial.readStringUntil(' ');
  if (inputString == "right" && isdir == false) {
    isdir = true;
    product = 1;
    String tall = String(product);
    Serial.println("right test");
    Serial.println(product);
    Serial.println(isdir);  
  }
  else if (inputString == "left" && isdir == false) {
    isdir = true;
    product = -1;
    String tall = String(product);
    Serial.println("left test");
    Serial.println(product);
    Serial.println(isdir);
  }
  if (inputString.toInt() != 0) {
    isnum = true;
    mov = inputString.toInt();
    Serial.println("num test test");
    Serial.println(isnum);
    Serial.println(mov);
  }
  if (isnum == true && isdir == true) {
    mov = mov * product;
    motor.step(mov);
    isnum = false;
    isdir = false;
    mov = 0;
    Serial.println("drive test");
    Serial.println(mov);
    Serial.println(isnum);
    Serial.println(isdir);
    //step mov
  }
  Serial.println(inputString);
  //  nullstiller
  inputString = "";
}
