#include "main.h"
#include <stdio.h>
/**
* _isalpha - entry point
* @c: integer value it receives
* Description: checks if alphabet
* Return: 1 if true. 0 if false
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}



