#include <stdlib.h>
#include <stdio.h>
/**
*main - the main function prints 1 to 100
*fizz for multiples of 3 and buzz for multiples of 5 and fizzbuzz for both
*Return: 0
*/
int main(void)
{
int i;
char a[] = "Fizz";
char b[] = "Buzz";
char c[] = "FizzBuzz";
for (i = 1; i <= 100; i++)
{
if (i == 100)
printf("%s", b);
else if ((i % 3 == 0) && (i % 5 == 0))
printf("%s ", c);
else if (i % 3 == 0)
printf("%s ", a);
else if (i % 5 == 0)
printf("%s ", b);
else
printf("%d ", i);
}
printf("\n");
return (0);
}
