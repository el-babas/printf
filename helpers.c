#include "main.h"

/**
 * _strncpy - copy a string into another
 * @dest: string dest
 * @src: string src
 * @n: number of bytes to get from dest
 *
 * Return: pointer to string dest
 *
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}

/**
 * print_number - prints an integer.
 *
 * @n: integer n to print using _putchar
 *
 * Return: none - void function
 *
 *
 */
int print_number(int n)
{
	unsigned int r;
	int _length = 0;

	if (n < 0)
	{
		_putchar(45);
		n *= -1;
		_length++;
	}
	r = n;

	if (r / 10)
	{
		_length += print_number(r / 10);
	}
	_putchar(r % 10 + '0');
	_length++;
	return (_length++);
}

/**
 * convert_base - print number as chars converting to any base
 *
 * @base: number base convert
 * @num: number a convert
 * @h: Hexadecimal Caps
 *
 * Return: length string
 */

int convert_base(int base, unsigned int num, int h)
{
	unsigned int n = num, _length = 1;
	char *temp, buf[17], *ptr;
	int i = 0, j = 0;

	_strncpy(buf, (h == 0) ? "0123456789ABCDEF" : "0123456789abcdef", 17);
	while (n /= base)
		_length++;
	temp = malloc(sizeof(char) * (_length + 1));
	if (temp == NULL)
	{
		free(temp);
		return (0);
	}
	ptr = &temp[_length], *ptr = '\0', ptr--;
	while (num > 0)
	{
		*ptr = buf[num % base];
		num = num / base;
		ptr--, i++;
	}
	ptr = '\0';
	while (i > 0)
	{
		_putchar(temp[j]);
		j++, i--;
	}
	free(temp);
	free(ptr);
	return (_length);
}
