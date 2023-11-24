#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
int cents;
int i = 0;
int coins[] = {25, 10, 5, 2, 1};
int coin_count = sizeof(coins) / sizeof(coins[0]);
int total_coins = 0;

if (argc != 2)
{
printf("Error\n");
return (1);
}
cents = atoi(argv[1]);

for (; i < coin_count; i++)
{
	while (cents >= coins[i])
	{
		cents -= coins[i];
		total_coins++;
	}
}
printf("%d\n", total_coins);
return (0);
}
