#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase,
 * followed by a new line
 * Return: Always 0 (If it is a Success)
 */
int main(void)
{
	int i;
	char character;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (character = 'a'; character <= 'f'; character++)
	{
		putchar(character);
	}
	putchar('\n');
	return (0);
}
