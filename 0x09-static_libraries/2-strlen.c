#include "main.h"
/**
* _strlen - writes strlen
* @s: string to count
*
* Return: string length
*/

int _strlen(char *s)
{
	int charCount = 0;

	while (s[charCount] != '\0')
	{
		charCount++;
	}
	return (charCount);
}
