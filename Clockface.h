#pragma once

#include <Arduino.h>

#include <Adafruit_GFX.h>
#include <Tile.h>
#include <Locator.h>
#include <Game.h>
#include <Object.h>
#include <ImageUtils.h>
#include <ColorUtil.h>

#include "IClockface.h"

#include "small4pt7b.h"
#include "worldmap.h"
#include "worldmap_mask.h"

class Clockface: public IClockface {
  private:
    Adafruit_GFX* _display;
    CWDateTime* _dateTime;
    void updateMap();
    void croppedDraw(const unsigned short* image_array, int x, int y, int anchorX, int anchorY, int cropX, int cropY, int w, int h);
    
  public:
    Clockface(Adafruit_GFX* display);
    void setup(CWDateTime *dateTime);
    void update();
};
