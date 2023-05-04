#include "main.h"

/**
  * _putchar- write character digit
  * @character - display character printed
  * Return - 1 if success, -1 for error 
  */

int _putchar(char c)
{
	return (write(1, &c,1));
}
