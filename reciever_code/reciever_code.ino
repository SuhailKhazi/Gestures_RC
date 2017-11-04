/////////////////////////////////////
//#include <LMotorController.h>
//double motorSpeedFactorLeft = 0.3;//these set the speeds of the motors 0.6
//double motorSpeedFactorRight = 0.3; //0.5
//MOTOR CONTROLLER 
int ENA = 5;
int IN1 = 6;
int IN2 = 7;
int IN3 = 8;
int IN4 = 9;
int ENB = 10;
//the following line initializes which pin on the arduino the drive is connected to, as well as speeds
//LMotorController motorController(ENA, IN1, IN2, ENB, IN3, IN4, 0.4, 0.4);
/////////////////////////////////////
void setup () {
  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);
  pinMode(6, OUTPUT); //BACK LEFT
  pinMode(7, OUTPUT);// FRONT LEFT
  pinMode(8, OUTPUT);// FRONT RIGHT
  pinMode(9, OUTPUT);//BACK RIGHT
  
     Serial.begin (9600);
     while (!Serial) {;}
}

void loop () {
  
     if (Serial.available()> 0) {
          int letters = Serial.available();   


           
          char word [letters] = "";
          for (int x=0; x<letters; x++) {
          word [x] = Serial.read ();
          }


        /*if(word[0] == 'e'){//stop
          
          digitalWrite(ENA, HIGH);
          digitalWrite(ENB, HIGH);
          digitalWrite(6,LOW);
          digitalWrite(7,LOW);
          digitalWrite(8,LOW);
          digitalWrite(9,LOW);
          }*/
          
          if(word[0] == 'a'){//turn left
          analogWrite(ENA, 35);
          analogWrite(ENB, 35);
          digitalWrite(6,HIGH);
          digitalWrite(7,LOW);
          digitalWrite(8,LOW);
          digitalWrite(9,LOW);
         
          }
            if(word[0] == 'b'){//turn right
          analogWrite(ENA, 35);
          analogWrite(ENB, 35);
          digitalWrite(6,LOW);          
          digitalWrite(7,LOW);
          digitalWrite(8,HIGH);
          digitalWrite(9,LOW);
          
          }
           if(word[0] == 'c'){//go down
          analogWrite(ENA, 35);
          analogWrite(ENB, 35);
          digitalWrite(6,HIGH);
          digitalWrite(7,LOW);
          digitalWrite(8,HIGH);
          digitalWrite(9,LOW);
          
          }
           if(word[0] == 'd'){//go up
          analogWrite(ENA, 35);
          analogWrite(ENB, 35);
          digitalWrite(6,LOW);
          digitalWrite(7,HIGH);
          digitalWrite(8,LOW);
          digitalWrite(9,HIGH);
          
          }
          
        
          //for (int x=0; x<letters; x++) word [x] = Serial.read ();
         
          //for (int i=0; i<letters; i++) word [i] -= 32; // Change case to upper case
         
          //Serial.println (word);
     }
 
     //delay (20);
}
