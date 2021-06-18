#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase,
 * followed by a new line
 * Return: Always 0 (If it is a Success)
 */
int main(void)
{
	int character;

	for (character = 'a'; character <= 'z'; character++)
		putchar(character);
	for (character = 'A'; character <= 'Z'; character++)
		putchar(character);
	putchar('\n');
	return (0);
}
