// ===== Eszköz azonosítás =====
#define MANUFACTURER            "WEMOS"
#define DEVICE                  "D1_MINI_DIYZTZ"

// ===== Kommunikáció =====
#define MQTT_SUPPORT            1
#define DOMOTICZ_SUPPORT        1      // Domoticz idx/topic kezelés (domoticz/in, domoticz/out)
#define WEB_SUPPORT             1

// Opcionális, hogy az első bootnál már csatlakozzon:
#define WIFI1_SSID           "Mumuk Mumu"
#define WIFI1_PASS           "birbike77"
#define ADMIN_PASS           "Birbike77?"
#define MQTT_SERVER          "192.168.1.201"

// ===== I2C + BME280 =====
#define I2C_SUPPORT             1
#define I2C_SDA_PIN             4      // D2
#define I2C_SCL_PIN             5      // D1
#define BMX280_SUPPORT          1
#define BMX280_ADDRESS          0x00      // 0x76 ha nem találja: 0x77, vagy 0 = automatikus

// ===== DS18B20 (1-Wire, max 3 db egy buszon) =====
#define DALLAS_SUPPORT          1
#define DALLAS_PIN              2      // D4 (GPIO2)
#define DALLAS_PARASITE         0      // normál táplálás, külső 4,7k felhúzó

// ===== Relé (cseppvíz-szivattyú) =====
#define RELAY1_PIN              12     // D6
#define RELAY1_TYPE             RELAY_TYPE_NORMAL   // fordított logikához: RELAY_TYPE_INVERSE


// ===== Bináris bemenet (optós visszacsatolás) =====
#define DIGITAL_SUPPORT         1
#define DIGITAL1_PIN            14                  // D5
#define DIGITAL1_PIN_MODE       INPUT_PULLUP
#define DIGITAL1_DEFAULT_STATE  HIGH                // optó nyitva = HIGH, aktív = LOW

// ===== PWM / ventilátor =====

#define LIGHT_PROVIDER          LIGHT_PROVIDER_DIMMER
#define LIGHT_CH1_PIN           13     // D7
#define LIGHT_CH1_INVERSE       0
