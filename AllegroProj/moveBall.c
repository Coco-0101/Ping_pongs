#include "header.h"

void moveBall(pingPong_ball operand[],int num) /* moves the ball */
{
        for(int i=0; i<num; i++)
        {
            switch (operand[i].direction)
            {
            case DOWN_RIGHT:
                operand[i].x+=operand[i].speed; /* move the ball to the right */
                operand[i].y+=operand[i].speed; /* move the ball down */
                break;
            case UP_RIGHT:
                operand[i].x+=operand[i].speed; /* move the ball to the right */
                operand[i].y-=operand[i].speed; /* move the ball up */
                break;
            case DOWN_LEFT:
                operand[i].x-=operand[i].speed; /* move the ball to the left */
                operand[i].y+=operand[i].speed; /* move the ball down */
                break;
            case UP_LEFT:
                operand[i].x-=operand[i].speed; /* move the ball to the left */
                operand[i].y-=operand[i].speed; /* move the ball up */
                break;
            } /* end switch */

            if ( operand[i].y <= 0 || operand[i].y >= (SCREEN_H - BALL_SIZE) )
                operand[i].direction= reverseVerticalDirection(operand[i].direction); /* make it go the other way */

            /* if the ball is going off the left or right... */
            if ( operand[i].x <= 0 || operand[i].x >= (SCREEN_W - BALL_SIZE) )
                operand[i].direction= reverseHorizontalDirection(operand[i].direction); /* make it go the other way */
        }

        /* make sure the ball doesn't go off the screen */

        /* if the ball is going off the top or bottom... */

    } /* end function moveBall */
