#include "main.h"
#include <stdio.h>

/**
 * _strlen - length
 * @s: string
 * Return: length string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
	{
		len++;
	}
	return (len);
}

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
 * reverse_array - reverse an array
 *
 * @a: array to be reversed
 *
 * Return: none - void function
 *
 */
void reverse_array(char *a)
{
	char temp;
	int beg = 0;
	int end = _strlen(a) - 1;

	while (beg < end)
	{
		temp = a[beg];
		a[beg] = a[end];
		a[end] = temp;
		beg++;
		end--;
	}
}

/**
 * convert_base - print number as chars using any base
 *
 * @base: number base convert
 * @num: number a convert
 * @s: buffer malloc
 * @pos: position
 * @h: Hexadecimal Caps
 *
 * Return: length string
 */
int convert_base(int base, unsigned int num, char *s, unsigned int pos, int h)
{
	unsigned int n = num, count = 1;
	char *temp;
	int i = 0, j = 1;
	char buf[17];
	char *ptr;

	_strncpy(buf, (h == 0) ? "0123456789ABCDEF" : "0123456789abcdef", 17);
	while (n)
	{
		count++;
		n /= base;
	}
	temp = malloc(sizeof(char) * (count + 2));
	if (temp == NULL)
	{
		free(temp);
		return (0);
	}
	ptr = &temp[count];
	while (num > 0)
	{
		*ptr = buf[num % base];
		num = num / base;
		ptr--, i++;
	}

	while (i >= 0)
	{
		pos = fill_malloc(s, ptr[j], pos);
		j++, i--;
	}
	free(temp);
	return (count);
}
