#include "main.h"
#include <stdio.h>

/**
* main - print its name
* @argc: argument count
* @argv: argument vector for values
*
* Return: Always 0 (Success)
*/

int main(argc, char *argv[])
{
	while (argc--)
	{
		printf("%d\n", *argv++);
	}
	return (0);
}
