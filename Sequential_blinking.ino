
int LED5 = 15;
int LED4 = 14;
int LED3 = 13;
int LED2 = 12;
int LED1 = 11;

void setup() {
   pinMode(LED1, OUTPUT);
   pinMode(LED2, OUTPUT);
   pinMode(LED3, OUTPUT);
   pinMode(LED4, OUTPUT);
   pinMode(LED5, OUTPUT);
}


void loop() {
  digitalWrite(LED1, HIGH);     
  delay(200);                  
  digitalWrite(LED2, HIGH);    
  delay(200);                        
  digitalWrite(LED3, HIGH);    
  delay(200);                  
  digitalWrite(LED4, HIGH);    
  delay(200);                  
  digitalWrite(LED5, HIGH);    
  delay(200);                  
  digitalWrite(LED1, LOW);     
  delay(300);                  
  digitalWrite(LED2, LOW);     
  delay(300);                  
  digitalWrite(LED3, LOW);     
  delay(300);                  
}
