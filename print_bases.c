#include "main.h"

/**
 * write_bin - prints digit in binary form
 *
 * @arg: list of args
 * @m_buffer: main data struct
 *
 * Return: none - void function1
 */
void write_bin(va_list arg, struct main_buffer *m_buffer)
{
	unsigned int number = va_arg(arg, int);
	unsigned int n2 = number, count = 0;

	if (m_buffer->f > 0)
		flags_modifier(m_buffer);

	while (n2 /= 10)
		count++;
	check_overflow(m_buffer, count);
	convert_base(m_buffer, 2, number, 0);
}

/**
 * write_hexa - write hexadecimal number no caps
 *
 * @args: list of args
 * @m_buffer: main data struct
 * Return: none - void function
 */
void write_hexa(va_list args, struct main_buffer *m_buffer)
{
	unsigned int number = va_arg(args, int);
	unsigned int n2 = number, count = 0;

	if (m_buffer->f > 0)
	{
		if (number == 0 && m_buffer->f > 60)
			m_buffer->index = m_buffer->index;
		else
			flags_modifier(m_buffer);
	}

	while (n2 /= 16)
		count++;
	check_overflow(m_buffer, count);
	convert_base(m_buffer, 16, number, 1);
}

/**
 * write_HEXA - write hexadecimal number no caps
 *
 * @args: list of args
 * @m_buffer: main data struct
 * Return: none - void function
 */

void write_HEXA(va_list args, struct main_buffer *m_buffer)
{
	unsigned int number = va_arg(args, int);
	unsigned int n2 = number, count = 0;

	if (m_buffer->f > 0)
	{
		if (number == 0 && m_buffer->f > 60)
			m_buffer->index = m_buffer->index;
		else
			flags_modifier(m_buffer);
	}

	while (n2 /= 16)
		count++;

	check_overflow(m_buffer, count);
	convert_base(m_buffer, 16, number, 0);
}

/**
 * write_octal - write octadecimal number
 *
 * @args: list of args
 * @m_buffer: main data struct
 * Return: none - void function
 */
void write_octal(va_list args, struct main_buffer *m_buffer)
{
	unsigned int number = va_arg(args, int);
	unsigned int n2 = number, count = 0;

	if (m_buffer->f > 0)
	{
		if (number == 0 && m_buffer->f > 60)
			m_buffer->index = m_buffer->index;
		else
			flags_modifier(m_buffer);
	}

	while (n2 /= 8)
		count++;
	check_overflow(m_buffer, count);
	convert_base(m_buffer, 8, number, 0);
}
