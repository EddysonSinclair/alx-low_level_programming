#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code for Holberton School students.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, bytes;
	unsigned char *opcodes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	opcodes = (unsigned char *)&main;
	for (i = 0; i < bytes; i++)
	{
		printf("%02x", opcodes[i]);
	}
	printf("\n");
	return (0);


}
