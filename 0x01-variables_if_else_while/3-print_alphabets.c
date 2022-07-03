#include <stdio.h>
/**
*main - the entry point
*conditions
*Return: Always 0
*/
int main(void)
{
	char a;
	char A;
	for (a = 'a'; a <= 'z'; a++)
		putchar(a);
	for (A = 'A'; A <= 'Z'; a++)
		putchar(A);
	putchar('\n');
	return (0);
}
