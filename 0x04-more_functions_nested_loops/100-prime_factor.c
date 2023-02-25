#include <stdio.h>
#include <stdlib.h>
/**
*main - prints largest prime factor
*Return: interger
*/
int main(void)
{
long n, c;
while (c < (n / 2))
{
if ((n % 2) == 0)
{
n /= 2;
continue;
}
for (c = 3; c < (n / 2); c += 2)
{
if ((n % c) == 0)
n /= c;
}
}
printf("%ld\n", n);
return (0);
}
