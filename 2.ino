void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print("First Number: ");
  while (Serial.available()==0){}
  int x=Serial.parseInt();
  Serial.println(x);
  
  Serial.print("Second Number: ");
  while (Serial.available()==0){}
  int y=Serial.parseInt();
  Serial.println(y);
  
  Serial.print("Third Number: ");
  while (Serial.available()==0){}
  int z=Serial.parseInt();
   Serial.println(z);
   Serial.print("\n");
  Serial.print("Minimum Number: ");
  
  if(x<y && x<z){
    Serial.print(x);
   Serial.println("\n");
  }
  else if(y<x && y<z){
    Serial.print(y);
    Serial.println("\n");
  }
  else {
    Serial.print(z);
    Serial.println("\n");
  }
}
