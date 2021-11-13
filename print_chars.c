#include "main.h"

/**
 * write_char - print %c
 * @args: string ...
 * @m_buffer: main data struct
 * Return: none - void function
 */
void write_char(va_list args, struct main_buffer *m_buffer)
{
	char letter = va_arg(args, int);

	if (m_buffer->f > 0)
		flags_modifier(m_buffer);

	check_overflow(m_buffer, 1);
	push_char(m_buffer, letter);
}

/**
 * write_str - print %s
 * @args: string ...
 * @m_buffer: main data struct
 * Return: length write
 */
void write_str(va_list args, struct main_buffer *m_buffer)
{
	int i = 0;
	char *letters = va_arg(args, char *);
	char *isnull = "(null)";

	if (m_buffer->f > 0)
		flags_modifier(m_buffer);

	if (letters != NULL)
	{
		for (i = 0; *(letters + i); i++)
		{
			push_char(m_buffer, letters[i]);
		}
	}
	else
	{
		for (i = 0; *(isnull + i); i++)
		{
			push_char(m_buffer, isnull[i]);
		}
	}
}

