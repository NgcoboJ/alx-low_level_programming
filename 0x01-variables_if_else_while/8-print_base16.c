#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print all the numbers of base 16 in lowercase
 * Return: Base16 0 (Success)
 */

int main(void)

{

	int d;
	char low;

	for (d = '0'; d <= '9'; d++)
	putchar(d);

	for (low = 'a'; low <= 'f'; low++)
	putchar(low);
	putchar('\n');

	return (0);

}
