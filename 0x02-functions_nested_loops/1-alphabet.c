#include "stdio.h"
#include "main.h"
#include "print_alphabet.h"
/**
* print_alphabet - Make the alphabet
*
* Return:void
*/
void print_alphabet();
{
	char i;
	for(i = 'a'; i <= 'z'; i++)
	       putchar(i);
	printf("%c \n", i);

	return(0);
}
