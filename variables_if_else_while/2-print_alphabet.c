#include <stdio.h>
/**
* main - print if the number is postive, zero, or negative
* Return: 0
*/
int main(void)
{
char ch;
char m;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
	putchar(ch);
}
for (m = 'A'; m <= 'Z'; m++)
{
	putchar(m);
}

putchar('\n');
return (0);
}
