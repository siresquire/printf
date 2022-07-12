#include <unistd.h>

/**
 * _putchar - print char with stdout
 * @ch: char to print
 * Return: Output.
 */
int _putchar(char ch)
{
	static int count;
	static char buffer[1024];

	if (ch == -1)
	{
		count = 0;
		return (0);
	}
	if (ch == -2 || count == 1024)
	{
		write(1, buffer, count);
		count = 0;
	}
	if (ch != -1 && ch != -2)
	{
		buffer[count] = ch;
		count++;
		return (1);
	}
	return (0);
}

