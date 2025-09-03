#include "SM64DS_PI.h"

void hook_020e50ac()
{
    if (PLAYER_ARR[0]->isFireYoshi)
    {
        if(INPUT_ARR[0].magnitude != 0._f && PLAYER_ARR[0]->currState == &Player::ST_WALK)
        {
            if(INPUT_ARR[0].buttonsHeld & Input::Y)
            {
                PLAYER_ARR[0]->horzSpeed = 0x043000_f;
            }
        }
    }
    if (PLAYER_ARR[0]->currHatChar == 0 && !PLAYER_ARR[0]->isFireYoshi)
    {
        if(INPUT_ARR[0].magnitude != 0._f && PLAYER_ARR[0]->currState == &Player::ST_WALK)
        {
            if(INPUT_ARR[0].buttonsHeld & Input::Y)
            {
                PLAYER_ARR[0]->horzSpeed = 0x028000_f;
            }
        }
    }
}