#include <tps.h>

int main(void) {
  tps_createWindow("Titre", 800, 600);
  while(tps_isRunning()) {
    tps_background(255,255,255);
    tps_setColor(0,250,0);
    tps_fillRect(0, 300, 800, 300);
    tps_setColor(0,100,200);
    tps_fillRect(250, 150,300, 300);
    tps_setColor(200,100,0);
    tps_fillTriangle(250, 150, 550, 150, 400, 50);
    tps_render();
  }
  tps_closeWindow();
  return 0;
}