#include "main.h"
/**
* _strcpy - Entry point
*
* @dest: char to check
* @src: char to check
*
* Return: 0 if success
*/

char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
		dest[a] = src[a];
	dest[a] = '\0';
	return (dest);
}
