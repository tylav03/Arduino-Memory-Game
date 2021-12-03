
boolean test;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  // Sets pins 2-6 to OUTPUT
  for(int i = 2; i < 7; i++){
    pinMode(i, OUTPUT);
  }
  
  // Sets pins 7-11 to INPUT_PULLUP
  for(int i = 7; i < 12; i++){
    pinMode(i, INPUT);
  }
  test = false;
}


int level = 0;
void loop() {
  if(test==true){
    
  
  // put your main code here, to run repeatedly:
  int radn = random(1,1024);
  Serial.println(radn);
  int combo1= random(2,7);
  int combo2 = random(2,7);
  int combo3 = random(2,7);
  int combo4 = random(2,7);
  int combo5 = random(2,7);
  int mycombos[] = {combo1, combo2, combo3, combo4, combo5};
  level = 1;
    if (level == 1){
      digitalWrite(2, HIGH);
      delay(1000);
      digitalWrite(2, LOW);
      delay(1000);
    }
  
    delay(2000);
 
    for(int i = 0; i < 5; i++){
        digitalWrite(mycombos[i], HIGH);
        delay(400);
        digitalWrite(mycombos[i], LOW);
        delay(400);
    }
    
    boolean buttonPressed;
    int input[5] = {};
    for(int i = 0; i < 5; i++){
      buttonPressed = false;
      int pressedButton = 0;
      while(buttonPressed == false){
        if(digitalRead(7) == 1){
          input[i] = 2;
          pressedButton = 7;
          Serial.println(2);
          buttonPressed = true;
        } else if(digitalRead(8) == 1){
          input[i] = 3;
          pressedButton = 8;
          Serial.println(3);
          buttonPressed = true;
        } else if(digitalRead(9) == 1){
          input[i] = 4;
          pressedButton = 9;
          Serial.println(4);
          buttonPressed = true;
        } else if(digitalRead(10) == 1){
          input[i] = 5;
          pressedButton = 10;
          Serial.println(5);
          buttonPressed = true;
        } else if(digitalRead(11) == 1){
          input[i] = 6;
          pressedButton = 11;
          Serial.println(6);
          buttonPressed = true;
        }
      }
      while(digitalRead(pressedButton) == 1){
        for(int i = 7; i< 12; i++){
              Serial.print(digitalRead(i));
        }
        Serial.println();
        delay(10);
      }
    }
    boolean correct = true;
    for(int i = 0; i < 5; i++){
      if(mycombos[i] != input[i]){
        correct = false;
      }
    }
    delay(1000);
  
    if(correct){
      for(int i = 0; i< 3; i++){
        for(int j = 2; j < 7; j++){
          digitalWrite(j, HIGH);
          delay(200);
        }
        for(int j = 2; j < 7; j++){
          digitalWrite(j, LOW);
          delay(200);
        }
      }
    } else {
      for(int i = 0; i<3; i++){
        for(int j = 2; j < 7; j++){
          digitalWrite(j, HIGH);
        }
        delay(200);
        for(int j = 2; j < 7; j++){
          digitalWrite(j, LOW);
        }
        delay(200);
      }
    }
    Serial.println(correct);
    
    if(correct == true){
     digitalWrite(2, HIGH);
     digitalWrite(3, HIGH);
     delay(1000);
     digitalWrite(2, LOW);
     digitalWrite(3, LOW);
     delay(2000);
    combo1= random(2,7);
    combo2 = random(2,7);
    combo3 = random(2,7);
    combo4 = random(2,7);
    combo5 = random(2,7);
    int combo6 = random(2,7);
    int mycombos2[] = {combo1, combo2, combo3, combo4, combo5, combo6};
    for(int i = 0; i < 6; i++){
          digitalWrite(mycombos2[i], HIGH);
          delay(400);
          digitalWrite(mycombos2[i], LOW);
          delay(400);
    }
    int input2[6] = {};
    for(int i = 0; i < 5; i++){
      buttonPressed = false;
      int pressedButton = 0;
      while(buttonPressed == false){
        if(digitalRead(7) == 1){
          input2[i] = 2;
          pressedButton = 7;
          Serial.println(2);
          buttonPressed = true;
        } else if(digitalRead(8) == 1){
          input2[i] = 3;
          pressedButton = 8;
          Serial.println(3);
          buttonPressed = true;
        } else if(digitalRead(9) == 1){
          input2[i] = 4;
          pressedButton = 9;
          Serial.println(4);
          buttonPressed = true;
        } else if(digitalRead(10) == 1){
          input2[i] = 5;
          pressedButton = 10;
          Serial.println(5);
          buttonPressed = true;
        } else if(digitalRead(11) == 1){
          input2[i] = 6;
          pressedButton = 11;
          Serial.println(6);
          buttonPressed = true;
        }
      }
      while(digitalRead(pressedButton) == 1){
        for(int i = 7; i< 12; i++){
              Serial.print(digitalRead(i));
        }
        Serial.println();
        delay(10);
      }
    }
    correct = true;
    for(int i = 0; i < 5; i++){
      if(mycombos2[i] != input2[i]){
        correct = false;
      }
    }
    delay(1000);
  
    if(correct){
      for(int i = 0; i< 3; i++){
        for(int j = 2; j < 7; j++){
          digitalWrite(j, HIGH);
          delay(200);
        }
        for(int j = 2; j < 7; j++){
          digitalWrite(j, LOW);
          delay(200);
        }
      }
    } else {
      for(int i = 0; i<3; i++){
        for(int j = 2; j < 7; j++){
          digitalWrite(j, HIGH);
        }
        delay(200);
        for(int j = 2; j < 7; j++){
          digitalWrite(j, LOW);
        }
        delay(200);
      }
    }
    Serial.println(correct);
    }


    
    if(correct == true){
     digitalWrite(2, HIGH);
     digitalWrite(3, HIGH);
     digitalWrite(4, HIGH);
     delay(1000);
     digitalWrite(2, LOW);
     digitalWrite(3, LOW);
     digitalWrite(4, LOW);
     delay(2000);
    combo1= random(2,7);
    combo2 = random(2,7);
    combo3 = random(2,7);
    combo4 = random(2,7);
    combo5 = random(2,7);
    int combo6 = random(2,7);
    int combo7 = random(2,7);
    int mycombos3[] = {combo1, combo2, combo3, combo4, combo5, combo6, combo7};
    for(int i = 0; i < 7; i++){
          digitalWrite(mycombos3[i], HIGH);
          delay(400);
          digitalWrite(mycombos3[i], LOW);
          delay(400);
    }
    int input3[7] = {};
    for(int i = 0; i < 7; i++){
      buttonPressed = false;
      int pressedButton = 0;
      while(buttonPressed == false){
        if(digitalRead(7) == 1){
          input3[i] = 2;
          pressedButton = 7;
          Serial.println(2);
          buttonPressed = true;
        } else if(digitalRead(8) == 1){
          input3[i] = 3;
          pressedButton = 8;
          Serial.println(3);
          buttonPressed = true;
        } else if(digitalRead(9) == 1){
          input3[i] = 4;
          pressedButton = 9;
          Serial.println(4);
          buttonPressed = true;
        } else if(digitalRead(10) == 1){
          input3[i] = 5;
          pressedButton = 10;
          Serial.println(5);
          buttonPressed = true;
        } else if(digitalRead(11) == 1){
          input3[i] = 6;
          pressedButton = 11;
          Serial.println(6);
          buttonPressed = true;
        }
      }
      while(digitalRead(pressedButton) == 1){
        for(int i = 7; i< 12; i++){
              Serial.print(digitalRead(i));
        }
        Serial.println();
        delay(10);
      }
    }
    correct = true;
    for(int i = 0; i < 7; i++){
      if(mycombos3[i] != input3[i]){
        correct = false;
      }
    }
    delay(1000);
  
    if(correct){
      for(int i = 0; i< 3; i++){
        for(int j = 2; j < 7; j++){
          digitalWrite(j, HIGH);
          delay(200);
        }
        for(int j = 2; j < 7; j++){
          digitalWrite(j, LOW);
          delay(200);
        }
      }
    } else {
      for(int i = 0; i<3; i++){
        for(int j = 2; j < 7; j++){
          digitalWrite(j, HIGH);
        }
        delay(200);
        for(int j = 2; j < 7; j++){
          digitalWrite(j, LOW);
        }
        delay(200);
      }
    }
    Serial.println(correct);
    }
  }
  test = true;
  }
  
   
  
  
  /*for(int i = 0; i<4; i++){
    for(int i = 2; i<7; i++){
      digitalWrite(i, HIGH);
    }
    delay(400);
    for(int i = 2; i<7; i++){
      digitalWrite(i, LOW);
    }
    delay(400);
  }
  */

  
  /*for(int i = 7; i< 12; i++){
    Serial.print(digitalRead(i));
  }
  
  Serial.println();
  delay(50);
*/
  

  
