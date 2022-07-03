#include <stdio.h>
/**
*main - Entry point
*arrange letters alphabetically
*Return:Always 0
**/
int main(void)
{
char reverse_alpha = 'z';
while (reverse_alpha >= 'a')
{
putchar(reverse_alpha);
reverse_alpha--;
}
putchar('\n');
return (0);
}
