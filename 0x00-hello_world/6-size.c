#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int integerType;
char charType;
long int longintegerType;
long long int longlongintegerType;
float floatType;

printf("Size of a char: %ld byte(s)\n", sizeof(charType));
printf("Size of an int: %ld byte(s)\n", sizeof(integerType));
prinft("Size of a long int: %ld byte(s)\n", sizeof(longintegerType));
printf("Size of a long long int: %ld byte(s)\n", sizeof(longlongintegerType));
printf("Size of a float: %ld byte(s)\n", sizeof(floatType));
return (0);
}
