/*********
  Rui Santos
  Complete project details at https://randomnerdtutorials.com  
*********/

#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <Fonts/FreeSerif24pt7b.h>

#define SCREEN_WIDTH 64 // OLED display width, in pixels
#define SCREEN_HEIGHT 48 // OLED display height, in pixels

#define OLED_RESET 0  // GPIO0
Adafruit_SSD1306 display(OLED_RESET);
void setup() {
  Serial.begin(115200);

/*
  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) { 
    Serial.println("SSD1306 allocation failed");
    for(;;);
  }
  */
  delay(2000);

  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  display.clearDisplay();
/*
  display.setFont(&FreeSerif24pt7b);
  display.clearDisplay();
  display.setTextSize(1);             
  display.setTextColor(WHITE);        
  display.setCursor(0,20);
  display.drawLine(0, 0, 122, 77, WHITE);
  */
  /*
  display.drawPixel(0,0, WHITE);
  display.drawPixel(10,30, WHITE);
  display.drawPixel(40,30, WHITE);
  display.drawPixel(63,47, WHITE);
  */

    //display.drawLine(0, 0, 63, 47, WHITE);
    //display.drawLine(0, 47, 63, 0, WHITE);


  /*
  display.drawPixel(30,30, WHITE);
  display.drawPixel(50,50, WHITE);
  display.drawPixel(63,63, WHITE);
  display.drawPixel(126,126, WHITE);
  */
               
  display.println("22");
  display.display();
  delay(500);

  
}

int frame = 0;
void loop() {

  display.drawPixel(0,1, WHITE);
    display.display();

  delay(1000);
  display.drawLine(0, 0, 63, 47, WHITE);
  display.display();
  delay(1000);
  display.drawLine(0, 47, 63, 0, WHITE);
  display.display();
  delay(1000);
   display.drawLine(0, 0, 63, 47, BLACK);
  display.drawLine(0, 47, 63, 0, BLACK);
  display.display();
  //display.clearDisplay();
  delay(1000);
}
