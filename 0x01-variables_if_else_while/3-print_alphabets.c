#include <stdio.h>

/**
 * main - prints all alphabet letters small and caps
 * followed by a new line
 * Return: is always 0 if successfull
 */
int main(void)
{
    char character;

    for(character = 'a'; character <= 'z'; character++)
        putchar(character);
    for(character = 'A'; character <= 'Z'; character++)
        putchar(character);
    putchar("\n");
    return (0);
}
