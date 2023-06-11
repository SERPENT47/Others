float n[] = {10, 15, 20, 25};
float x = (n[0]+n[1]+n[2]+n[3]);
float len = sizeof(n)/sizeof(n[0]);
float avg=x/len;
void setup() {
  Serial.begin(9600);
}
void loop() {  
  Serial.print("Average of ");
  Serial.print(n[0]); 
  Serial.print(", ");  
  Serial.print(n[1]); 
  Serial.print(", "); 
  Serial.print(n[2]); 
  Serial.print(", "); 
  Serial.print(n[3]); 
  Serial.print(" is = ");                               
  Serial.println(avg);
  delay(90000000);   
}
