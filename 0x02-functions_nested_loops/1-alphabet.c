#include "stdio.h"
/**
* print_alphabet - Make the alphabet
*
* Return:void
*/
char print_alphabet(void)
{
	char i;
	for(i = 'a'; i <= 'z'; i++)
	       putchar(i);
	printf("%c \n", i);

	return(0);
}
