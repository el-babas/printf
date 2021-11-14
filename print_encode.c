#include "main.h"

/**
 * rot13 - encodes a string
 * @s: string
 * @m_buffer: main data struct
 * Return: none - void function
 */
void write_in_rot13(struct main_buffer *m_buffer, char *s)
{
	int x, y;
	char letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (x = 0; s[x]; x++)
	{
		for (y = 0; letters[y]; y++)
		{
			if (s[x] == letters[y])
			{
				s[x] = rot13[y];
				break;
			}
		}
	}
}
