// include the library code:
#include <LiquidCrystal.h>
#include <SPI.h>
#include <WiFiNINA.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

char ssid[] = "Raashi's iPhone";        // your network SSID (name)
char pass[] = "samrudhi1245";     // your network password (use for WPA, or use as key for WEP)
int keyIndex = 0;              // your network key Index number (needed only for WEP)

int status = WL_IDLE_STATUS;
char server[] = "api.thingspeak.com";
char c;
char d;
char w;
char q;
char h;
String data1;
String data2;
String data3;
String data4;
String data5;


WiFiClient client1;
WiFiClient client2;
WiFiClient client3;
WiFiClient client4;
WiFiClient client5;


void setup(){
Serial.begin(9600);   //Initialize serial and wait for port to open
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // check for the WiFi module:
  if (WiFi.status() == WL_NO_MODULE) {
    Serial.println("Communication with WiFi module failed!");
    // don't continue
    while (true);
  }

  // attempt to connect to Wifi network:
  while (status != WL_CONNECTED) {
    Serial.print("Attempting to connect to SSID: ");
    Serial.println(ssid);
    status = WiFi.begin(ssid, pass); // Connect to WPA/WPA2 network.

    // wait 5 seconds for connection:
    delay(5000);
  }
  Serial.println("Connected to wifi");
  printWifiStatus();

  Serial.println("\nStarting connection to server...");
  // if you get a connection, report back via serial:
  if (client1.connect(server, 80)) {
    Serial.println("connected to server for client1");
    // Make a HTTP request:
    client1.println("GET /apps/thinghttp/send_request?api_key=1Y9UGA1W7QCEWWU8");
    client1.println("Host:api.thingspeak.com");
    client1.println("Connection: close");
    client1.println();
  }
  if (client2.connect(server, 80)) {
    Serial.println("connected to server for client2");
    // Make a HTTP request:
    client2.println("GET /apps/thinghttp/send_request?api_key=B3E32VL06QEVXYLO");
    client2.println("Host:api.thingspeak.com");
    client2.println("Connection: close");
    client2.println();
  }
  if (client3.connect(server, 80)) {
    Serial.println("connected to server for client3");
    // Make a HTTP request:
    client3.println("GET /apps/thinghttp/send_request?api_key=S0OQV5QH392LWGPU");
    client3.println("Host:api.thingspeak.com");
    client3.println("Connection: close");
    client3.println();
  }
  if (client4.connect(server, 80)) {
    Serial.println("connected to server for client4");
    // Make a HTTP request:
    client4.println("GET /apps/thinghttp/send_request?api_key=TNFPXU29DZDELW4L");
    client4.println("Host:api.thingspeak.com");
    client4.println("Connection: close");
    client4.println();
  }
  if (client5.connect(server, 80)) {
  Serial.println("connected to server for client5");
  // Make a HTTP request:
  client5.println("GET /apps/thinghttp/send_request?api_key=PL0CN9G26M2IWYBB");
  client5.println("Host:api.thingspeak.com");
  client5.println("Connection: close");
  client5.println();
  }
}


void loop(){
  while (client1.available()) {
      c = client1.read();
      if(c!=' ' && c!='<' && c!='h' && c!='3' && c!='>' && c!='/'){
       data1 += c;
      }
  }
  while (client2.available()) {
    d = client2.read();
    data2 += d;
  }
 while (client3.available()) {
  w = client3.read();
  data3 += w;
}
while (client4.available()) {
  q = client4.read();
  data4 += q;
}
while (client5.available()) {
  h = client5.read();
  data5 += h;
}
  Serial.print(data1);
  Serial.print(data2);
  Serial.print(data3);
  Serial.print(data4);
  Serial.print(data5);
  lcd.setCursor(0, 0);
  // print the title:
  lcd.print("     WELCOME    ");
  lcd.setCursor(0, 1);
  lcd.print(" GO PRODUCTIVE! ");
  delay(15000);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("     TASKS    ");
  lcd.setCursor(0, 1);
  // print the data:
  lcd.print(data1);
  delay(5000);
  lcd.clear();
  lcd.setCursor(0, 0);
  // print the title:
  lcd.print("     UP-NEXT    ");
  lcd.setCursor(0, 1);
  // print the data:
  lcd.print(data2);
  delay(5000);
  lcd.clear();
  lcd.setCursor(0, 0);
  // print the title:
  lcd.print("    WEATHER    ");
  lcd.setCursor(0, 1);
  // print the data:
  lcd.print(data3);
  delay(5000);
  lcd.clear();
  lcd.setCursor(0, 0);
  // print the title:
  lcd.print("  DAILY QUOTE  ");
  lcd.setCursor(0, 1);
  // print the data:
  lcd.print(data4);
  delay(5000);
  lcd.clear();
  lcd.setCursor(0, 0);
  // print the title:
  lcd.print("   HEALTHCARE   ");
  lcd.setCursor(0, 1);
  // print the data:
  lcd.print(data5);

  
  if (!client1.connected() && !client2.connected()) {
    Serial.println();
    Serial.println("disconnecting from server and both clients.");
    client1.stop();
    client2.stop();
    while(true){
    Serial.print(data1);
    Serial.print(data2);
    delay(3000);
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("     TASKS    ");
    lcd.setCursor(0, 1);
    // print the data:
    lcd.print(data1);
    delay(5000);
    lcd.clear();
    lcd.setCursor(0, 0);
    // print the title:
    lcd.print("     UP-NEXT    ");
    lcd.setCursor(0, 1);
    // print the data:
    lcd.print(data2);
    delay(5000);
    lcd.clear();
    lcd.setCursor(0, 0);
    // print the title:
    lcd.print("    WEATHER    ");
    lcd.setCursor(0, 1);
    // print the data:
    lcd.print(data3);
    delay(5000);
    lcd.clear();
    lcd.setCursor(0, 0);
    // print the title:
    lcd.print("DAILY QUOTE");
    lcd.setCursor(0, 1);
    // print the data:
    lcd.print(data4);
    delay(5000);
    lcd.clear();
    lcd.setCursor(0, 0);
    // print the title:
    lcd.print("   HEALTHCARE   ");
    lcd.setCursor(0, 1);
    // print the data:
    lcd.print(data5);
      
    }
  }
}



void printWifiStatus() {
  // print the SSID of the network you're attached to:
  Serial.print("SSID: ");
  Serial.println(WiFi.SSID());

  // print your board's IP address:
  IPAddress ip = WiFi.localIP();
  Serial.print("IP Address: ");
  Serial.println(ip);

  // print the received signal strength:
  long rssi = WiFi.RSSI();
  Serial.print("signal strength (RSSI):");
  Serial.print(rssi);
  Serial.println(" dBm");
} 
 
