#include <stdio.h>
/***
* main - print alphabet if not q or e
*Return 0 success
*/

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{	
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
	}
	putchar ('\n');
	return (0);
}




