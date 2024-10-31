

const int pins[] = {2,3,4,5,6,7,8};

void setup() {
  // put your setup code here, to run once:
  
  for(int i = 0; i < (sizeof(pins)/sizeof(pins[0])); i++){
    pinMode(pins[i], OUTPUT);
    digitalWrite(pins[i], 0);
  }
}

void loop() {
  
  for(int i = 0; i < (sizeof(pins)/sizeof(pins[0])); i++){
    digitalWrite(pins[i], 1);
    delay(100);
  }
  for(int i = 0; i < (sizeof(pins)/sizeof(pins[0])); i++){
    digitalWrite(pins[i], 0);
    delay(100);
  }

}
