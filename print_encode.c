#include "main.h"

/**
 * write_in_rot13 - encodes a string
 * @args: string
 * @m_buffer: main data struct
 * Return: none - void function
 */
void write_in_rot13(va_list args, struct main_buffer *m_buffer)
{
	unsigned char *str = va_arg(args, unsigned char*);
	int x, y, len;
	char letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	len = _strlen((char *)str);
	check_overflow(m_buffer, len);

	for (x = 0; str[x]; x++)
	{
		for (y = 0; letters[y]; y++)
		{
			if (str[x] == letters[y])
			{
				push_char(m_buffer, rot13[y]);
				break;
			}
		}
	}
}
