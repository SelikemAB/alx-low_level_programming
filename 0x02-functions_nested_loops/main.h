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

#endif
