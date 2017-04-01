// даём разумное имя для пина №9 со светодиодом
// (англ. Light Emitting Diode или просто «LED»)
// Так нам не нужно постоянно вспоминать куда он подключён
#define LED_PIN 9
 
void setup()
{
  // настраиваем пин со светодиодом в режим выхода,
  // как и раньше
  pinMode(LED_PIN, OUTPUT);
}
 
void loop()
{
  // выдаём неполное напряжение на светодиод
  // (он же ШИМ-сигнал, он же PWM-сигнал).
  // Микроконтроллер переводит число от 0 до 255 к напряжению
  // от 0 до 5 В. Например, 85 — это 1/3 от 255,
  // т.е. 1/3 от 5 В, т.е. 1,66 В.
  analogWrite(LED_PIN, 85);
  // держим такую яркость 250 миллисекунд
  delay(250);
 
  // выдаём 170, т.е. 2/3 от 255, или иными словами — 3,33 В.
  // Больше напряжение — выше яркость!
  analogWrite(LED_PIN, 170);
  delay(250);
 
  // все 5 В — полный накал!
  analogWrite(LED_PIN, 255);
  // ждём ещё немного перед тем, как начать всё заново
  delay(250);
}
