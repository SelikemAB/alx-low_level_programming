#ifndef MAIN_HEADER
#define MAIN_HEADER

 /**
  * _putchar - writes/prints a character to stdout
  *
  * Function takes a char argument and returns the character.
  *
  * @c: The character
  * Return: The character of interest
  */
int _putchar(char c);

 /**
  * print_alphabet - prints the alphabet in lowercase, followed by a new line
  *
  * Function takes no argument.
  *
  * Return: The alphabets
  */
 void print_alphabet(void);
/**
  * print_alphabet_x10 - prints the alphabets 10 times, each on a new line.
  *
  * Function takes no argument.
  *
  * Return: The alphabets 10 times
  */
 void print_alphabet_x10(void);
/**
 * _islower - checks for lowercase character
 *
 * Function takes 1 int argument
 *
 * @c: The character
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c);
/**
 * _isalpha(int c) - checks for alphabetic characters.
 *
 * Function takes 1 int argument
 *
 * @c: The character
 * Return: 1 if c is a letter, lowercase or uppercase, 0 otherwise
 */
int _isalpha(int c);
/**
 * print_sign - prints the sign of a number
 *
 * Function takes 1 int argument
 *
 * @n: The integer number
 * Return: 1 and print + if n is positive, 0 and print 0 if n is zero
 * -1 and print - if n is negative
 */
int print_sign(int n);
/**
 * abs - computes absolute value of an integer
 *
 * Function takes 1 int argument
 *
 * @n: The integer number
 * Return: 0
 */
int _abs(int n);
/**
 * print_last_digit - prints the last digit of a number
 *
 * Function takes 1 int argument
 *
 * @n: The integer number
 * Return: the value of the last digit
 */
int print_last_digit(int n);
/**
 * jack_bauer - prints every minute of the day of Jack Bauer, starting from
 * 00:00  to 23:59
 *
 * Function takes no arguments
 *
 * Return: nothing
 */
void jack_bauer(void);
#endif
