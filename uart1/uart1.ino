#define L1 15
#define L2 18
#define L3 19
#define L4 21
void setup()
{
  pinMode(L1,OUTPUT);
  pinMode(L2,OUTPUT);
  pinMode(L3,OUTPUT);
  pinMode(L4,OUTPUT);
      Serial.begin(9600);
      Serial2.begin(115200);
}

void loop()
{
  if(Serial2.available())
  {
    int n=Serial2.read();
    switch(n)
    {
      case '0':digitalWrite(L1,LOW);
               digitalWrite(L2,LOW);
               digitalWrite(L3,LOW);
               digitalWrite(L4,LOW);
               Serial.println("zero");
               Serial.println("success");
               break;
      case '1':digitalWrite(L1,HIGH);
               digitalWrite(L2,LOW);
               digitalWrite(L3,LOW);
               digitalWrite(L4,LOW);
               Serial.println("one");
               Serial.println("success");
               break;
      case '2':digitalWrite(L1,LOW);
               digitalWrite(L2,HIGH);
               digitalWrite(L3,LOW);
               digitalWrite(L4,LOW);
               Serial.println("two");
               Serial.println("success");
               break;
      case '3':digitalWrite(L1,HIGH);
               digitalWrite(L2,HIGH);
               digitalWrite(L3,LOW);
               digitalWrite(L4,LOW);
               Serial.println("three");
               Serial.println("success");
               break;
      case '4':digitalWrite(L1,LOW);
               digitalWrite(L2,LOW);
               digitalWrite(L3,HIGH);
               digitalWrite(L4,LOW);
               Serial.println("four");
               Serial.println("success");
               break;
      case '5':digitalWrite(L1,HIGH);
               digitalWrite(L2,LOW);
               digitalWrite(L3,HIGH);
               digitalWrite(L4,LOW);
               Serial.println("five");
               Serial.println("success");
               break;
      case '6':digitalWrite(L1,LOW);
               digitalWrite(L2,HIGH);
               digitalWrite(L3,HIGH);
               digitalWrite(L4,LOW);
               Serial.println("six");
               Serial.println("success");
               break;
      case '7':digitalWrite(L1,HIGH);
               digitalWrite(L2,HIGH);
               digitalWrite(L3,HIGH);
               digitalWrite(L4,LOW);
               Serial.println("seven");
               Serial.println("success");
               break;
      case '8':digitalWrite(L1,LOW);
               digitalWrite(L2,LOW);
               digitalWrite(L3,LOW);
               digitalWrite(L4,HIGH);
               Serial.println("eight");
               Serial.println("success");
               break;
      case '9':digitalWrite(L1,HIGH);
               digitalWrite(L2,LOW);
               digitalWrite(L3,LOW);
               digitalWrite(L4,HIGH);
               Serial.println("nine");
               Serial.println("success");
               break;
      case 'A':digitalWrite(L1,LOW);
               digitalWrite(L2,HIGH);
               digitalWrite(L3,LOW);
               digitalWrite(L4,HIGH);
               Serial.println("ten");
               Serial.println("success");
               break;
      case 'B':digitalWrite(L1,HIGH);
               digitalWrite(L2,HIGH);
               digitalWrite(L3,LOW);
               digitalWrite(L4,HIGH);
               Serial.println("eleven");
               Serial.println("success");
               break;
      case 'C':digitalWrite(L1,LOW);
               digitalWrite(L2,LOW);
               digitalWrite(L3,HIGH);
               digitalWrite(L4,HIGH);
               Serial.println("tweleve");
               Serial2.println("success");
               break;
      case 'D':digitalWrite(L1,HIGH);
               digitalWrite(L2,LOW);
               digitalWrite(L3,HIGH);
               digitalWrite(L4,HIGH);
               Serial.println("thirteen");
               Serial.println("success");
               break;
      case 'E':digitalWrite(L1,LOW);
               digitalWrite(L2,HIGH);
               digitalWrite(L3,HIGH);
               digitalWrite(L4,HIGH);
               Serial.println("fourteen");
               Serial.println("success");
               break;
      case 'F':digitalWrite(L1,HIGH);
               digitalWrite(L2,HIGH);
               digitalWrite(L3,HIGH);
               digitalWrite(L4,HIGH);
               Serial.println("fifteen");
               Serial.println("success");
               break;
              
       default:Serial.println("invalid cmd read");
               Serial.println("invalid, 0-9,A-F");
    }
  }
}
              
               

               

               

               

               

                
               

               

               

               

               

           
               

               

               

               

               
                    
                    
    
