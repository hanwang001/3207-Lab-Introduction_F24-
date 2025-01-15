#include <stdlib.h>

/* Function to return a random uppercase character from 'A' to 'Z' */
char randchar()
{
    return 'A' + (rand() % 26);  // Generates a random letter between A and Z.
}

