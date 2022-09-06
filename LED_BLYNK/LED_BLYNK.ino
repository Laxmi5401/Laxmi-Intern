#define BLYNK_TEMPLATE_ID "TMPLcRvKe-DU"
#define BLYNK_DEVICE_NAME "led blynk"
#define BLYNK_AUTH_TOKEN "PFeZqGiGeelMH3RIwSNjLV2OS1xmsud1"
#define BLYNK_PRINT Serial
#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>
int pin =15;
char auth[] =BLYNK_AUTH_TOKEN;       // You should get Auth Token in the Blynk App.
char ssid[] = "Laksh";                    // Your Wi-Fi Credentials
char pass[] = "ainapurlaxmi";
BLYNK_WRITE(V0)
{
  int pinValue=param.asInt();
  digitalWrite(pin,pinValue);
  Serial.println("RECEIVE");
  Serial.print(pinValue);
}
void setup() 
{  
  pinMode(pin, OUTPUT); 
 // pinMode(pin, HIGH);
  Serial.begin(115200);
  delay(10);
  Serial.print("Connecting to ");
  Serial.println(ssid);
  WiFi.begin(ssid, pass);
  int wifi_ctr = 0;
  while (WiFi.status() != WL_CONNECTED) {
  delay(500);
  Serial.print(".");
  }
  Serial.println("WiFi connected");  
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
}
void loop(){
    Blynk.run();
}
 
