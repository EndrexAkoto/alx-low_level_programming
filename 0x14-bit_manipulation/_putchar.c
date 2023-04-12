#include "main.h"

/**
  * _putchar- will write the character of a digit
  * @character - will display a character to be printed
  * Return - 1 if success and -1 when error is displayed
  */

int _putchar(char c)
{
	return (write(1, &c,1));
}
