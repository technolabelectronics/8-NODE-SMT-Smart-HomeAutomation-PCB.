
#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>
BlynkTimer timer;


#define DEBUG_SW 0


#define Switch1 34
#define Switch2 35
#define Switch3 32
#define Switch4 33
#define Switch5 25
#define Switch6 26
#define Switch7 27
#define Switch8 14

#define Relay1 23
#define Relay2 22
#define Relay3 21
#define Relay4 19
#define Relay5 18
#define Relay6 5
#define Relay7 16
#define Relay8 17




#define LED1 12
#define LED2 13




int MODE = 0;


// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "xxxxxxxxxxxxxxx";
char pass[] = "xxxxxxxxxxxxxxx";

// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx";


int Flag1 = 0;
int Flag2 = 0;
int Flag3 = 0;
int Flag4 = 0;
int Flag5 = 0;
int Flag6 = 0;
int Flag7 = 0;
int Flag8 = 0;


BLYNK_WRITE(V1)
{
  int pinValue = param.asInt(); // assigning incoming value from pin V1 to a variable
  digitalWrite(Relay1, pinValue);
  // process received value
}

BLYNK_WRITE(V2)
{
  int pinValue = param.asInt(); // assigning incoming value from pin V2 to a variable
  digitalWrite(Relay2, pinValue);
  // process received value
}

BLYNK_WRITE(V3)
{
  int pinValue = param.asInt(); // assigning incoming value from pin V3 to a variable
  
  digitalWrite(Relay3, pinValue);
  // process received value
}

BLYNK_WRITE(V4)
{
  int pinValue = param.asInt(); // assigning incoming value from pin V4 to a variable
  digitalWrite(Relay4, pinValue);
  // process received value
}

BLYNK_WRITE(V5)
{
  int pinValue = param.asInt(); // assigning incoming value from pin V1 to a variable
  digitalWrite(Relay5, pinValue);
  // process received value
}

BLYNK_WRITE(V6)
{
  int pinValue = param.asInt(); // assigning incoming value from pin V2 to a variable
  digitalWrite(Relay6, pinValue);
  // process received value
}

BLYNK_WRITE(V7)
{
  int pinValue = param.asInt(); // assigning incoming value from pin V3 to a variable
  
  digitalWrite(Relay7, pinValue);
  // process received value
}

BLYNK_WRITE(V8)
{
  int pinValue = param.asInt(); // assigning incoming value from pin V4 to a variable
  digitalWrite(Relay8, pinValue);
  // process received value
}

void with_internet()
{
  if (digitalRead(Switch1) == LOW)
  {
    if (Flag1 == 0 )
    {
      digitalWrite(Relay1, LOW);
      if (DEBUG_SW) Serial.println("Relay1- ON");
      Blynk.virtualWrite(V1, 0);
      Flag1 = 1;
    }
    if (DEBUG_SW) Serial.println(" -ON");

  }
  if (digitalRead(Switch1) == HIGH )
  {
    if (Flag1 == 1)
    {
      digitalWrite(Relay1, HIGH);
      if (DEBUG_SW) Serial.println("Relay1 OFF");
      Blynk.virtualWrite(V1, 1);
      Flag1 = 0;
    }
    if (DEBUG_SW)Serial.println(" OFF");
  }


  if (digitalRead(Switch2) == LOW)
  {
    if (Flag2 == 0 )
    {
      digitalWrite(Relay2, LOW);
      if (DEBUG_SW)  Serial.println("Relay2- ON");
      Blynk.virtualWrite(V2, 0);
      Flag2 = 1;
    }
    if (DEBUG_SW) Serial.println("Switch2 -ON");

  }
  if (digitalRead(Switch2) == HIGH )
  {
    if (Flag2 == 1)
    {
      digitalWrite(Relay2, HIGH);
      if (DEBUG_SW) Serial.println("Relay2 OFF");
      Blynk.virtualWrite(V2, 1);
      Flag2 = 0;
    }
    if (DEBUG_SW)Serial.println("Switch2 OFF");
    //delay(200);
  }

  if (digitalRead(Switch3) == LOW)
  {
    if (Flag3 == 0 )
    {
     
      digitalWrite(Relay3, LOW);
      if (DEBUG_SW) Serial.println("Relay3- ON");
      Blynk.virtualWrite(V3, 0);
      Flag3 = 1;
    }
    if (DEBUG_SW) Serial.println("Switch3 -ON");

  }
  if (digitalRead(Switch3) == HIGH )
  {
    if (Flag3 == 1)
    {
      
      digitalWrite(Relay3, HIGH);
      if (DEBUG_SW) Serial.println("Relay3 OFF");
      Blynk.virtualWrite(V3, 1);
      Flag3 = 0;
    }
    if (DEBUG_SW)Serial.println("Switch3 OFF");
    //delay(200);
  }

  if (digitalRead(Switch4) == LOW)
  {
    if (Flag4 == 0 )
    {
      digitalWrite(Relay4, LOW);
      if (DEBUG_SW) Serial.println("Relay4- ON");
      Blynk.virtualWrite(V4, 0);
      Flag4 = 1;
    }
    if (DEBUG_SW) Serial.println("Switch4 -ON");

  }
  if (digitalRead(Switch4) == HIGH )
  {
    if (Flag4 == 1)
    {
      digitalWrite(Relay4, HIGH);
      if (DEBUG_SW) Serial.println("Relay4 OFF");
      Blynk.virtualWrite(V4, 1);
      Flag4 = 0;
    }
    if (DEBUG_SW)Serial.println("Switch4 OFF");
    //delay(200);
  }
   if (digitalRead(Switch5) == LOW)
  {
    if (Flag5 == 0 )
    {
      digitalWrite(Relay5, LOW);
      if (DEBUG_SW) Serial.println("Relay5- ON");
      Blynk.virtualWrite(V5, 0);
      Flag5 = 1;
    }
    if (DEBUG_SW) Serial.println(" -ON");

  }
  if (digitalRead(Switch5) == HIGH )
  {
    if (Flag5 == 1)
    {
      digitalWrite(Relay5, HIGH);
      if (DEBUG_SW) Serial.println("Relay5 OFF");
      Blynk.virtualWrite(V5, 1);
      Flag5 = 0;
    }
    if (DEBUG_SW)Serial.println(" OFF");
  }
   if (digitalRead(Switch6) == LOW)
  {
    if (Flag6 == 0 )
    {
      digitalWrite(Relay6, LOW);
      if (DEBUG_SW) Serial.println("Relay6- ON");
      Blynk.virtualWrite(V6, 0);
      Flag6 = 1;
    }
    if (DEBUG_SW) Serial.println(" -ON");

  }
  if (digitalRead(Switch6) == HIGH )
  {
    if (Flag6 == 1)
    {
      digitalWrite(Relay6, HIGH);
      if (DEBUG_SW) Serial.println("Relay6 OFF");
      Blynk.virtualWrite(V6, 1);
      Flag6 = 0;
    }
    if (DEBUG_SW)Serial.println(" OFF");
  }
   if (digitalRead(Switch7) == LOW)
  {
    if (Flag7 == 0 )
    {
      digitalWrite(Relay7, LOW);
      if (DEBUG_SW) Serial.println("Relay7- ON");
      Blynk.virtualWrite(V7, 0);
      Flag7 = 1;
    }
    if (DEBUG_SW) Serial.println(" -ON");

  }
  if (digitalRead(Switch7) == HIGH )
  {
    if (Flag7 == 1)
    {
      digitalWrite(Relay7, HIGH);
      if (DEBUG_SW) Serial.println("Relay7 OFF");
      Blynk.virtualWrite(V7, 1);
      Flag7 = 0;
    }
    if (DEBUG_SW)Serial.println(" OFF");
  }
   if (digitalRead(Switch8) == LOW)
  {
    if (Flag8 == 0 )
    {
      digitalWrite(Relay8, LOW);
      if (DEBUG_SW) Serial.println("Relay8- ON");
      Blynk.virtualWrite(V8, 0);
      Flag8 = 1;
    }
    if (DEBUG_SW) Serial.println(" -ON");

  }
  if (digitalRead(Switch8) == HIGH )
  {
    if (Flag8 == 1)
    {
      digitalWrite(Relay8, HIGH);
      if (DEBUG_SW) Serial.println("Relay1 OFF");
      Blynk.virtualWrite(V8, 1);
      Flag8 = 0;
    }
    if (DEBUG_SW)Serial.println(" OFF");
  }



}

