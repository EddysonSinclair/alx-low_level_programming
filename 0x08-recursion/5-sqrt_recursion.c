#include "main.h"
#include <math.h>

/**
 * _sqrt_recursion2 - recursive function to find square root
 * @n: the number to find the square root of
 * @sqrt: current estimate of the square root
 * Return: the square root or -1 if not found
 */
float _sqrt_recursion2(int n, float sqrt)
{
    if (fabs(sqrt * sqrt - n) < 0.00001) {
        return sqrt;
    }

    sqrt = 0.5 * (sqrt + n / sqrt);
    return _sqrt_recursion2(n, sqrt);
}

/**
 * _sqrt_recursion - finds the square root of a number
 * @n: the number to find the square root of
 * Return: the square root or -1 if not found
 */
int _sqrt_recursion(int n)
{
    if (n < 0) {
        return -1;
    }

    if (n == 0 || n == 1) {
        return n;
    }

    float sqrt = (float)n / 2.0;
    return (int)_sqrt_recursion2(n, sqrt);
}
