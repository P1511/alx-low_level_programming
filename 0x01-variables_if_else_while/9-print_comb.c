#include <stdio.h>
/**
*main - entry point
*prints digits
*Return: Always 0
**/
int main(void)
{
int c;

for (c = '0'; c <= '9'; c++)
{
putchar(c);
if (c != '9')
{
putchar(',');
putchar(' ');
}
}
return (0);
}
