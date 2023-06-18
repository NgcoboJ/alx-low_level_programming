#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -  Print the lowercase alphabet in reverse
 * Return: Alphabet 0 (reverse)
 */

int main(void)

{

	char low;

	for (low = 'z'; low >= 'a'; low--)
	putchar(low);
	putchar('\n');

	return (0);

}
