// C++ code
// Include the library code 
#include <LiquidCrystal.h>

//creates an LCD object, Parameters:
//(rs, enable,d4, d5, d6, d7)
LiquidCrystal lcd (12, 11, A0, A1, A2, A3);

// Motor 1 pins
int EN1 = 5;  // PWM pin for speed control
int IN1 = 2;
int IN2 = 3;

// Motor 2 pins
int EN2 = 6;  // PWM pin for speed control
int IN3 = 7;
int IN4 = 8;
void setup ()
{
  // set up the LCD's number of columns and rows :
  lcd.begin(16,2);
  //clears the LCD screen
  lcd.clear ();

   // Set motor pins as outputs
  pinMode(EN1, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(EN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  // Enable motors
  digitalWrite(EN1, HIGH);
  digitalWrite(EN2, HIGH);
}
void loop()
{
  // print the message
  lcd.print("Cleaning");
  
  //set the cursor to column , line 
  //Since counting begins with 0
  lcd.setCursor(0 , 1);
  
  lcd.print("the River        ");

   digitalWrite(IN1, HIGH);  // Motor 1 forward
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);   // Motor 2 reverse
  digitalWrite(IN4, HIGH);
}