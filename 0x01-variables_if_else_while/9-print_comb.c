#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char t = 48;

	while (t != 57)
	{
		putchar(t);
		if (t != 57)
		{
			putchar(',')
		}
		t++;
	}
	putchar('\n');
	putchar();
	return (0);
}	
