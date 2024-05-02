#pragma once
#include <stdio.h>
#include <string.h>
#include "ff1_plyr_ctrl.h"

PLYR_WRK plyr_wrk;

/*void PlyrHPdwonCtrl()
{
    u_short down;

    if (plyr_wrk.sta & 0x800)
    {    
        if (hp_down_deg > 2)
        {
            down = 2;
            hp_down_deg -= 2;
        }
        else
        {

            down = hp_down_deg;
            plyr_wrk.sta &= 0xfffff7ff;
        }

        plyr_wrk.hp = (plyr_wrk.hp < down) ? 0 : plyr_wrk.hp - down;

        if (plyr_wrk.hp != 0)
        {
            return;
        }
        
        if (plyr_wrk.hp == 0)
        {               
            if (poss_item[8] > 0)
            {
                poss_item[8] -= 1;
                plyr_wrk.sta &= 0xfffff7ff; 
                plyr_wrk.sta |= 0x4000;
                SeStartFix(6,0,0x1000,0x1000,0);
                hp_down_deg = 0;
            }
            else if (ingame_wrk.game == 1)
            {
                CallMissionFailed();
            }
            else
            {
                plyr_wrk.sta &= 0xfffff7ff;
                if (plyr_wrk.se_deadly != -1)
                {
                    SeFadeFlame(plyr_wrk.se_deadly, 60, 0);
                }
                SetPlyrAnime(64,10);  
                StartGameOver();
            }
        }
    }
    else if (plyr_wrk.sta & 0x4000)
    {
        plyr_wrk.hp += 5;
        if (plyr_wrk.hp >= 500)
        {
            plyr_wrk.sta &= 0xffffbfff; 
            plyr_wrk.hp = 500;  
        }
    }
}*/