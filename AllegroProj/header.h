#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <allegro5/allegro.h>
#include <allegro5/allegro_image.h>
#include <allegro5/allegro_primitives.h>
//#include <windows.h>

/* symbolic constants for the ball's possible directions */
#define DOWN_RIGHT 0
#define UP_RIGHT 1
#define DOWN_LEFT 2
#define UP_LEFT 3

#define RED 0
#define YELLOW 1
#define GREEN 2
#define BLUE 3
#define PURPLE 4

#define SCREEN_W 640
#define SCREEN_H 480
#define BALL_SIZE 40

/* function prototypes */

typedef struct pingPong
{
    int x; /* the ball's x-coordinate */
    int y; /* the ball's y-coordinate */
    int direction; /* the ball's direction */
    int color;
    int speed; /* the ball's speed */
    ALLEGRO_BITMAP *img;
} pingPong_ball,*pingPong_ball_ptr;

void moveBall(pingPong_ball operand[],int num);
void screen(pingPong_ball operand[],int num);
reverseVerticalDirection( int direction );
reverseHorizontalDirection(int direction );

#endif // HEADER_H_INCLUDED
