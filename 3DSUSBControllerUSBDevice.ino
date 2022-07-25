
void setup() {
  Serial.begin(115200);
  Joystick.useManualSend(true);
  Serial.println("Begin Complete Joystick Test");
}

void loop() {
  while (Serial.available() > 0) {
    for (int i = 0; i < 8; i++) {
      if (Serial.parseInt() == 1) {
        Serial.print("1");
        Joystick.button(i + 1, 1);
      }
      else {
        Serial.print("0");
        Joystick.button(i + 1, 0);
      }
    }
    Serial.println();
    Joystick.hat(Serial.parseInt());
    Joystick.X(map(Serial.parseInt(), -157, 157, 0, 1023));
    Joystick.Y(map(Serial.parseInt(), -157, 157, 0, 1023));
    Joystick.Z(map(Serial.parseInt(), 5, 314, 0, 1024));
    Joystick.Zrotate(map(234 - Serial.parseInt(), 5, 234, 0, 1023));
    if (Serial.read() == '\n') Joystick.send_now();
  }
}
