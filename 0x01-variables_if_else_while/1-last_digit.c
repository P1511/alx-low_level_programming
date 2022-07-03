#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - a random number is assigned to a variable.
 * the condition
 * Return : Always 0
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX /2;
