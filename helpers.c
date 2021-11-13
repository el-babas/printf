#include "main.h"

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
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}

/**
 * convert_base - print number as chars converting to any base
 *
 * @m: main data structure
 * @b: number base convert
 * @num: number a convert
 * @h: Hexadecimal Caps
 *
 * Return: none - void function
 */
void convert_base(struct main_buffer *m, int b, unsigned int num, int h)
{
	unsigned int n = num, count = 1;
	char *temp, buf[17], *ptr;
	int i = 0, j = 0;

	_strncpy(buf, (h == 0) ? "0123456789ABCDEF" : "0123456789abcdef", 17);
	if (n == 0)
	{
		push_char(m, '0');
	}
	while (n /= b)
		count++;
	temp = malloc(sizeof(char) * (count + 1));
	if (temp == NULL)
	{
		free(temp);
	}
	ptr = &temp[count], *ptr = '\0', ptr--;
	while (num > 0)
	{
		*ptr = buf[num % b];
		num = num / b;
		ptr--, i++;
	}
	while (i > 0)
	{
		push_char(m, temp[j]);
		j++, i--;
	}
	free(temp);
}

/**
 * reverse_string - reverses a string
 *
 * @m_buffer: main data struct
 * @str: str
 *
 * Return: none - void function
 */
void reverse_string(struct main_buffer *m_buffer, char *str)
{
	int x = 0;

	while (*(str + x))
		x++;
	for (x = x - 1; x >= 0; x--)
	{
		push_char(m_buffer, str[x]);
	}
}

/**
 * struct_init - init main data structure
 *
 * @m_buffer: main data struc
 *
 * Return: non - void finct
 */

void struct_init(struct main_buffer *m_buffer)
{
	m_buffer->index = 0;
	m_buffer->len = 0;
	m_buffer->f = 0;
	m_buffer->p = 0;
	m_buffer->l = 0;
	m_buffer->buffer_data = malloc(sizeof(char) * BUFFERSIZE);
}


