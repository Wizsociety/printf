#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * _putchar - Write a character to stdout
 * @c: The character to be written
 * Return: 1 on success, -1 on failure
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

int _print_string(char *str)
{
	int printed_disp = 0;

	if (str == NULL)
		return (0);
	while (*str)
	{
	printed_disp += _putchar(*str);
	str++;
	}
	return (printed_disp);
}

int _print_int(int n)
{
	int printed_disp = 0;

	if (n < 0)
	{
	printed_disp += _putchar('-');
	n = -n;
	}
	if (n / 10)
	printed_disp += _print_int(n / 10);
	printed_disp += _putchar((n % 10) + '0');
	return (printed_disp);
}

int _print_unsigned(unsigned int n)
{
	int printed_disp = 0;

	if (n / 10)
	printed_disp += _print_unsigned(n / 10);
	printed_disp += _putchar((n % 10) + '0');
	return (printed_disp);
}

int _print_octal(unsigned int n)
{
	int printed_disp = 0;

	if (n / 8)
	printed_disp += _print_octal(n / 8);
	printed_disp += _putchar((n % 8) + '0');
	return (printed_disp);
}
