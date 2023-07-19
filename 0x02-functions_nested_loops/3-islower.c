#include "main.h"

/**
* int _islower -  checks for lowercase character.
*/

int _islower(int c)
{
char begin;
char end;
 if (c >= 'a' && c <= 'z') {
        return 1; // Character is lowercase
    } else {
        return 0; // Character is not lowercase
    }
}
