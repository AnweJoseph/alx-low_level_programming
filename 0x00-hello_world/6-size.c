#include <stdio.h>
/**
 * main - This program should print sizes of various types
 * Return: 0
*/
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %lu byte(S)\n", (unsigned long)sizeof(a));
	printf("Size of a int: %lu byte(S)\n", (unsigned long)sizeof(b));
	printf("Size of a long int: %lu byte(S)\n", (unsigned long)sizeof(c));
	printf("Size of a long long: %lu byte(S)\n", (unsigned long)sizeof(d));
	printf("Size of a float: %lu byte(S)\n", (unsigned long)sizeof(e));
	return (0);
}
