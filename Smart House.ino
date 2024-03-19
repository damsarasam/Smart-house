char val;

void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  Serial.begin(9600);
}

void loop() {

  if(Serial.available()){
      val = Serial.read();
      Serial.println(val);
    }

    if(val == '1'){
        digitalWrite(2, HIGH);
      }
    else if(val == '2'){
        digitalWrite(2, LOW);
      }
    else if(val == '3'){
        digitalWrite(3, HIGH);
      }
    else if(val == '4'){
        digitalWrite(3, LOW);
      }
    else if(val == '5'){
        digitalWrite(4, HIGH);
      }
    else if(val == '6'){
        digitalWrite(4, LOW);
      }
    else if(val == '7'){
        digitalWrite(5, HIGH);
      }
    else if(val == '8'){
        digitalWrite(5, LOW);
      }
    else if(val == '9'){
        digitalWrite(6, HIGH);
    }
    else if(val == '10'){
        digitalWrite(6, LOW);
    }
    
    

    delay(100);

}