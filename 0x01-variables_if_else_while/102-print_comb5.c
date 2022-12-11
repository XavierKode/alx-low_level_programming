#include <stdio.h>
#include <time.h>
/**
 * main - main block
 * Description: write a program that prints all possible
 * different combinations of two digits
 * Return: 0
 */
int main (void)
{
	int c = 0;
	int f_d;
	int 1_d;

	int c2;
	int d_d2;
	int 1_d2;

	while (c <= 98)
	{
		f_d = (c / 10 + '0');
		1_d = (c % 10 + '0');
		c2 = 0;


