// include the library code:
#include <LiquidCrystal.h>
#include <SPI.h>
#include <WiFiNINA.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

char ssid[] = "Ahmads";        // your network SSID (name)
char pass[] = "ashash111";     // your network password (use for WPA, or use as key for WEP)
int keyIndex = 0;              // your network key Index number (needed only for WEP)

int status = WL_IDLE_STATUS;
char server[] = "api.thingspeak.com"; 
char c; 
String data;

WiFiClient client;

void setup() {
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

    // wait 10 seconds for connection:
    delay(10000);
  }
  Serial.println("Connected to wifi");
  printWifiStatus();

  Serial.println("\nStarting connection to server...");
  // if you get a connection, report back via serial:
  if (client.connect(server, 80)) {
    Serial.println("connected to server for client1");
    // Make a HTTP request:
    client.println("GET /apps/thinghttp/send_request?api_key=1Y9UGA1W7QCEWWU8");
    client.println("Host:api.thingspeak.com");
    client.println("Connection: close");
    client.println();
  }

}

void loop() {
  while (client.available()) {
    c = client.read();
    if(c!=' ' && c!='<' && c!='h' && c!='3' && c!='>' && c!='/'){
      data += c;
    }
  }
  Serial.print(data);
  lcd.setCursor(0, 0);
  // print the title:
  lcd.print("     TASKS    ");
  delay(5000);
  lcd.setCursor(0, 1);
  // print the data:
  lcd.print(data);

  if (!client.connected()) {
    Serial.println();
    Serial.println("disconnecting from server.");
    client.stop();
    while(true);
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
