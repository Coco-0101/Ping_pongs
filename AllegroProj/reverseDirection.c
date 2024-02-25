#include "header.h"

reverseVerticalDirection(int direction) /* reverse the ball's up-down direction */
{
    switch (direction)
    {
    case DOWN_RIGHT:
        direction = UP_RIGHT;
        break;
    case UP_RIGHT:
        direction = DOWN_RIGHT;
        break;
    case DOWN_LEFT:
        direction = UP_LEFT;
        break;
    case UP_LEFT:
        direction = DOWN_LEFT;
        break;
    } /* end switch */

    return direction;
} /* end function reverseVerticalDirection */

reverseHorizontalDirection(int direction) /* reverses the horizontal direction */
{
    switch (direction)
    {
    case DOWN_RIGHT:
        direction = DOWN_LEFT;
        break;
    case UP_RIGHT:
        direction = UP_LEFT;
        break;
    case DOWN_LEFT:
        direction = DOWN_RIGHT;
        break;
    case UP_LEFT:
        direction = UP_RIGHT;
        break;
    } /* end switch */

    return direction;
} /* end function reverseHorizontalDirection */
