#include "header.h"

int main(int argc, char *argv[])
{
    ALLEGRO_BITMAP *ball_bmp = NULL;
    ALLEGRO_BITMAP *background = NULL;
    ALLEGRO_DISPLAY *display = NULL;
    ALLEGRO_KEYBOARD_STATE KBstate;

    pingPong_ball  ball[10];
    int *num_of_ball;
    num_of_ball = malloc(sizeof(int));
    num_of_ball = atoi(argv[1]);

    srand( time( NULL ) ); /* seed the random function */
    /* first, set up Allegro and the graphics mode */
    al_init(); /* initialize Allegro */
    al_install_keyboard(); /* install the keyboard for Allegro to use */
    al_init_image_addon();

    display = al_create_display(SCREEN_W, SCREEN_H);

    for (int i=0; i<num_of_ball; i++)
    {
        ball[i].x = rand() %(SCREEN_W-BALL_SIZE); /* give the ball its initial x-coordinate */
        ball[i].y = rand() %(SCREEN_H-BALL_SIZE); /* give the ball its initial y-coordinate */
        ball[i].direction = rand() % 4;
        ball[i].speed = rand() % 5+2;
        ball[i].color = rand() % 5;
        switch (ball[i].color)
        {
        case RED:
            ball[i].img = al_load_bitmap( "./img/ball_red.bmp"); /* load the ball bitmap */
            break;
        case YELLOW:
            ball[i].img = al_load_bitmap( "./img/ball_yellow.bmp"); /* load the ball bitmap */
            break;
        case GREEN:
            ball[i].img = al_load_bitmap( "./img/ball_green.bmp"); /* load the ball bitmap */
            break;
        case BLUE:
            ball[i].img = al_load_bitmap( "./img/ball_blue.bmp"); /* load the ball bitmap */
            break;
        case PURPLE:
            ball[i].img = al_load_bitmap( "./img/ball_purple.bmp"); /* load the ball bitmap */
            break;
        } /* end switch */
    }


    while(1)
    {
        moveBall(ball,num_of_ball);
        show(ball,num_of_ball);
        al_flip_display();
        al_clear_to_color(al_map_rgb(10,50,100));

        background = al_load_bitmap( "./img/doraemon.png");
        al_draw_bitmap( background, SCREEN_W/9, SCREEN_H/16, 0);

        al_get_keyboard_state(&KBstate);
        if (al_key_down(&KBstate, ALLEGRO_KEY_ESCAPE)) break;
    }

    free(num_of_ball);

    return 0;
} /* end function main */





