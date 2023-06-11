void setup() {
Serial.begin(9600);
}
void loop() {
Serial.print("Student ID:" );
while (Serial.available()==0){}   
   String id = Serial.readString();
   Serial.println(id);
   Serial.print("Admission Year: 20" );
   Serial.print(id[0]);
   Serial.println(id[1]);
   if(id[3]=='2'){
   Serial.println("Term: Fall");
   }
   else if(id[3]=='1'){
   Serial.println("Term: Spring");
   }
   else{
    Serial.println("Invalid ID");
   }
   if(id[5]=='1'){
   Serial.println("Department: CSE");
   }
   else if(id[5]=='2'){
   Serial.println("Department: ME");
   }
   else if(id[5]=='3'){
   Serial.println("Department: CE");
   }
   else if(id[5]=='4'){
   Serial.println("Department: ARCH");
   }
   else if(id[5]=='5'){
   Serial.println("Department: EEE");
   }
   else if(id[5]=='6'){
   Serial.println("Department: TE");
   }
   Serial.print("Roll No.:");
   Serial.print(id[6]);
   Serial.print(id[7]);
   Serial.println(id[8]);
   Serial.println("\n");
}
