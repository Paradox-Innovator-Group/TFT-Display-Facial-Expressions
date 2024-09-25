#include <Adafruit_GFX.h>    // Core graphics library
#include <MCUFRIEND_kbv.h>   // Hardware-specific library
MCUFRIEND_kbv tft;

#include <Fonts/FreeSans9pt7b.h>
#include <Fonts/FreeSans12pt7b.h>
#include <Fonts/FreeSerif12pt7b.h>

#include <FreeDefaultFonts.h>

#define BLACK   0x0000
#define RED     0xF800
#define GREEN   0x07E0
#define WHITE   0xFFFF
#define GREY    0x8410



void mouthNormal()
{
  tft.fillCircle(tft.width() / 2, tft.height() / 2 + 20, 110, WHITE);
  tft.fillCircle(tft.width() / 2, tft.height() / 2 - 15, 120, BLACK);
}
void mouthSad()
{

  tft.fillCircle(tft.width() / 2, 360, 110, WHITE);
  tft.fillCircle(tft.width() / 2, 360 + 20, 120, BLACK);
}

void faceAttitude()
{
  tft.fillRoundRect(50, 75, 100, 50, 20, WHITE);
  tft.fillRoundRect(tft.width() - 150, 75, 100, 50, 20, WHITE);
  tft.fillCircle(115, 100, 20, BLACK);
  tft.fillCircle(tft.width() - 115, 100, 20, BLACK);
  tft.fillRoundRect(170, 240, 130, 20, 10, WHITE);
  tft.drawLine(40, 40, 170, 80, WHITE);
  tft.drawLine(tft.width() - 40, 40, tft.width() - 170, 80, WHITE);
}
void faceAttitude1()
{
  tft.fillRoundRect(50, 75, 100, 75, 20, WHITE);
  tft.fillRoundRect(tft.width() - 150, 75, 100, 75, 20, WHITE);
  tft.fillRoundRect(50, 70, 100, 20, 20, BLACK);
  tft.fillRoundRect(tft.width() - 150, 70, 100, 20, 20, BLACK);
  tft.fillRoundRect(170, 240, 130, 20, 10, WHITE);
}
void faceQues()
{
  tft.fillRoundRect(50, 75, 100, 50, 20, WHITE);
  tft.fillRoundRect(tft.width() - 150, 75, 100, 50, 20, WHITE);
  tft.fillCircle(115, 100, 20, BLACK);
  tft.fillCircle(tft.width() - 115, 100, 20, BLACK);
  tft.fillRoundRect(170, 240, 130, 20, 10, WHITE);
  tft.drawLine(40, 40, 170, 80, WHITE);
  //  tft.drawLine(tft.width()-40, 40, tft.width()-170, 80, WHITE);
}
void faceHungry()
{
  tft.fillCircle(100, 100, 90, WHITE);
  tft.fillCircle(105, 110, 95, BLACK);
  tft.fillCircle(tft.width() - 100, 100, 90, WHITE);
  tft.fillCircle(tft.width() - 105, 110, 95, BLACK);

  tft.fillCircle(100, 100, 50, WHITE);
  tft.fillCircle(105, 110, 58, BLACK);
  tft.fillCircle(tft.width() - 100, 100, 50, WHITE);
  tft.fillCircle(tft.width() - 105, 110, 58, BLACK);

  tft.fillCircle(tft.width() / 2, tft.height() / 2 + 20, 110, WHITE);
  tft.fillCircle(tft.width() / 2, tft.height() / 2 - 15, 120, BLACK);
  tft.fillRect(160, 250, 15, 15, tft.color565(3, 211, 252));
  tft.fillCircle(160, 265, 15, tft.color565(3, 211, 252));
  delay(500);
  tft.fillRect(125, 230, 10, 10, tft.color565(3, 211, 252));
  tft.fillCircle(125, 240, 10, tft.color565(3, 211, 252));
  delay(100);

  for (int i = 0 ; i < 60; i++)
  {
    tft.drawRect(150, 270, 25, i, tft.color565(3, 211, 252));
    delay(100);
  }

}

