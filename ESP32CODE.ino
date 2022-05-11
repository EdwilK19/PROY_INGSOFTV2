#include <WebServer.h> // Biblioteca para la creación del servidor web y usar parametros http cliente
#include <WiFi.h> // Biblioteca que permite que la board se conecte a internet.
#include <esp32cam.h>// Biblioteca para poder utilizar la camara OV2640 del esp32


// Select camera model
#define CAMERA_MODEL_WROVER_KIT
//#define CAMERA_MODEL_ESP_EYE
//#define CAMERA_MODEL_M5STACK_PSRAM
//#define CAMERA_MODEL_M5STACK_WIDE
//#define CAMERA_MODEL_AI_THINKER
