#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * _printf - Custom printf function
 * @format: The format string containing format specifiers
 *
 * Return: The number of characters printed (excluding the null byte)
 */
int _printf(const char *format, ...)
{
	va_list args;
	int printed_disp = 0;

	va_start(args, format);

	while (*format)
	{
	if (*format == '%')
	{
	format++;
	switch (*format)
	{
	case 'c':
		printed_disp += _putchar(va_arg(args, int));
		break;
	case 's':
		printed_disp += _print_string(va_arg(args, char *));
		break;
	case 'd':
	case 'i':
		printed_disp += _print_int(va_arg(args, int));
		break;
	case 'u':
		printed_disp += _print_octal(va_arg(args, unsigned int));
		break;
	case 'o':
		printed_disp += _print_octal(va_arg(args, unsigned int));
		break;
	case 'x':
		printed_disp += _print_hex(va_arg(args, unsigned int), 0);
		break;
	case 'X':
		printed_disp += _print_hex(va_arg(args, unsigned int), 1);
		break;
	case '%':
		printed_disp += _putchar('%');
		break;
	default:
		printed_disp += _putchar('%');
		printed_disp += _putchar(*format);
	}
	}
	else
	{
	printed_disp += _putchar(*format);
	}
	format++;
	}
	va_end(args);
	return (printed_disp);
}
