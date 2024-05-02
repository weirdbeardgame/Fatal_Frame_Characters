#pragma once
#include "common_types.h"

typedef struct
{ // 0x1c
    /* 0x00 */ u_char game;
    /* 0x01 */ u_char mode;
    /* 0x02 */ u_char init_flg;
    /* 0x03 */ u_char stts;
    /* 0x04 */ u_char msn_no;
    /* 0x05 */ u_char difficult;
    /* 0x06 */ u_char clear_count;
    /* 0x07 */ u_char rg_pht_cnt;
    /* 0x08 */ u_short ghost_cnt;
    /* 0x0c */ u_int pht_cnt;
    /* 0x10 */ u_int high_score;
    /* 0x14 */ u_int total_point;
    /* 0x18 */ u_int padding;
} INGAME_WRK;


extern INGAME_WRK ingame_wrk;