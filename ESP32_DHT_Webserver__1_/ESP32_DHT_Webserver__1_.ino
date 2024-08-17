#include <WiFi.h>
#include <WiFiClient.h>
#include <WebServer.h>
#include <ESPmDNS.h>
#include <HTTPClient.h>
#include <DHT.h>
#include "home.h"
#include "webpageSetpoint.h"
#include "animals.h"
#include "setpoints.h"
#define BLYNK_PRINT Serial
#define BLYNK_TEMPLATE_ID "TMPL2AVG4rNDf"
#define BLYNK_TEMPLATE_NAME "AGRINTEL"
#define BLYNK_AUTH_TOKEN "1tz3N_FRIX3gSYl8zi76xEqRPdOo9heS"
#include <BlynkSimpleEsp32.h>
#include <Blynk.h>

#define DHTPIN 26
#define MOIST_PIN 34
#define PH_PIN 19
#define FT_PIN 5
#define FAN_PIN 2
#define MST_PIN 32
#define PH_PIN 33
#define HM_PIN 4
#define FT_PIN 12

#define BLYNK_TEMPLATE_ID "TMPL2AVG4rNDf"
#define BLYNK_TEMPLATE_NAME "AGRINTEL"
#define BLYNK_AUTH_TOKEN "1tz3N_FRIX3gSYl8zi76xEqRPdOo9heS"

BlynkTimer timer;

const char *ssid = "Holberton School";
const char *password = "tsR437!Yul";
char auth[] = BLYNK_AUTH_TOKEN;


float temperatureSetpoint = 15.00;
float humiditySetpoint = 50.0;
float moistureSetpoint = 3000.0;
float phSetpoint = 7.0;
float fertilitySetpoint = 200.0;
    

String serverURL = "http:// 192.168.1.2/sensor_data/sensor_data.php";

WebServer server(80);
DHT dht(DHTPIN, DHT11);


  float readTemp(){
    float temperature = dht.readTemperature();
      if (isnan(temperature)) {    
        Serial.println("Failed to read Temperature!");
        return 35;
      }
      else {
        Serial.println("Actual Temparature " + String(temperature));
        return temperature;
      }

      
  }

  float readHum(){    
      float humidity = dht.readHumidity();
      if (isnan(humidity)) {
        Serial.println("Failed to read Humidity!");
        return 60;
      }
      else {
        Serial.println("Actual Humidity " + String(humidity));
        return humidity;
      }
      
  }

  float readMoist(){
    float moisture = analogRead(MOIST_PIN);
      if (isnan(moisture)) {    
        Serial.println("Failed to read Moisture!");
        return 115;
      }
      else {
        Serial.println("Actual Moisture level " + String(moisture));
        return moisture;
      }
      
  }

    float readph(){
    float ph = analogRead(PH_PIN);
      if (isnan(ph)) {    
        Serial.println("Failed to read PH!");
        return 5;
      }
      else {
        Serial.println("Actual Soil Ph " + String(ph));
        return ph;
      }
      
  }

  
    float readft(){
    float fertility = analogRead(FT_PIN);
      if (isnan(fertility)) {    
        Serial.println("Failed to read Fertility!");
        return 15;
      }
      else {
        Serial.println("Actual Soil fertility " + String(fertility));
        return fertility;
      }
      
    }

  void calls(){
      float temperature = readTemp();
      float humidity = readHum();
      float moisture = readMoist();
      float ph = readph();
      float fertility = readft();
      Blynk.virtualWrite(V5, fertility);
      Blynk.virtualWrite(V4, ph);
      Blynk.virtualWrite(V3, moisture);
      Blynk.virtualWrite(V1, humidity);
      Blynk.virtualWrite(V2, temperature);
  }

  void handleRoot() {
  float temperature = readTemp();
  float humidity = readHum();
  float moisture = readMoist();
  float ph = readph();
  float fertility = readft();

  String response = webpage;
  response.replace("{temperature}", String(temperature));
  response.replace("{humidity}", String(humidity));
  response.replace("{moisture}", String(moisture));
  response.replace("{ph}", String(ph));
  response.replace("{ft}", String(fertility));
  server.send(200, "text/html", response);
}

void handleSetpointsPage() {
  String setpointPage = setpoints;
  setpointPage.replace("{temperatureSetpoint}", String(temperatureSetpoint));
  setpointPage.replace("{humiditySetpoint}", String(humiditySetpoint));
  setpointPage.replace("{moistureSetpoint}", String(moistureSetpoint));
  setpointPage.replace("{phSetpoint}", String(phSetpoint));
  setpointPage.replace("{fertilitySetpoint}", String(fertilitySetpoint));
  server.send(200, "text/html", setpointPage);
}
    

  void handleHome(){
  String homeweb = home;
    server.send(200, "text/html", homeweb);
  }

  void handleAnimals(){
    String animalweb = animals;
    server.send(200,"text/html", animalweb);
  }

  void handleData(){
    float temperature = readTemp();
    float humidity = readHum();
    float moisture = readMoist();
     float ph = readph();
      float fertility = readft();


    String jsonData = "{\"temperature\":" + String(temperature) + ",\"humidity\":" + String(humidity) + ",\"moisture\":" + String(moisture) + ",\"ph\":" + String(ph) + ",\"fertility\":" + String(fertility) +"}";
    server.send(200, "application/json", jsonData);
  }

