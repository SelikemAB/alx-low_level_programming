#include "main.h"
#include <stdio.h>

/**

binary_to_uint - Convert a binary number to an unsigned int
@b: The binary string to convert
Return: The converted decimal number, or 0 if there is an unconvertible char
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int total = 0, power = 1;
int len = 0;
if (b == NULL)
return (0);
/* Check that the input string is a valid binary number */
for (; b[len]; len++)
{
if (b[len] != '0' && b[len] != '1')
return (0);
}
/* Convert binary string to decimal */
for (len--; len >= 0; len--, power *= 2)
{
if (b[len] == '1')
total += power;
}
return (total);
}
