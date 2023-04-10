#include "main.h"

/**
 * get_endianness - Checks the endianness of the system.
 *
 * This function determines if the system is big endian or little endian by 
 * checking the value of the least significant byte of an unsigned int variable.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
    unsigned int x = 1;
    char *c = (char *) &x; /* Casts the unsigned int pointer to a char pointer. */

    return ((int) *c);  /*Returns the value of the least significant byte. */
}

