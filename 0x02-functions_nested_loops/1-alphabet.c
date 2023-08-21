#include "main.h"
#include <stdio.h>
/**
* print_alphabet - Make the alphabet
*
* Return:void
*/
void print_alphabet(void);{
int main(void){
	char ch;
	for(ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	printf("%c \n", ch);
	return(void);
}
}
