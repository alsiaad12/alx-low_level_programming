#include "main.h"

/**
* _isdigit - Returns 1 if c is a digit
* @c: takes in a character
* Return: 0 for int, 1 for digit
**/
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
