int incomingByte = 0;   

void setup() {
        Serial.begin(9600);    
}
int i = 0;
void loop() {
for (i = 0; i < 256; i++){
  Serial.print(" ");
  Serial.println(i);

      }
}

