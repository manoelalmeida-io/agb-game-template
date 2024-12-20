#include <gba_console.h>
#include <gba_video.h>
#include <gba_interrupt.h>
#include <gba_systemcalls.h>
#include <gba_input.h>
#include <stdio.h>
#include <stdlib.h>

//---------------------------------------------------------------------------------
// Program entry point
//---------------------------------------------------------------------------------
int main(void) {

  *(unsigned int*)0x04000000 = 0x0403;

  ((unsigned short*)0x06000000)[120+80*240] = 0x001F;
  ((unsigned short*)0x06000000)[136+80*240] = 0x03E0;
  ((unsigned short*)0x06000000)[120+96*240] = 0x7C00;

  while(1);

  return 0;
}
