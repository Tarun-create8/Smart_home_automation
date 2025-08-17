#define BLYNK_TEMPLATE_ID "TMPL3YKHwd4bt"
#define BLYNK_TEMPLATE_NAME "CONTROL_LED"
#define BLYNK_PRINT Serial

#include <WiFi.h>
#include <BlynkSimpleEsp32.h>

// Replace with your Auth Token (from Blynk email)
char auth[] = "YourAuthToken";

// Replace with your WiFi credentials
char ssid[] = "YourWiFiSSID";
char pass[] = "YourWiFiPassword";

const int dcMotor = 13;       // Motor control pin
const int buttonPin = 2;      // LED control pin (GPIO2)
int motorSpeed = 0;
int mappedSpeed = 0;

void setup() {
  Serial.begin(115200);
  Blynk.begin(auth, ssid, pass);

  pinMode(dcMotor, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);

  Blynk.virtualWrite(23, motorSpeed); // Initialize slider
}

void loop() {
  Blynk.run();
  int buttonState = digitalRead(buttonPin);

  // Toggle motor speed when button pressed
  if (buttonState == LOW) {
    motorSpeed = (motorSpeed == 0) ? 255 : 0;
    mappedSpeed = map(motorSpeed, 0, 255, 0, 1023);
    analogWrite(dcMotor, mappedSpeed);
    delay(250); // debounce
  }
}

// Handle slider input from Blynk app
BLYNK_WRITE(23) {
  motorSpeed = param.asInt();
  mappedSpeed = map(motorSpeed, 0, 1023, 0, 255);
  analogWrite(dcMotor, mappedSpeed);
}
