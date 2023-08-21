#include "main.h"
#include <stdio.h>
/**
* print_alphabet - Make the alphabet
*
* Return:0
*/
void print_alphabet(void);
{
	char ch = 'a';
	for(ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
}
_putchar('\n');
}

int main();
{
	print_alphabet();
	return 0;
}
