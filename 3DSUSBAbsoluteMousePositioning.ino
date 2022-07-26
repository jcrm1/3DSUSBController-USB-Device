/*
 * Note: This sketch only works with Teensy LC and 3.x boards.
 * Remember to edit the screenX and screenY and isMac variables to fit your display and computer!
 */
int screenX = 1920;
int screenY = 1080;
bool isMac = false;
void setup() {
  Serial.begin(115200);
  if (isMac) {
    Mouse.screenSize(screenX, screenY, true);
  } else {
    Mouse.screenSize(screenX, screenY);
  }
}

void loop() {
  while (Serial.available() > 0) {
    for (int i = 0; i < 11; i++) {
      Serial.parseInt();
    }
    int x = Serial.parseInt();
    int y = 234 - Serial.parseInt();
    if (x > 0 && y > 0) {
      Mouse.moveTo(map(x, 5, 314, 0, screenX), map(y, 5, 234, 0, screenY));
      Mouse.set_buttons(1, 0, 0);
    } else Mouse.set_buttons(0, 0, 0);
    Serial.read();
  }
}
