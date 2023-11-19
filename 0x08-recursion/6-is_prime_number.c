#include "main.h"
/** Helper function to check for prime numbers (part 2)
 * This function recursively checks divisibility from 2 to stop-1.If it finds any divisor, it returns 0(not prime), otherwise returns 1 (prime).
 **/
int is_prime_number2(int n,int stop, int i)
{
/** Base case: if we have checked divisibility up to stop, it's prime*/
if (i >= stop)
{
return 1;
}
/**If n is divisible by the current i, it's not a prime number*/
else if (n % i == 0)
{
return 0;
}
/** Continue checking for divisibility with the next i*/
else
{ 
/**Recursively call the function with the next i*/
is_prime_number2(n, stop, i + 1);
}
/** Function to check if a number is prime
This function handles base cases and calls the helper function is_prime_number2.*/
int is_prime_number(int n)
{
/** Base case: numbers less than or equal to 1 are not prime*/
if (n <= 1)
{
return 0;
}
/**Base case: 2 is a prime number*/
else if(n == 2)
{
return 1;
}
/**For numbers greater than 2, call the helper function is_prime_number2*/
else
{
/**The stop parameter is set to n/2, and the starting divisor is 2*/
return is_prime_number2(n, n/2, 2);
}
}
