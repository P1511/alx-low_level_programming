#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
*main - entry
*print single digits
*Return: Always 0
**/
int main(void)
{
int d;
for (d = '0'; d <= '9'; d++)
putchar(d);
putchar('\n');
return (0);
}
