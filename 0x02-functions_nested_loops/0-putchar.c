#include <unistd.h> 
#include "main.h"

/**
 * main - print the word "_putchar"
 * 
 * Return: Always 0 (sucess)
 */

int main(void)
{
	int i;
	char p[] = "_putchar"
	
	for (i=0; i<9; i++)
		{
		_putchar(p[i]);
		}
		_putchar('\n')
	return (0);
