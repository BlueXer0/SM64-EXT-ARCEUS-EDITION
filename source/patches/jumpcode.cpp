#include "SM64DS_PI.h"

extern uint16_t characterJumpHeights[4];
asm("characterJumpHeights = 0x020ff140");

void hook_0202cc14()
{
    characterJumpHeights[3] = 0x1100;
}