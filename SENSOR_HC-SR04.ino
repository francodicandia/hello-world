//Franco Di Candia 

#define trigger 10
#define echo 9

void setup() {
  Serial.begin(9600);
  pinMode(trigger, OUTPUT);
  pinMode(echo, INPUT);
  }

  void loop (){
    long duration, distance, tiempo;
    digitalWrite(trigger, LOW);
    delayMicroseconds(3);

    digitalWrite(trigger, HIGH);
    delayMicroseconds(11);
    digitalWrite(trigger, LOW);

    duration=pulseIn(echo, HIGH);
    distance=(duration/2)/29.2;
    //tiempo=29.2*distance;
    Serial.print(distance); //distancia en cm
       Serial.println(" ");
    //Serial.println(" , ");
    //Serial.print(tiempo);    
    delay(1000);
    }
    
  
