#include "main.h"

/**
 * write_num - prints an integer.
 * @args: argument
 * @m_buffer: main data struct
 * Return: none - void function
 */
void write_num(va_list args, struct main_buffer *m_buffer)
{
	int number = va_arg(args, int);
	int n2 = number;
	unsigned int count = 0;

	if (number < 0)
	{
		number *= -1;
		check_overflow(m_buffer, count);
		push_char(m_buffer, '-');
		m_buffer->f = 0;
	}

	if (m_buffer != NULL)
	{
		if (m_buffer->f > 0)
			flags_modifier(m_buffer);
	}
	while (n2 /= 10)
		count++;

	check_overflow(m_buffer, count);
	convert_base(m_buffer, 10, number, 0);
}

/**
 * write_unint - print unsigned int
 * @arg: string arguments
 * @m_buffer: main data struct
 * Return: none - void function
 */
void write_unint(va_list arg, struct main_buffer *m_buffer)
{
	unsigned long int number = va_arg(arg, unsigned long int);
	unsigned int n2 = number, count = 0;

	if (m_buffer != NULL)
	{
		if (m_buffer->f > 0)
			flags_modifier(m_buffer);
	}

	while (n2 /= 10)
		count++;

	check_overflow(m_buffer, count);
	convert_base(m_buffer, 10, number, 0);
}
