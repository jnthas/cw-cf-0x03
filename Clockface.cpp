
#include "Clockface.h"

const char* FORMAT_TWO_DIGITS = "%02d";

const short BRAZIL_TZ = 32;
const short TZ_SIZE = 5;
const short MAP_WIDTH = 120;
const short MAP_HEIGHT = 56;

byte lastHour = 24;

unsigned long lastMillis = 0;

const unsigned short MASK = 0xF81F;


Clockface::Clockface(Adafruit_GFX* display) {
  _display = display;

  Locator::provide(display);
}

void Clockface::setup(CWDateTime *dateTime) {
  this->_dateTime = dateTime;
  Locator::getDisplay()->setTextWrap(true);
  Locator::getDisplay()->fillRect(0, 0, 64, 64, 0x0000);  
  updateMap();
}

void Clockface::update() 
{  
  if (_dateTime->getMinute() == 0 && _dateTime->getHour() != lastHour) {
    updateMap();    
  }

  if (millis() - lastMillis >= 1000) { 
    Locator::getDisplay()->fillRect(0, 55, 31, 9, 0x0000);  
    Locator::getDisplay()->setFont(&small4pt7b);  
    Locator::getDisplay()->setTextColor(0xffff);    
    Locator::getDisplay()->setCursor(1, 62);    
    Locator::getDisplay()->print(String(_dateTime->getHour()));
    Locator::getDisplay()->print(":");
    Locator::getDisplay()->print(_dateTime->getMinute(FORMAT_TWO_DIGITS));
    
    lastMillis = millis();
  }
}

void Clockface::updateMap() 
{
  byte h = _dateTime->getHour();

  if (h < 12) {
    int pos = BRAZIL_TZ + ((12 - h) * TZ_SIZE);
    croppedDraw(_WORLD_MAP, 0, 0, pos-32, 0, 32+(120-pos), 56, 120, 56);
    
    croppedDraw(_WORLD_MAP, 32+(120-pos), 0, 0, 0, 64 - (32+(120-pos)) , 56, 120, 56);
    
  } else {
    int pos = BRAZIL_TZ - ((h % 12) * TZ_SIZE);
    croppedDraw(_WORLD_MAP, 32-pos, 0, 0, 0, 64 - (32-pos), 56, 120, 56);
    croppedDraw(_WORLD_MAP, 0, 0, 120 - (32-pos), 0, (32-pos), 56, 120, 56);
  }

  Locator::getDisplay()->drawFastVLine(32, 0, 64, 0xf000);
  lastHour = h;
}


void Clockface::croppedDraw(const unsigned short* image_array, int x, int y, int anchorX, int anchorY, int cropX, int cropY, int w, int h)
{  
  int anchor = anchorX;
  for (int yy = anchorY; yy < cropY; yy++)
  {    
    for (int xx = 0; xx < cropX; xx++)
    {
      if (image_array[anchor] != MASK) {
        Locator::getDisplay()->drawPixel(xx + x , yy + y, image_array[anchor]);
      }

      anchor++;
    }
    anchor = anchor + (w - cropX);
  }
}
