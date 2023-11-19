#include "main.h"
/** Helper function to check for prime numbers (part 2)
 * This function recursively checks divisibility from 2 to stop-1.If it finds any divisor, it returns 0(not prime), otherwise returns 1 (prime).
 **/
int is_prime_number2(int n,int stop, int i)
{
if (i >= stop)
{
return 1;
}
else if (n % i == 0)
{
return 0;
}
else
{ 
is_prime_number2(n, stop, i + 1);
}
}
/** Function to check if a number is prime
This function handles base cases and calls the helper function is_prime_number2.*/
int is_prime_number(int n)
{
if (n <= 1)
{
return 0;
}
else if(n == 2)
{
return 1;
}
else
{
return is_prime_number2(n, n/2, 2);
}
}
