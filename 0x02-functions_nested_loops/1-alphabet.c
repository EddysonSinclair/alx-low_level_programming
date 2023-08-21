#include "main.h"
#include <stdio.h>
/**
* print_alphabet - Make the alphabet
*
* Return:void
*/
int main()
{

    // Get the character to be written
    char ch = 'a';

    // Write the Character to stdout
    for (ch = 'a'; ch <= 'z'; ch++)
        putchar(ch);

    return (0);
}