void faceCurious()
{
  tft.fillRoundRect(10, 50, 100, 130, 20, WHITE);
  tft.fillRoundRect(tft.width() - 220, 70, 90, 100, 20, WHITE);
  //  tft.drawLine(90, 250, 200, 280, WHITE);
  tft.fillRoundRect(130, 250, 100, 20, 10, WHITE);
  delay(random(1000, 3000));
  tft.fillScreen(BLACK);
  tft.fillRoundRect(160, 70, 90, 100, 20, WHITE);
  tft.fillRoundRect(tft.width() - 100, 50, 100 , 130 , 20, WHITE);
  //  tft.drawLine(tft.width() - 90, 250, tft.width() - 200, 280, WHITE);
  tft.fillRoundRect(tft.width() - 210, 250, 100, 20, 10, WHITE);
  delay(random(800, 2000));
  tft.fillScreen(BLACK);
}
void faceCrying()
{
  //eyebrow
  //  tft.drawLine(40, 80, 170, 40, WHITE);
  //  tft.drawLine(tft.width() - 40, 80, tft.width() - 170, 40, WHITE);

  tft.fillCircle(20, 0, 110, WHITE);
  tft.fillCircle(0, 0, 105, BLACK);

  tft.fillCircle(tft.width() - 20, 0, 110, WHITE);
  tft.fillCircle(tft.width() - 0, 0, 105, BLACK);
  //eyes
  tft.fillRoundRect(90, 90, 50, 20, 10, WHITE);
  tft.fillRoundRect(tft.width() - 150, 90, 50, 20, 10, WHITE);
  //mouth
  tft.fillCircle(tft.width() / 2, 330, 80, WHITE);
  tft.fillCircle(tft.width() / 2, 330, 65, BLACK);
  tft.fillRect(0, 290, 500, 220, BLACK);
  //tears
  for (int i = 0; i < tft.height(); i++)
  {
    tft.drawRect(99, 110, 20, i, tft.color565(3, 211 - i, 252));
    tft.drawRect(tft.width() - 139 , 110, 25, i, tft.color565(3, 211 - i, 252));
    delay(10);
  }

}
void eyesNormal()
{
  tft.fillRoundRect(50, 50, 100, 100, 20, WHITE);
  tft.fillRoundRect(tft.width() - 150, 50, 100, 100, 20, WHITE);
  tft.fillCircle(115, 115, 20, BLACK);
  tft.fillCircle(tft.width() - 115, 115, 20, BLACK);
}
void eyesMad()
{
  tft.fillRoundRect(50, 50, 100, 100, 20, WHITE);
  tft.fillRoundRect(tft.width() - 150, 50, 100, 100, 20, WHITE);
  tft.fillCircle(80, 80, 20, BLACK);
  tft.fillCircle((tft.width() - 80), 115 , 20, BLACK);
}

void eyesLeft()
{
  tft.fillRoundRect(50, 50, 100, 100, 20, WHITE);
  tft.fillRoundRect(tft.width() - 150, 50, 100, 100, 20, WHITE);
  tft.fillCircle(80, 80, 20, BLACK);
  tft.fillCircle(tft.width() - 115, 80, 20, BLACK);
}
void eyesRight()
{
  tft.fillRoundRect(50, 50, 100, 100, 20, WHITE);
  tft.fillRoundRect(tft.width() - 150, 50, 100, 100, 20, WHITE);
  tft.fillCircle(115, 80, 20, BLACK);
  tft.fillCircle(tft.width() - 80, 80, 20, BLACK);
}
void eyesHappy()
{
  tft.fillRoundRect(50, 75, 100, 75, 20, WHITE);
  tft.fillRoundRect(tft.width() - 150, 75, 100, 75, 20, WHITE);
  tft.fillRoundRect(50, 130, 100, 20, 10, BLACK);
  tft.fillRoundRect(tft.width() - 150, 130, 100, 20, 10, BLACK);
}
void eyesSad()
{
  tft.fillRoundRect(50, 90, 100, 50, 10, WHITE);
  tft.fillRoundRect(tft.width() - 150, 90, 100, 50, 10, WHITE);
  tft.fillTriangle(50, 95, 150, 95, 150, 55, WHITE);
  tft.fillTriangle(tft.width() - 150, 95, tft.width() - 50, 95, tft.width() - 150, 55, WHITE);
  tft.fillCircle(115, 115, 20, BLACK);
  tft.fillCircle(tft.width() - 115, 115, 20, BLACK);
}
void eyesAngry() //not done
{
  tft.fillRoundRect(50, 90, 100, 50, 10, RED);
  tft.fillRoundRect(tft.width() - 150, 90, 100, 50, 10, RED);
  tft.fillTriangle(50, 95, 150, 95, 50, 55, RED);
  tft.fillTriangle(tft.width() - 150, 95, tft.width() - 50, 95, tft.width() - 50, 55, RED);
  tft.fillCircle(115, 115, 20, BLACK);
  tft.fillCircle(tft.width() - 115, 115, 20, BLACK);
  //for eyebrows
  //  tft.drawLine(40, 40, 170, 80, WHITE);
  //  tft.drawLine(tft.width()-40, 40, tft.width()-170, 80, WHITE);
}
void eyesLove()
{
  tft.fillTriangle(100, 100, 56, 60, 143, 60, RED);
  tft.fillCircle(80, 60, 20, RED);
  tft.fillCircle(120, 60, 20, RED);

  tft.fillTriangle(tft.width() - 100, 100, tft.width() - 56, 60, tft.width() - 143, 60, RED);
  tft.fillCircle(tft.width() - 80, 60, 20, RED);
  tft.fillCircle(tft.width() - 120, 60, 20, RED);

}

