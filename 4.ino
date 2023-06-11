float r;
void setup() {
Serial.begin(9600);
}
void loop() {
Serial.print("1st Input: " );
while (Serial.available()==0){}                                     
   int x = Serial.parseInt();
   Serial.println(x);

Serial.print("2nd Input: " );
while (Serial.available()==0){}   
   int y = Serial.parseInt();
   Serial.println(y);    

Serial.print("Operation: " );
while (Serial.available()==0){}   
   String z = Serial.readString();
   Serial.println(z);

if(z == "add"){
  r = x+y;
  Serial.print("Output: ");
  Serial.println(r);
  Serial.print("\n");
}
else if(z == "sub"){
  r = x-y;
  Serial.print("Output: ");
  Serial.println(r);
  Serial.print("\n");
}
else if(z == "mult"){
  r = x*y;
  Serial.print("Output: ");
  Serial.println(r);
  Serial.print("\n");
}
else if(z == "div"){
  r = x/y;
  Serial.print("Output: ");
  Serial.println(r);
  Serial.print("\n");
}
else{
  Serial.print("Invalid Operation");
  Serial.print("\n");
}
}
