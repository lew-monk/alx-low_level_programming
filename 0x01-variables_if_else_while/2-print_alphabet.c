#include <stdio.h>

/**
 * main - prints all lowercase letters
 * followed by a new line
 * Return: Always is 0 to indicate success
 */
int main(void)
{
    char character;

    for (character = 'a'; character <= 'z'; character++)
    {
        putchar(character);
    }
    putchar('\n');
    return (0);
}
