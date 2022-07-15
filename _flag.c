#include "main.h"

/**
 * _flags - Calculates active flags
 * @format: Formatted string in which to print the arguments
 * @i: Take a parameter.
 * Return: Flags
 */
int _flags(const char *format, int *i)
{
	int j, count;
	int f = 0;
	const char FLAGS_CH[] = {'-', '+', '0', '#', ' ', '\0'};
	const int FLAGS_ARR[] = {F_MINUS, F_PLUS, F_ZERO, F_HASH, F_SPACE, 0};

	for (count = *i + 1; format[count] != '\0'; count++)
	{
		for (j = 0; FLAGS_CH[j] != '\0'; j++)
			if (format[count] == FLAGS_CH[j])
			{
				f |= FLAGS_ARR[j];
				break;
			}
		if (FLAGS_CH[j] == 0)
			break;
	}
	*i = count - 1;
	return  (f);
}
