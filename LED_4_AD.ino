int redPin = 3;      int greenPin = 4;       int bluePin = 5;
void setup()
     {
        pinMode(redPin, OUTPUT);          pinMode(greenPin, OUTPUT);           pinMode(bluePin, OUTPUT); 
     }
 
void loop()
     {   setColor(255, 0, 0); delay(1000); // red
         setColor(0, 255, 0); delay(1000);  // green
         setColor(0,0,255); delay(1000);   // blue
         setColor(0,100,100); delay(1000);     // aqua
         setColor(130,50,0); delay(1000);   // yellow
         setColor(0,100,100); delay(1000);    // yellow
         setColor(80,0,80); delay(1000);    // yellow
       }

void setColor(int red, int green, int blue)
     {
       analogWrite(redPin, red);
       analogWrite(greenPin, green);
       analogWrite(bluePin, blue); 
     }
