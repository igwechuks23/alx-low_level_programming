#include <stdio.h>
/**
*main - Entry point
*Return: Always 0
*/
void print_alphabet(void);
int main(void)
{
int i;
for (i = 97; i <= 122; i++)
{
putchar((char)i);
}
putchar('\n');
return (0);
}
