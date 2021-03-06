/*
MIT License

Copyright (c) 2019 Phil Bowles <esparto8266@gmail.com>
   github     https://github.com/philbowles/esparto
   blog       https://8266iot.blogspot.com     
   groups     https://www.facebook.com/groups/esp8266questions/
              https://www.facebook.com/Esparto-Esp8266-Firmware-Support-2338535503093896/ 

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

/*
 *    Y O U   M U S T   E N A B L E   M O R S E   S U P P O R T   F I R S T!
 *    ======================================================================
 *    bY EDITING THE CONFIG.H FILE AND un-COMMENTING //#define ESPARTO_MORSE_SUPPORT
 * 
 *    Demonstrates LED flashing of text in morse code.
 *    
 *   Text isconverted to dot and dashes as seen in "Blinky_Morse" example
 *   For those interested, the timing used is "Farnsworth" timing where dash = 3x dot , space = 3x dot, etc
 *  
 *   Flashing the pattern requires a "timebase" (in mSec)  - this is just the speed @ which
 *   each dot/dash/space is acted upon. Lower values make the whole pattern repeat faster, larger values make it slower
 *   175 is a good choice to start, try varying it
 */
#include <ESPArto.h>
ESPArto  Esparto;

void setupHardware() {
  ESPARTO_HEADER(Serial); // not necessary, just helps does the Serial begin for you
  // define BUILTIN_LED as output. Most ESP8266 have LED as "active LOW" i.e. it is ON when pin is 0
  // and is OFF when pin is 1
  Esparto.Output(BUILTIN_LED);
  Esparto.flashMorseText("S O S",175); // timebase = 175ms, try lower and/or higher values
}
