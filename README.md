# Pico FIDO — ESP32-S3

FIDO2/CTAP2 аутентификатор на базе ESP32-S3. Работает как USB Passkey для аутентификации в браузерах и приложениях.

## Возможности

- CTAP 2.1 / CTAP 1
- WebAuthn / U2F
- Обнаруживаемые учётные данные (resident keys)
- Верификация пользователя через PIN (мин. 1 символ)
- Принудительное подтверждение пользователя физической кнопкой
- HMAC-Secret, CredProtect, minPinLength расширения
- Аутентификация ECDSA и EDDSA (SECP256R1, SECP384R1, SECP521R1, SECP256K1, Ed25519)
- OATH / TOTP / HOTP (совместимость с Yubico Authenticator и YKMAN)
- Challenge-response генерация
- Эмулируемый интерфейс клавиатуры (OTP вводится напрямую)
- Secure Boot и Secure Lock
- Одноразовое программирование (OTP) для мастер-ключа
- Интерфейс восстановления
- Кастомный VID/PID и USB-имя устройства

## Прошивка

1. Установите [ESP-IDF v5.5](https://docs.espressif.com/projects/esp-idf/en/v5.5/esp32s3/get-started/index.html)
2. Подключите ESP32-S3 в режим загрузки (BOOT + USB)
3. Прошейте:

```sh
idf.py set-target esp32s3
idf.py build
idf.py -p COM3 flash
```

4. Перезагрузите устройство

## Кастомизация

VID/PID задаётся в `sdkconfig`:
- `CONFIG_USB_VID` — Vendor ID (по умолчанию `0x1050`)
- `CONFIG_USB_PID` — Product ID (по умолчанию `0x0407`)

USB-имя устройства и производитель задаются в `pico-keys-sdk/src/usb/usb_descriptors.c`.

## Лицензия

GNU Affero General Public License v3 (AGPLv3).