void stressed()
{
  tft.fillCircle(tft.width() / 2, 360, 110, WHITE);
  tft.fillCircle(tft.width() / 2, 360 + 20, 120, BLACK);
  
  tft.fillRoundRect(50, 50, 100, 100, 20, WHITE);
  tft.fillRoundRect(tft.width() - 150, 50, 100, 100, 20, WHITE);
  tft.fillCircle(115, 115, 20, BLACK);
  tft.fillCircle(tft.width() - 115, 115, 20, BLACK);
  for(int i=0;i<70 ;i++)
  {tft.fillCircle(115, 115, 20, WHITE);
    tft.fillCircle(tft.width() - 115, 115, 20, WHITE);
    tft.fillCircle(115-i, 115, 20, BLACK);
    tft.fillCircle(tft.width() - 115+i, 115, 20, BLACK);
    
  }
  for(int i=0;i<70 ;i++)
  {tft.fillCircle(115, 115, 20, WHITE);
    tft.fillCircle(tft.width() - 115, 115, 20, WHITE);
    tft.fillCircle(115+i, 115, 20, BLACK);
    tft.fillCircle(tft.width() - 115-i, 115, 20, BLACK);
    
  }
  for(int i=0;i<70 ;i++)
  {tft.fillCircle(115, 115, 20, WHITE);
    tft.fillCircle(tft.width() - 115, 115, 20, WHITE);
    tft.fillCircle(115-i, 115, 20, BLACK);
    tft.fillCircle(tft.width() - 115+i, 115, 20, BLACK);
    
  }
  for(int i=0;i<70 ;i++)
  {tft.fillCircle(115, 115, 20, WHITE);
    tft.fillCircle(tft.width() - 115, 115, 20, WHITE);
  
    tft.fillCircle(115+i, 115, 20, BLACK);
    tft.fillCircle(tft.width() - 115-i, 115, 20, BLACK);
    }
}








void setup(void)
{
  Serial.begin(9600);
  uint16_t ID = tft.readID();
  Serial.println("Example: Font_simple");
  Serial.print("found ID = 0x");
  Serial.println(ID, HEX);
  if (ID == 0xD3D3) ID = 0x9481; //force ID if write-only display
  tft.begin(ID);
  tft.setRotation(1);
  tft.fillScreen(BLACK);
  //  mouthNormal();
  //  eyesNormal();
  //  mouthSad();
  //    faceAttitude();
  //faceQues();
  //faceCurious();
  //  eyesSad();
  //      eyesAngry();
  //      faceCrying();

  //  eyesMad();
  //  eyesLove();
}
void loop(void)
{
  //    tft.fillScreen(0x00);
  //      faceCurious();
  //    tft.fillScreen(0x00);
  //    mouthNormal();
  //    eyesNormal();
  //    delay(1000);
  //    tft.fillRect(0,0,500,220,BLACK);
  //    eyesLeft();
  //    delay(1000);
  //    tft.fillRect(0,0,500,220,BLACK);
  //    eyesRight();
  //  eyesSad();
  stressed();
  //  delay(1000);
  //  tft.fillRect(0, 0, 500, 220, BLACK);
}
