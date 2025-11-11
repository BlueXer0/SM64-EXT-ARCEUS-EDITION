#include "SM64DS_PI.h"

void hook_020e50ac()
{
    if (PLAYER_ARR[0]->isFireYoshi)
    {
        if(INPUT_ARR[0].magnitude != 0._f && PLAYER_ARR[0]->currState == &Player::ST_WALK)
        {
            if(INPUT_ARR[0].buttonsHeld & Input::Y)
            {
                PLAYER_ARR[0]->horzSpeed = 0x038000_f;
            }
        }
    }

    if (PLAYER_ARR[0]->currHatChar == 0)
    {
        if(INPUT_ARR[0].magnitude != 0._f && PLAYER_ARR[0]->currState == &Player::ST_WALK)
        {
            if(INPUT_ARR[0].buttonsHeld & Input::Y)
            {
                PLAYER_ARR[0]->horzSpeed = 0x028000_f;
            }
        }
    }
    static constinit SharedFilePtr animFilePtr = 0x0917;
    Player::ANIM_PTRS[4*0x38 + 03] = &animFilePtr;

    static constinit SharedFilePtr animFilePtr1 = 0x0918;
    Player::ANIM_PTRS[4*0x53 + 03] = &animFilePtr1;

    static constinit SharedFilePtr animFilePtr2 = 0x0919;
    Player::ANIM_PTRS[4*0x9 + 03] = &animFilePtr2;

    static constinit SharedFilePtr animFilePtr3 = 0x091b;
    Player::ANIM_PTRS[4*0x19 + 03] = &animFilePtr3;

}