#include "3-calc.h"
/**
 * op_add - adds two numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return: add.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function that subtracts two numbers
 * @a: first integer
 * @b: second integer
 * Return: differencce of two numbers
 */

int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplies two numbers
 * @a: first integer
 * @b: second integer
 * Return: product of two numbers
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides two numbers
 * @a: first integer
 * @b: second integer
 * Return: division of two numbers
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - adds two numbers
 * @a: first integer
 * @b: second integer
 * Return: remainder of division of two numbers
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
