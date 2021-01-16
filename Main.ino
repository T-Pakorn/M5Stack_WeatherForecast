#include <M5ez.h>
#include <ezTime.h>

#include "SystemJpeg.h"
#include "SleepJpeg.h"
#include "01.h"
#include "02.h"
#include "04.h"
#include "09.h"
#include "10.h"
#include "11.h"
#include "13.h"
#include "50.h"


ezMenu imagesForecast;

void setUpEzMenu() {
#include <themes/default.h>
#include <themes/dark.h>
  ezt::setDebug(INFO);
  ez.begin();
}

void setup() {
  wifiBegin();
  wiFiConnect();
  setUpEzMenu();
}

void loop() {
  mainMenuWeatherDay();
}

void mainMenuWeatherDay() {
  //imagesForecast.addItem(sleep_jpg, "Power Off", powerOff);
  imagesForecast.run();
}

void powerOff() {
  m5.powerOFF();
}
