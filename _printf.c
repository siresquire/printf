#include "main.h"

/**
 * _printf - prints$
 * @format: format
 * Return: nb of printed characters
 */

int _printf(const char *format, ...)
{
	int  (*structyp)(va_list);
	unsigned int pri_c = 0;
	va_list ap;

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	va_start(ap, format);
	_putchar(-1);
	while (format[0])
	{
		if (format[0] == '%')
		{
			structyp = manager(format);
			if (structyp)
			{
				pri_c += structyp(ap);
			}
			else if (format[1] != '\0')
			{
				pri_c += _putchar('%');
				pri_c += _putchar(format[1]);
			}
			else
			{
				pri_c += _putchar('%');
				break;
			}
			format += 2;
		}
		else
		{
			pri_c += _putchar(format[0]);
			format++;
		}
	}
	_putchar(-2);
	va_end(ap);
	return (pri_c);
}