void handleSetpoints() {
  if (server.hasArg("temperature")) {
    temperatureSetpoint = server.arg("temperature").toFloat();
  }
  if (server.hasArg("humidity")) {
    humiditySetpoint = server.arg("humidity").toFloat();
  }
  if (server.hasArg("moisture")) {
    moistureSetpoint = server.arg("moisture").toFloat();
  }
  if (server.hasArg("ph")) {
    phSetpoint = server.arg("ph").toFloat();
  }
  if (server.hasArg("fertility")) {
    fertilitySetpoint = server.arg("fertility").toFloat();
  }
  handleRoot();
}
        

 
void setup(void) {
  Serial.begin(115200);
  dht.begin();
  connectWifi();
  Blynk.begin(auth, ssid, password);
  timer.setInterval(100L, calls);

  pinMode(MOIST_PIN, INPUT);
  pinMode(PH_PIN, INPUT);
  pinMode(FT_PIN, INPUT);
  pinMode(FAN_PIN, OUTPUT);
  pinMode(MST_PIN, OUTPUT);
  pinMode(PH_PIN, OUTPUT);
  pinMode(HM_PIN, OUTPUT);
  pinMode(FT_PIN, OUTPUT);

  digitalWrite(FAN_PIN, LOW);
  digitalWrite(MST_PIN, LOW);
  digitalWrite(PH_PIN, LOW);
  digitalWrite(HM_PIN, LOW);
  digitalWrite(FT_PIN, LOW);
  

  if (MDNS.begin("esp32")) {
    Serial.println("MDNS responder started");
  }
  server.on("/plants", HTTP_GET, handleRoot);
  server.on("/data", HTTP_GET, handleData);
  server.on("/", HTTP_GET, handleHome);
  server.on("/animals", HTTP_GET, handleAnimals);
  server.on("/setpoints", HTTP_GET, handleSetpointsPage);
  server.on("/setpoints", HTTP_POST, handleSetpoints);

  server.begin();
  Serial.println("HTTP server started");
}
    

void loop(void) {
  server.handleClient();

  float temperature = readTemp();
  float humidity = readHum();
  float moisture = readMoist();
  float ph = readph();
  float fertility = readft();
  Blynk.run();
  timer.run();

  String postData = "Temperature=" + String(temperature) + "&Humidity=" + String(humidity) + "&Moisture=" + String(moisture) + "&PH=" + String(ph) + "&Fertility=" + String(fertility);
  HTTPClient http;
  http.begin(serverURL);
  http.addHeader("Content-Type", "application/x-www-form-urlencoded");

  int httpCode = http.POST(postData);
  String payload = http.getString();

  if (httpCode > 0){
    Serial.println("....................................................................");
    Serial.print("URL: "); Serial.println(serverURL);
    Serial.print("Data: "); Serial.println(postData);
    Serial.print("HTTP Code: "); Serial.println(httpCode);
    Serial.print("Payload: "); Serial.println(payload);
    Serial.println("....................................................................");
  } else{
    Serial.print("Error on HTTP request. HTTP Code: ");
    Serial.println(httpCode);

    Serial.print("Error: ");
    Serial.println(payload);
  }
  http.end();
  delay(5000);
  Serial.println("......................................................................");
  
  Serial.println("Temparature Setpoint: " + String(temperatureSetpoint));
  Serial.println("Humidity Setpoint: " + String(humiditySetpoint));
  Serial.println("Moisture Setpoint: " + String(moistureSetpoint));
  Serial.println( "Ph Setpoint: " + String(phSetpoint));
  Serial.println("Soil fertility Setpoint: " + String(fertilitySetpoint));

//checking the conditions. comparing the actual and setpoints data
  if (moisture < moistureSetpoint){
      digitalWrite(MST_PIN, LOW);	
  }else{
    digitalWrite(MST_PIN, HIGH);
  }

  if(temperature > temperatureSetpoint){
      digitalWrite(FAN_PIN, LOW);	
  }else{
    digitalWrite(FAN_PIN, HIGH);
  }

    if (humidity > humiditySetpoint){
      digitalWrite(HM_PIN, HIGH);	
  }else{
    digitalWrite(HM_PIN, LOW);
  }

    if (ph > phSetpoint){
      digitalWrite(PH_PIN, HIGH);	
  }else{
    digitalWrite(PH_PIN, LOW);
  }

    if (fertility > fertilitySetpoint){
      digitalWrite(FT_PIN, HIGH);	
  }else{
    digitalWrite(FT_PIN, LOW);
  }
  

}


void connectWifi(){

    WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);
  Serial.println("");

  // Wait for connection
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("");
  Serial.print("Connected to ");
  Serial.println(ssid);
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());
}


