#include <WiFi.h>

const char* ssid = "prueba"; // NOMBRE DE LA RED WIFI
const char* password = "prueba"; // CONTRASEÑA DE LA RED WIFI

void setup() {
  Serial.begin(115200);

  WiFi.begin(ssid, password);

  while(WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Conectando a WIFI...");

  }

  Serial.print("Conexion WIFI establecida");

  Serial.println("Direccion IP asignada: ");
  Serial.println(WiFi.localIP());
}


void loop() {

}