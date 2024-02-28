#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_I2C_ADDR 0x3D // or 0x3C
#define SCREEN_WIDTH 128     // OLED display width, in pixels
#define SCREEN_HEIGHT 64     // OLED display height, in pixels
#define OLED_RST_PIN 0      // Reset pin (-1 if not available)

//Adafruit_SSD1306 display(128, 64, &Wire, OLED_RST_PIN);

#define OLED_RESET 0  // GPIO0
Adafruit_SSD1306 display(OLED_RESET);


// OLED Animation: fidget spinner
// Code auto-generated by https://wokwi.com/animator, graphics by icons8.com

#define FRAME_DELAY (42)
#define FRAME_WIDTH (48)
#define FRAME_HEIGHT (48)
#define FRAME_COUNT (sizeof(frames) / sizeof(frames[0]))
const byte PROGMEM frames[][288] = {
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,192,0,0,0,0,31,240,0,0,0,0,120,60,0,0,0,0,96,14,0,0,0,0,199,198,0,0,0,1,143,227,0,0,0,1,152,51,0,0,0,1,144,19,0,0,0,1,51,153,0,0,0,1,51,153,128,0,0,1,16,17,0,0,0,1,152,51,0,0,0,1,142,227,0,0,0,0,199,198,0,0,0,0,192,6,0,0,0,0,96,12,0,0,0,0,96,12,0,0,0,0,96,12,0,0,0,0,96,12,0,0,0,0,96,14,0,0,0,0,195,134,0,0,0,3,199,195,128,0,0,127,135,193,254,0,3,252,7,192,127,192,7,0,3,128,0,224,14,0,0,0,0,112,28,120,0,0,30,56,25,254,0,0,127,152,49,134,0,0,97,140,51,3,7,224,192,204,51,51,15,240,204,204,51,51,24,24,204,204,51,3,56,28,192,204,51,3,48,12,192,204,25,206,96,6,115,152,24,252,96,6,63,24,12,0,192,3,0,48,7,1,192,3,128,224,3,255,0,0,255,192,1,254,0,0,127,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,192,0,0,0,0,31,240,0,0,0,0,120,28,0,0,0,0,96,14,0,0,0,0,199,198,0,0,0,1,143,227,0,0,0,1,152,51,0,0,0,1,152,25,0,0,0,1,51,153,128,0,0,1,51,153,128,0,0,1,152,25,0,0,0,1,152,51,0,0,0,1,143,243,0,0,0,0,199,198,0,0,0,0,192,6,0,0,0,0,96,12,0,0,0,0,96,12,0,0,0,0,96,12,0,0,0,0,96,12,0,0,0,0,96,14,0,0,0,0,195,134,0,0,0,3,135,195,128,0,0,255,7,193,252,0,3,252,7,192,127,128,7,0,3,128,1,224,14,0,0,0,0,112,24,120,0,0,30,48,25,254,0,0,127,24,49,134,0,0,97,136,51,3,7,224,192,204,51,51,31,240,204,204,51,51,24,24,140,204,51,3,48,28,200,204,51,3,48,12,192,204,25,254,96,12,115,152,24,252,96,6,63,24,12,0,192,3,0,48,7,3,128,3,128,224,3,255,0,1,247,192,0,252,0,0,127,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,192,0,0,0,0,31,248,0,0,0,0,56,28,0,0,0,0,96,14,0,0,0,0,227,199,0,0,0,0,207,243,0,0,0,1,156,49,128,0,0,1,152,25,128,0,0,1,153,153,128,0,0,1,153,153,128,0,0,1,152,25,128,0,0,1,152,57,128,0,0,0,207,243,0,0,0,0,199,227,0,0,0,0,96,6,0,0,0,0,96,14,0,0,0,0,96,12,0,0,0,0,96,12,0,0,0,0,96,12,0,0,0,0,96,14,0,0,0,0,195,134,0,0,0,7,135,199,128,0,1,255,7,195,240,0,3,224,7,192,255,128,14,0,3,128,3,192,12,0,0,0,0,224,24,252,0,0,8,48,49,222,0,0,127,24,51,6,0,0,99,152,51,35,7,224,192,136,50,51,31,240,140,204,50,51,56,56,156,204,51,3,48,24,140,204,51,134,96,12,192,200,25,252,96,12,225,152,24,120,192,6,127,24,14,1,192,6,28,48,7,7,128,3,128,96,3,255,0,1,225,192,0,120,0,0,255,128,0,0,0,0,28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,192,0,0,0,0,15,248,0,0,0,0,28,28,0,0,0,0,48,6,0,0,0,0,99,227,0,0,0,0,199,241,128,0,0,0,204,25,128,0,0,0,204,9,128,0,0,0,153,204,128,0,0,0,153,204,128,0,0,0,136,136,128,0,0,0,204,25,128,0,0,0,199,49,128,0,0,0,99,227,0,0,0,0,96,3,0,0,0,0,32,6,0,0,0,0,48,6,0,0,0,0,32,12,0,0,0,0,96,12,0,0,0,0,96,4,0,0,0,1,195,134,0,0,0,255,135,199,0,0,3,254,7,195,192,0,7,0,7,193,252,0,12,0,3,128,63,128,24,248,0,0,1,192,49,252,0,0,0,224,51,142,0,0,62,48,51,6,0,0,255,48,38,115,15,192,193,152,34,115,31,241,129,152,50,3,48,49,152,152,51,6,112,25,153,152,49,220,96,25,129,152,24,248,192,8,193,152,28,1,192,12,255,48,14,3,128,14,126,48,3,255,0,7,0,96,0,252,0,3,129,192,0,0,0,1,255,128,0,0,0,0,126,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,248,0,0,0,0,15,30,0,0,0,0,28,7,0,0,0,0,48,227,128,0,0,0,115,249,128,0,0,0,102,28,192,0,0,0,102,12,192,0,0,0,76,196,192,0,0,0,76,228,192,0,0,0,76,76,192,0,0,0,102,12,192,0,0,0,103,24,192,0,0,0,99,249,128,0,0,0,48,67,128,0,0,0,48,3,0,0,0,0,48,6,0,0,0,0,48,6,0,0,0,0,96,4,0,0,0,0,224,4,0,0,0,127,193,6,0,0,3,255,131,198,0,0,15,0,7,195,0,0,28,0,7,193,224,0,24,240,3,128,252,0,49,252,0,0,31,0,51,12,0,0,1,192,102,6,0,0,0,224,102,102,0,0,124,96,102,98,31,128,206,48,38,38,61,225,131,48,35,6,112,115,1,48,51,220,224,51,57,48,25,248,192,51,57,16,28,1,128,25,3,48,14,7,128,25,131,48,7,254,0,24,254,96,1,252,0,12,120,96,0,0,0,14,0,192,0,0,0,7,131,128,0,0,0,1,255,0,0,0,0,0,56,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,248,0,0,0,0,3,255,0,0,0,0,14,7,128,0,0,0,28,1,192,0,0,0,24,248,192,0,0,0,49,220,96,0,0,0,51,6,96,0,0,0,51,34,96,0,0,0,34,114,32,0,0,0,50,114,96,0,0,0,51,6,96,0,0,0,51,142,96,0,0,0,17,252,192,0,0,0,16,112,192,0,0,0,24,1,128,0,0,0,24,3,0,0,0,0,48,6,0,0,0,0,112,6,0,0,1,249,224,6,0,0,7,255,193,6,0,0,14,0,3,198,0,0,24,0,7,198,0,0,49,240,7,195,128,0,51,248,3,129,224,0,103,12,0,0,248,0,102,6,0,0,30,0,100,102,0,0,7,0,100,102,12,0,1,128,102,6,63,129,248,192,103,12,113,195,220,192,51,248,192,227,6,96,56,241,128,102,38,96,24,3,128,102,114,96,14,15,0,38,102,96,7,252,0,50,6,96,0,224,0,51,14,96,0,0,0,49,252,192,0,0,0,24,113,192,0,0,0,12,3,128,0,0,0,7,143,0,0,0,0,3,252,0,0,0,0,0,32,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,255,0,0,0,0,1,231,128,0,0,0,7,0,192,0,0,0,6,60,96,0,0,0,12,126,48,0,0,0,12,195,48,0,0,0,25,129,152,0,0,0,25,153,152,0,0,0,25,153,152,0,0,0,25,145,152,0,0,0,25,131,16,0,0,0,12,231,48,0,0,0,12,126,48,0,0,0,12,0,96,0,0,0,24,1,192,0,0,64,56,3,128,0,7,254,240,3,0,0,15,31,224,6,0,0,24,0,1,6,0,0,48,224,3,198,0,0,99,248,7,198,0,0,103,24,7,198,0,0,102,12,3,131,0,0,76,204,0,1,192,0,76,228,0,0,240,0,76,12,0,0,56,0,102,12,124,0,14,0,99,184,255,0,7,0,49,241,131,131,227,0,56,3,1,135,121,128,28,14,0,206,25,128,7,252,0,204,12,128,3,240,0,204,204,192,0,0,0,200,204,192,0,0,0,204,12,128,0,0,0,198,25,128,0,0,0,103,241,128,0,0,0,113,227,0,0,0,0,56,6,0,0,0,0,30,28,0,0,0,0,7,248,0,0,0,0,0,192,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,63,192,0,0,0,0,241,224,0,0,0,1,192,112,0,0,0,1,142,24,0,0,0,3,63,136,0,0,0,2,49,204,0,0,0,6,96,76,0,0,0,6,102,100,0,0,0,6,70,100,0,0,0,6,100,100,0,0,0,6,96,204,0,0,0,6,59,204,0,1,224,6,31,24,0,7,252,12,0,56,0,30,31,184,0,112,0,56,3,240,1,192,0,49,224,0,3,128,0,103,248,1,3,0,0,102,24,3,134,0,0,76,12,7,198,0,0,204,204,3,134,0,0,204,204,3,134,0,0,204,12,0,7,0,0,102,24,0,3,0,0,99,248,240,1,192,0,49,227,252,0,224,0,56,7,14,0,112,0,14,30,7,0,24,0,7,248,3,7,140,0,0,192,3,31,198,0,0,0,3,56,102,0,0,0,3,48,38,0,0,0,3,51,50,0,0,0,3,35,50,0,0,0,3,48,38,0,0,0,3,56,102,0,0,0,1,159,198,0,0,0,1,135,140,0,0,0,0,224,24,0,0,0,0,112,112,0,0,0,0,63,224,0,0,0,0,7,128,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,192,0,0,0,0,31,240,0,0,0,0,56,60,0,0,0,0,112,12,0,0,0,0,199,198,0,0,0,0,206,227,0,0,0,0,156,51,0,0,0,1,152,27,0,0,0,1,145,153,0,7,248,1,153,153,0,15,30,1,24,51,0,24,7,3,12,115,0,49,225,238,7,230,0,99,240,252,3,134,0,102,24,0,0,12,0,76,12,0,0,120,0,76,204,1,1,224,0,76,204,3,131,128,0,108,12,7,199,0,0,102,24,3,134,0,0,99,248,3,132,0,0,49,224,0,4,0,0,24,7,224,4,0,0,30,31,240,6,0,0,7,248,24,7,0,0,0,224,28,3,128,0,0,0,12,1,192,0,0,0,12,0,192,0,0,0,12,60,96,0,0,0,12,254,48,0,0,0,12,195,48,0,0,0,25,129,176,0,0,0,25,153,144,0,0,0,25,153,144,0,0,0,25,129,144,0,0,0,8,195,48,0,0,0,12,254,48,0,0,0,6,60,96,0,0,0,7,0,224,0,0,0,3,195,128,0,0,0,0,255,0,0,0,0,0,24,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,252,0,0,0,0,15,30,0,1,248,0,28,3,0,7,254,0,24,241,128,14,7,0,49,248,192,24,3,128,51,12,192,57,249,192,102,6,64,51,156,224,230,102,64,55,12,121,198,102,64,102,102,31,134,6,64,102,102,0,3,12,192,102,102,0,3,248,192,38,12,0,0,241,128,51,28,1,0,3,128,49,248,3,128,15,0,24,64,7,193,252,0,14,0,3,131,224,0,7,255,129,6,0,0,3,255,192,12,0,0,0,0,96,12,0,0,0,0,48,8,0,0,0,0,48,8,0,0,0,0,48,12,0,0,0,0,48,12,0,0,0,0,48,4,0,0,0,0,96,6,0,0,0,0,99,227,0,0,0,0,206,115,0,0,0,0,204,57,0,0,0,0,152,153,128,0,0,0,153,137,128,0,0,0,153,153,128,0,0,0,204,25,128,0,0,0,206,51,0,0,0,0,71,227,0,0,0,0,97,134,0,0,0,0,56,12,0,0,0,0,30,120,0,0,0,0,7,240,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,126,0,0,0,0,0,255,128,0,0,0,3,129,192,0,0,0,7,0,224,0,0,0,6,62,32,0,0,0,12,247,48,0,124,0,12,195,16,1,255,0,9,129,152,3,129,192,9,153,140,6,0,192,9,153,140,12,124,96,9,129,135,56,238,48,12,195,3,241,131,48,12,126,0,1,145,48,6,24,0,1,57,144,3,0,0,1,153,176,1,224,1,1,131,48,0,127,3,128,199,48,0,7,135,192,126,96,0,1,135,128,16,224,0,0,195,0,1,192,0,0,192,7,239,128,0,0,64,30,254,0,0,0,192,56,0,0,0,0,192,48,0,0,0,1,128,32,0,0,0,3,128,96,0,0,0,7,0,96,0,0,0,14,56,32,0,0,0,12,254,32,0,0,0,25,199,48,0,0,0,25,131,48,0,0,0,25,57,48,0,0,0,25,57,48,0,0,0,25,129,48,0,0,0,25,131,48,0,0,0,12,254,96,0,0,0,12,124,96,0,0,0,6,0,192,0,0,0,3,131,128,0,0,0,1,255,0,0,0,0,0,124,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,15,240,0,0,0,0,28,60,0,0,0,0,48,14,0,0,0,0,99,198,0,0,0,0,199,227,0,0,0,0,204,51,0,0,0,0,216,25,0,0,0,0,153,153,128,0,0,0,153,153,128,0,0,0,152,25,128,0,0,0,204,49,128,0,0,0,199,241,128,0,0,0,99,192,128,0,0,0,112,0,192,127,0,0,60,0,225,247,128,0,14,0,63,128,192,0,3,0,30,0,96,0,1,128,0,126,48,0,1,129,0,227,48,0,0,135,128,129,144,0,0,135,193,153,152,0,1,135,129,153,152,0,1,129,1,137,152,0,3,128,0,193,144,0,15,0,0,231,48,0,60,0,60,126,48,0,224,0,255,0,96,1,192,1,195,129,192,1,143,131,0,255,128,3,25,195,0,126,0,3,48,98,0,0,0,3,34,102,0,0,0,3,39,38,0,0,0,3,38,102,0,0,0,3,48,102,0,0,0,3,56,196,0,0,0,1,159,140,0,0,0,1,194,24,0,0,0,0,224,56,0,0,0,0,125,224,0,0,0,0,31,192,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,31,192,0,0,0,0,120,240,0,0,0,0,192,56,0,0,0,1,135,28,0,0,0,1,159,204,0,0,0,3,48,196,0,0,0,3,48,102,0,0,0,3,102,102,0,0,0,3,103,102,0,0,0,3,32,102,0,0,0,3,48,228,0,0,0,3,31,204,0,0,0,1,143,12,0,0,0,0,192,24,0,0,0,0,192,24,0,0,0,0,96,24,0,0,0,0,96,24,0,0,0,0,96,24,0,0,0,0,96,24,0,0,0,0,192,12,0,0,0,1,193,7,240,0,3,255,135,131,254,0,7,254,7,192,7,0,12,0,3,128,1,128,24,96,1,0,248,192,49,248,0,1,220,192,51,28,0,3,6,96,54,4,0,3,2,96,102,102,15,130,114,96,38,102,31,226,114,96,38,102,48,115,6,96,35,12,96,51,142,96,51,156,192,25,252,192,25,249,192,28,113,192,28,3,128,14,3,128,14,7,0,7,143,0,7,254,0,1,252,0,1,248,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,63,128,0,0,0,0,127,224,0,0,0,1,192,112,0,0,0,1,128,56,0,0,0,3,31,152,0,0,0,2,49,204,0,0,0,6,96,204,0,0,0,6,70,76,0,0,0,6,78,68,0,0,0,6,100,76,0,0,0,6,96,204,0,0,0,6,59,204,0,3,224,6,31,24,0,15,248,6,0,56,0,56,28,12,0,112,0,112,7,56,0,192,0,99,227,240,1,128,0,199,112,0,3,0,0,204,24,0,6,0,0,200,152,3,6,0,0,137,200,7,132,0,0,217,136,7,198,0,0,204,24,3,134,0,0,206,48,1,7,0,0,103,224,0,3,128,0,113,131,240,1,224,0,56,15,248,0,112,0,30,124,12,0,56,0,7,240,14,31,152,0,0,0,6,57,204,0,0,0,6,96,204,0,0,0,6,102,100,0,0,0,6,70,100,0,0,0,6,102,100,0,0,0,2,96,204,0,0,0,3,57,204,0,0,0,3,31,152,0,0,0,1,128,56,0,0,0,0,224,112,0,0,0,0,127,224,0,0,0,0,31,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,124,0,0,0,0,1,255,0,0,124,0,7,3,128,1,255,0,14,0,192,3,131,192,12,124,224,7,0,192,25,254,96,12,124,96,25,130,32,12,238,48,19,19,48,25,131,48,19,51,56,57,145,48,19,51,30,241,57,144,27,3,15,225,153,176,25,134,0,1,131,48,28,252,0,0,199,48,12,48,0,0,126,96,7,0,0,0,24,96,3,224,3,128,1,192,0,255,3,192,15,128,0,15,135,193,254,0,0,1,195,135,128,0,0,0,193,14,0,0,0,0,96,12,0,0,0,0,96,8,0,0,0,0,96,24,0,0,0,0,96,24,0,0,0,0,224,12,0,0,0,0,199,12,0,0,0,1,143,198,0,0,0,1,152,102,0,0,0,1,48,50,0,0,0,3,51,50,0,0,0,3,51,51,0,0,0,1,48,50,0,0,0,1,152,102,0,0,0,1,159,230,0,0,0,0,199,140,0,0,0,0,224,28,0,0,0,0,112,56,0,0,0,0,31,224,0,0,0,0,7,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,1,248,0,0,0,0,7,254,0,0,0,0,12,7,0,0,0,0,24,3,128,0,0,0,49,249,128,0,0,0,51,28,192,0,0,0,102,12,192,0,0,0,102,68,192,0,0,0,100,228,64,0,0,0,100,68,192,0,0,0,102,12,192,0,0,0,51,156,192,0,0,0,49,248,192,0,0,0,24,0,192,0,0,0,12,0,192,31,128,0,6,0,96,123,224,0,3,128,57,192,112,0,1,128,31,134,24,0,0,192,0,31,140,0,0,192,0,49,204,0,0,195,128,96,108,0,0,195,192,102,100,0,0,199,192,102,100,0,1,195,128,100,100,0,3,129,0,48,204,0,15,0,0,59,204,0,28,0,30,31,152,0,48,0,127,128,56,0,99,192,225,224,112,0,71,240,192,127,224,0,204,57,128,31,128,0,200,25,128,0,0,0,137,201,128,0,0,0,137,137,128,0,0,0,200,25,128,0,0,0,204,57,128,0,0,0,71,243,0,0,0,0,99,199,0,0,0,0,48,14,0,0,0,0,28,60,0,0,0,0,15,240,0,0,0,0,0,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,3,248,0,0,0,0,15,188,0,0,0,0,28,6,0,0,0,0,56,67,0,0,0,0,51,241,128,0,0,0,103,25,128,0,0,0,102,12,192,0,0,0,108,204,192,0,0,0,76,196,192,0,0,0,108,76,192,0,0,0,102,12,192,0,0,0,103,57,128,0,0,0,49,241,128,0,0,0,48,3,0,0,0,0,48,6,0,0,0,0,16,14,0,0,0,0,16,12,0,0,0,0,16,12,0,0,0,0,48,12,0,0,0,0,112,12,0,0,0,0,224,6,0,0,0,255,195,135,0,0,1,192,3,195,254,0,3,0,7,192,255,128,6,60,3,128,0,192,12,126,1,0,0,96,12,195,0,0,126,48,9,129,128,0,227,48,9,153,128,0,193,144,9,153,135,225,153,152,9,129,142,241,152,152,12,195,24,57,153,152,12,127,48,24,193,144,6,60,112,12,231,48,3,0,224,6,126,48,3,195,192,7,0,96,0,255,0,3,129,192,0,60,0,1,255,128,0,0,0,0,126,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,192,0,0,0,0,31,240,0,0,0,0,112,28,0,0,0,0,96,12,0,0,0,0,199,198,0,0,0,1,140,99,0,0,0,1,152,51,0,0,0,1,145,19,0,0,0,1,147,147,0,0,0,1,145,19,0,0,0,1,24,51,0,0,0,1,12,99,0,0,0,3,7,198,0,0,120,3,0,14,0,3,254,6,0,28,0,7,3,222,0,120,0,12,1,248,1,224,0,24,248,0,3,128,0,25,222,0,3,0,0,19,6,1,131,0,0,51,35,3,194,0,0,51,51,7,194,0,0,51,51,3,195,0,0,19,2,1,3,0,0,25,134,0,1,192,0,24,252,0,0,240,0,12,48,252,0,56,0,6,3,206,0,12,0,3,207,3,3,198,0,1,252,3,7,227,0,0,0,1,140,51,0,0,0,1,152,25,0,0,0,1,153,153,128,0,0,1,153,153,128,0,0,0,152,25,0,0,0,0,204,51,0,0,0,0,207,243,0,0,0,0,99,198,0,0,0,0,112,14,0,0,0,0,56,60,0,0,0,0,15,240,0,0,0,0,3,192,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,254,0,0,0,0,1,199,128,0,0,0,7,1,192,0,0,0,6,56,224,0,0,0,12,254,96,0,254,0,24,199,48,3,199,128,25,131,48,7,1,192,49,153,48,14,56,224,49,57,176,12,254,112,97,145,48,25,199,63,225,131,48,25,131,15,128,238,48,25,57,0,0,124,96,25,57,0,0,0,224,25,131,0,0,3,192,25,131,1,128,127,0,12,254,3,193,252,0,12,124,7,195,128,0,6,0,3,195,0,0,3,131,129,6,0,0,1,255,224,6,0,0,0,124,112,6,0,0,0,0,24,6,0,0,0,0,24,7,0,0,0,0,8,3,0,0,0,0,8,1,128,0,0,0,8,0,192,0,0,0,24,252,96,0,0,0,25,198,96,0,0,0,25,131,48,0,0,0,27,51,48,0,0,0,19,57,48,0,0,0,27,19,48,0,0,0,25,131,48,0,0,0,25,206,96,0,0,0,12,124,96,0,0,0,14,0,192,0,0,0,7,3,128,0,0,0,1,255,0,0,0,0,0,252,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,30,0,0,0,0,0,127,192,0,0,0,0,224,224,0,0,0,1,128,48,0,63,128,3,31,24,0,121,224,2,59,152,1,192,112,6,97,204,3,142,24,6,64,204,3,31,156,6,78,70,14,49,204,4,76,71,188,96,76,6,96,193,248,102,100,6,113,128,0,70,100,3,63,128,0,96,100,3,142,0,0,112,204,1,192,1,128,59,140,0,240,3,192,31,24,0,63,135,192,0,56,0,3,195,192,224,112,0,0,225,3,255,192,0,0,96,7,31,0,0,0,32,12,0,0,0,0,48,12,0,0,0,0,32,24,0,0,0,0,96,24,0,0,0,0,96,24,0,0,0,0,192,12,0,0,0,0,199,140,0,0,0,1,159,230,0,0,0,1,152,102,0,0,0,1,48,50,0,0,0,1,51,51,0,0,0,1,51,51,0,0,0,1,48,51,0,0,0,1,152,102,0,0,0,1,143,198,0,0,0,0,199,140,0,0,0,0,96,24,0,0,0,0,120,240,0,0,0,0,31,224,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,192,0,0,0,0,31,240,0,0,0,0,48,56,0,0,0,0,96,12,0,0,0,0,199,198,0,0,0,0,142,226,0,0,0,1,152,51,0,0,0,1,145,19,0,0,0,1,147,147,0,7,128,1,145,17,0,63,224,1,152,49,128,112,112,1,156,97,193,192,24,0,207,224,255,143,140,0,225,0,62,29,196,0,112,0,0,48,102,0,62,0,0,48,38,0,15,1,0,39,38,0,1,131,192,35,38,0,0,199,192,48,102,0,0,67,192,24,230,0,0,65,128,31,204,0,0,64,1,7,28,0,0,64,15,224,56,0,0,192,28,120,240,0,1,128,56,31,192,0,3,128,48,0,0,0,7,0,32,0,0,0,6,16,96,0,0,0,12,254,32,0,0,0,8,199,48,0,0,0,25,131,48,0,0,0,25,153,48,0,0,0,25,57,48,0,0,0,25,145,48,0,0,0,25,131,48,0,0,0,12,238,48,0,0,0,12,124,96,0,0,0,6,0,224,0,0,0,3,129,192,0,0,0,1,255,0,0,0,0,0,124,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,248,0,0,0,0,15,30,0,0,0,0,28,7,0,0,0,0,48,227,128,0,0,0,51,249,128,0,0,0,103,28,192,0,0,0,102,12,192,0,0,0,68,228,192,0,0,0,68,228,192,0,0,0,102,4,192,0,0,0,102,12,192,0,0,0,99,184,192,0,0,0,49,240,96,15,192,0,24,0,112,63,224,0,30,0,61,240,56,0,7,0,15,128,28,0,1,128,0,15,140,0,0,193,0,28,230,0,0,195,192,48,102,0,0,199,192,50,50,0,0,195,192,35,50,0,0,193,128,51,50,0,0,192,0,48,38,0,1,128,0,24,230,0,7,0,31,15,196,0,14,0,127,199,12,0,28,0,96,224,56,0,48,0,192,120,240,0,99,240,192,31,224,0,103,56,128,0,0,0,204,28,128,0,0,0,204,204,128,0,0,0,204,204,192,0,0,0,204,204,192,0,0,0,206,8,128,0,0,0,103,57,128,0,0,0,99,241,128,0,0,0,48,3,0,0,0,0,28,14,0,0,0,0,15,252,0,0,0,0,3,240,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,254,0,0,0,0,3,199,128,0,0,0,6,1,192,0,0,0,12,56,192,0,0,0,24,252,96,0,0,0,25,134,32,0,0,0,19,3,48,0,0,0,51,51,48,0,0,0,51,49,48,0,0,0,19,19,48,0,0,0,25,131,48,0,0,0,25,206,32,0,0,0,12,252,32,0,0,0,14,0,48,0,0,0,7,0,48,0,0,0,3,128,24,7,128,0,1,192,30,255,224,0,0,192,7,240,112,0,0,193,0,0,24,0,0,67,192,15,140,0,0,199,192,31,204,0,0,195,192,48,102,0,1,131,128,48,102,0,7,0,0,39,34,0,30,0,0,39,50,0,56,0,0,48,38,0,96,0,126,48,102,0,195,0,247,31,198,1,143,193,193,143,140,1,156,227,0,192,24,3,48,51,0,112,112,3,51,51,0,63,224,3,51,51,0,15,128,3,51,51,0,0,0,3,56,50,0,0,0,1,156,230,0,0,0,1,143,198,0,0,0,0,192,12,0,0,0,0,112,56,0,0,0,0,63,240,0,0,0,0,15,192,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,63,0,0,0,0,0,255,192,0,0,0,3,192,224,0,0,0,3,0,112,0,0,0,6,62,48,0,0,0,4,119,152,0,0,0,12,193,152,0,0,0,12,136,200,0,0,0,12,156,200,0,0,0,12,156,200,0,0,0,12,192,152,0,0,0,12,225,152,0,0,0,6,127,24,0,0,0,6,28,16,0,0,0,3,0,16,0,0,0,1,128,24,0,0,0,0,192,24,0,0,0,0,192,12,0,0,0,0,64,15,63,128,0,0,65,135,255,224,0,0,195,192,0,112,0,0,199,192,0,24,0,1,131,192,15,140,0,15,3,128,61,204,0,62,0,0,48,102,0,240,0,0,96,102,1,192,0,0,102,38,3,132,0,112,102,38,3,63,129,252,96,102,6,113,195,134,48,196,6,96,199,3,31,204,6,68,70,1,143,28,6,78,102,1,192,56,6,100,108,0,112,240,6,96,204,0,63,192,6,113,204,0,7,0,3,63,152,0,0,0,3,132,56,0,0,0,1,192,112,0,0,0,0,251,224,0,0,0,0,63,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,63,192,0,0,0,0,249,224,0,0,0,1,192,48,0,0,0,3,142,24,0,0,0,3,63,140,0,0,0,6,48,204,0,0,0,6,96,76,0,0,0,6,70,100,0,0,0,6,78,100,0,0,0,6,102,100,0,0,0,6,96,204,0,0,0,6,49,204,0,0,0,3,31,140,0,0,0,3,128,24,0,0,0,1,128,24,0,0,0,0,192,24,0,0,0,0,96,8,0,0,0,0,64,12,0,0,0,0,64,14,0,0,0,0,65,135,255,0,0,0,195,193,255,192,0,1,135,192,0,240,0,15,131,192,0,56,0,126,3,128,15,24,1,240,0,0,63,140,3,128,0,0,112,204,7,0,0,0,96,102,6,63,0,0,70,102,12,247,131,248,70,100,12,193,135,156,96,100,12,136,206,6,96,204,8,156,204,7,59,204,8,140,204,3,31,152,12,193,152,1,128,56,12,227,152,0,224,112,6,127,56,0,127,224,7,28,48,0,63,128,3,128,96,0,0,0,1,227,192,0,0,0,0,127,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,0,0,0,0,0,63,224,0,0,0,0,112,112,0,0,0,0,192,24,0,0,0,1,143,140,0,0,0,3,159,198,0,0,0,3,48,102,0,0,0,3,48,38,0,0,0,2,39,50,0,0,0,2,103,50,0,0,0,3,34,34,0,0,0,3,48,102,0,0,0,3,25,230,0,0,0,1,143,140,0,0,0,1,192,12,0,0,0,0,192,12,0,0,0,0,96,8,0,0,0,0,96,12,0,0,0,0,96,12,0,0,0,0,96,14,0,0,0,0,193,135,0,0,0,1,195,195,255,0,0,7,135,192,255,192,0,127,7,192,0,240,1,248,3,128,0,48,3,128,0,0,31,24,6,0,0,0,63,140,12,124,0,0,96,204,12,255,0,0,64,204,25,195,3,240,206,100,25,129,143,248,206,68,25,153,140,12,64,76,25,153,152,14,96,204,25,129,152,6,63,140,25,131,48,3,31,24,12,255,48,3,128,56,12,124,112,1,192,112,6,0,224,0,255,192,3,129,192,0,63,0,1,255,128,0,0,0,0,126,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,192,0,0,0,0,63,240,0,0,0,0,112,56,0,0,0,0,224,12,0,0,0,1,199,198,0,0,0,1,159,230,0,0,0,1,24,115,0,0,0,3,48,51,0,0,0,3,51,51,0,0,0,3,51,51,0,0,0,3,48,51,0,0,0,3,56,51,0,0,0,1,159,230,0,0,0,1,143,198,0,0,0,0,192,12,0,0,0,0,64,12,0,0,0,0,96,12,0,0,0,0,96,12,0,0,0,0,96,12,0,0,0,0,96,14,0,0,0,0,195,135,0,0,0,1,199,195,192,0,0,31,135,193,255,128,1,254,7,192,7,192,3,192,3,128,0,112,7,0,0,0,0,48,12,48,0,0,63,24,24,254,0,0,115,140,25,198,0,0,96,204,17,131,7,224,196,204,51,51,15,248,206,76,51,57,28,28,204,76,51,49,24,12,192,204,19,3,48,6,97,204,25,135,48,6,63,152,24,254,96,3,30,24,12,56,96,3,128,112,6,1,192,1,224,224,3,199,128,0,255,192,1,255,0,0,30,0,0,16,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,192,0,0,0,0,31,240,0,0,0,0,120,60,0,0,0,0,224,12,0,0,0,0,199,198,0,0,0,1,143,227,0,0,0,1,152,51,0,0,0,1,48,51,0,0,0,3,51,153,0,0,0,3,51,153,0,0,0,1,48,19,0,0,0,1,152,51,0,0,0,1,142,227,0,0,0,0,199,198,0,0,0,0,192,6,0,0,0,0,96,12,0,0,0,0,96,12,0,0,0,0,96,12,0,0,0,0,96,12,0,0,0,0,96,14,0,0,0,0,195,134,0,0,0,3,199,195,192,0,0,127,135,193,255,0,1,252,7,192,63,192,7,128,3,128,0,224,14,0,0,0,0,112,12,120,0,0,30,24,24,254,0,0,127,152,17,134,0,0,97,204,51,3,7,224,192,204,51,51,15,248,204,204,51,49,24,24,204,204,51,19,56,12,192,204,51,3,48,12,224,204,25,206,48,6,127,152,24,252,96,6,63,24,12,0,192,3,0,48,7,1,192,1,192,224,3,255,128,0,255,192,1,254,0,0,63,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
};

void setup() {
  display.begin(SSD1306_SWITCHCAPVCC, SCREEN_I2C_ADDR);
  display.clearDisplay();
  display.drawLine(0,0,63,47,WHITE);
}

int frame = 0;
void loop() {
  /*
  display.clearDisplay();
  display.drawBitmap(40, 8, frames[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);
  display.display();
  frame = (frame + 1) % FRAME_COUNT;
  delay(FRAME_DELAY);
  */
}
