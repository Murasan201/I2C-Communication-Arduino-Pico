
#include <Wire.h>

const int picoAddress = 0x08; // Raspberry Pi PicoのI2Cアドレス

void setup() {
  Wire.begin(); // マスターとしてI2Cを初期化
  Serial.begin(9600);
}

void loop() {
  byte dataToSend[8] = {1, 2, 3, 4, 5, 6, 7, 8}; // 送信するデータ配列

  // データを送信
  Wire.beginTransmission(picoAddress); // 通信開始
  Wire.write(dataToSend, sizeof(dataToSend)); // データを送信
  byte error = Wire.endTransmission(); // 通信終了

  if (error == 0) {
    Serial.println("Data sent successfully.");
  } else {
    Serial.print("Error occurred: ");
    Serial.println(error);
  }

  // スレーブデバイスからのデータを受信
  Wire.requestFrom(picoAddress, sizeof(dataToSend)); // 受信要求
  Serial.print("Received data: ");
  while (Wire.available()) {
    char received = Wire.read();
    Serial.print((int)received);
    Serial.print(" ");
  }
  Serial.println();

  delay(1000); // 次の送信まで待機
}
