#include "ig_init.h"

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

void InitPlyr2(int film_no)
{
    memset(&plyr_wrk,0,0x400);

    plyr_wrk.hp = 500;
    plyr_wrk.spd = 5.5;
    plyr_wrk.pr_info.se_foot = 0xff;
    plyr_wrk.dop.room_no = 0xff;
    plyr_wrk.pr_info.camera_door = -1;
    plyr_wrk.pr_set = -1;
    plyr_wrk.po_set = -1;
    plyr_wrk.film_no = film_no;
    plyr_wrk.se_deadly = -1; 
    return;
}