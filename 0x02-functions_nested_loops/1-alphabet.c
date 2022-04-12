#include "main.h"
/*
 * main - check the code
 * Return: Always 0.
 */
void print_alphabet(void);
int main(void)
{
	print_alphabet();
	return (0);
}
void print_alphabet(void)
{
	char l;

	for(l='a';l<='z';l++)
	{
		_putchar(l);
		_putchar('\n');
	}

}
