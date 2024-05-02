#pragma once
#include <stdio.h>
#include <string.h>
#include "FatalFrame1/ff1_plyr.h"

PLYR_WRK plyr_wrk;

void InitPlyr()
{
    memset(&plyr_wrk,0,0x400);
    plyr_wrk.hp = 500;
    plyr_wrk.spd = 5.5f;
    plyr_wrk.pr_info.se_foot = 255; // = 0xff;
    plyr_wrk.dop.room_no = 255; // = 0xff;
    plyr_wrk.film_no = 1;
    plyr_wrk.pr_info.camera_door = -1;
    plyr_wrk.pr_set = -1;
    plyr_wrk.po_set = -1;
    plyr_wrk.se_deadly = -1;
}