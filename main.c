/*
    ChibiOS/RT - Copyright (C) 2006-2013 Giovanni Di Sirio

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

        http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.
*/

#include "ch.h"
#include "hal.h"

#include "gfx.h"

/*
 * Application entry point.
 */
int main(void) {

  /*
   * System initializations.
   * - HAL initialization, this also initializes the configured device drivers
   *   and performs the board-specific initializations.
   * - Kernel initialization, the main() function becomes a thread and the
   *   RTOS is active.
   */
  halInit();
  chSysInit();

  /* Initialize and clear the display */
  gfxInit();

  //font_t font1;

  /* Draw draw draw */
  // Get the fonts we want to use
  //font1 = gdispOpenFont("Archangelsk Regular 12");

  // Demonstrate our other fonts
  //gdispDrawString(10, 10, "Hello world !!!", font1, White);

  //gdispGDrawLine(GDISP, 0, 0, 50, 50, Black );
  gdispGClear(GDISP, Black);
  
  // Wait forever
  while(TRUE) {
    gfxSleepMilliseconds(500);
  }
}
