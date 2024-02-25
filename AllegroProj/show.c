#include "header.h"

void show(pingPong_ball operand[],int num)
{
    ALLEGRO_BITMAP *ball_bmp = NULL;
    for(int i=0;i<num;i++)
    {
        ball_bmp = operand[i].img;
        al_draw_bitmap( ball_bmp, operand[i].x, operand[i].y, 0);


        al_rest(0.001);
    }
}
