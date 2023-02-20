#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 * Main code to print different size of data type
*/

int main(void)
{
printf("Size of a char: byte(s)\n", sizeof(char));
printf("Size of an int: byte(s)\n", sizeof(int));
printf("Size of a long int: byte(s)\n", sizeof(long int));
printf("Size of a long long int: byte(s)\n", sizeof(long long int));
printf("Size of a float: byte(s)\n", sizeof(float));
return (0);
}
