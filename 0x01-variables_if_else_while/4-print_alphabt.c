#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print all the letters except q and e
 * Return: Alphabet 0 (Lowercase except q & e)
 */

int main(void)

{
	char low, e, q;

	e = 'e';
	q = 'q';

	for (low = 'a'; low <= 'z'; low++)
	{
	if (low != e && low != q)
	putcharr(low);
	}
	putchar('\n');
	return (0);

}
