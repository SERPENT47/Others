float r=0;
float radius=0;
float h=0;
float holes=0;
float j=0;
float i=0;
float x=0;
float y=0;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}
void loop() {
  // put your main code here, to run repeatedly:
Serial.println("what is your Radius?" );
while (Serial.available()==0){}                                  //Wait for user input
   radius = Serial.parseInt();
   Serial.println(radius);        
Serial.println("How many holes?" );
while (Serial.available()==0){}                                  //Wait for user input
   holes = Serial.parseInt();
   Serial.println(holes);
j=360/holes;//convert holes to degrees per positon   
i=j*3.14/180;//convert to degrees per positon radians 

Serial.println();
for (int k = 0; k <=holes-1; k++) {
x=radius*cos(i);
y=radius*sin(i);
Serial.print(x);
Serial.print(",");
Serial.println(y);
i=i+i;
x=radius*cos(i);
y=radius*sin(i);
//Serial.print(x);
//Serial.print(",");
//Serial.println(y);
Serial.println();
}
}
