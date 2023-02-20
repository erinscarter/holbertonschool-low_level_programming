#include "main.h"
#include <stdio.h>

/**
* main - print its name
* @argc: argument count
* @argv: argument vector for values
*
* Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
