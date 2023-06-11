void setup() {
Serial.begin(9600);
}
void loop() {
Serial.print("Radius: " );
while (Serial.available()==0){}                                  
   float radius = Serial.parseFloat();
   Serial.println(radius);  

   float area=3.1416*radius*radius;
   Serial.print("Area of the Circle: ");
   Serial.println(area);
   Serial.print("\n");
}