void without_internet()
{

  digitalWrite(Relay1, digitalRead(Switch1));
  digitalWrite(Relay2, digitalRead(Switch2));
  digitalWrite(Relay3, digitalRead(Switch3));
  digitalWrite(Relay4, digitalRead(Switch4));
  digitalWrite(Relay5, digitalRead(Switch5));
  digitalWrite(Relay6, digitalRead(Switch6));
  digitalWrite(Relay7, digitalRead(Switch7));
  digitalWrite(Relay8, digitalRead(Switch8));

}


void checkBlynk() { // called every 3 seconds by SimpleTimer

  bool isconnected = Blynk.connected();
  if (isconnected == false) {
    MODE = 1;
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, LOW);
    
  }
  if (isconnected == true) {
    MODE = 0;
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, HIGH);
   
  }
}

void setup()
{
  // Debug console
  if (DEBUG_SW) Serial.begin(9600);
  pinMode(Switch1, INPUT);
  pinMode(Switch2, INPUT);
  pinMode(Switch3, INPUT);
  pinMode(Switch4, INPUT);
  pinMode(Switch5, INPUT);
  pinMode(Switch6, INPUT);
  pinMode(Switch7, INPUT);
  pinMode(Switch8, INPUT);
  
  pinMode(Relay1, OUTPUT);
  pinMode(Relay2, OUTPUT);
  pinMode(Relay3, OUTPUT);
  pinMode(Relay4, OUTPUT);
  pinMode(Relay5, OUTPUT);
  pinMode(Relay6, OUTPUT);
  pinMode(Relay7, OUTPUT);
  pinMode(Relay8, OUTPUT);


  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
 

  digitalWrite(LED1, HIGH);
  delay(200);
  digitalWrite(LED2, HIGH);
  delay(200);

  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  
  delay(500);

  digitalWrite(LED1, HIGH);
  delay(200);
  digitalWrite(LED2, HIGH);
  delay(200);
 

  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
 
  //pinMode(MODE, INPUT);
  WiFi.begin(ssid, pass);
  timer.setInterval(3000L, checkBlynk); // check if connected to Blynk server every 3 seconds
  Blynk.config(auth);//, ssid, pass);

}

void loop()
{
  if (WiFi.status() != WL_CONNECTED)
  {
    if (DEBUG_SW) Serial.println("Not Connected");
  }
  else
  {
    if (DEBUG_SW) Serial.println(" Connected");
    Blynk.run();
  }

  timer.run(); // Initiates SimpleTimer
  if (MODE == 0)
    with_internet();
  else
    without_internet();
}
