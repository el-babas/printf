#include "main.h"

/**
 * check_state - checks correspondant state for each char
 *
 * @c: char to be evaluated
 *
 * Return: STATE
 *
 */
int check_state(char c)
{
	if (c == '%')
		return (FORM_STATE);
	else
		return (NORM_STATE);
}

/**
 * check_sub_state - checks correspondant sub state for each char
 *
 * @c: char to be evaluated
 *
 * Return: SUB STATE
 *
 */
int check_sub_state(char c)
{
	switch (c)
	{
	case '+':
	case ' ':
	case '#':
		return (FLAGS_SUB_STATE);
	case 'l':
	case 'h':
		return (LEN_SUB_STATE);
	case '.':
		return (PREC_SUB_STATE);
	default:
		return (SPEC_SUB_STATE);
	}
	return (-1);
}

/**
 * check_sharp_state - checks correspondant sharp state
 *
 * @c: char to be evaluated
 *
 * Return: sharp state = 61, 62 or 63 (octal, hexa or HEXA)
 *
 */
int check_sharp_state(char c)
{
	switch (c)
	{
	case 'o':
		return (FLAGS_SHARP_OCTAL);
	case 'x':
		return (FLAGS_SHARP_HEXA);
	case 'X':
		return (FLAGS_SHARP_HEXA_CAPS);
	default:
		return (SPEC_SUB_STATE);
	}
	return (-1);
}

/**
 * flags_modifier - adds modifier accordin to flags: +, space or #
 *
 * @m_buffer: main buffer storing data
 *
 * Return: none - void function
 */
void flags_modifier(struct main_buffer *m_buffer)
{
	if (m_buffer != NULL)
	{
		switch (m_buffer->f)
		{
		case FLAGS_PLUS:
			check_overflow(m_buffer, 1);
			push_char(m_buffer, '+');
			break;
		case FLAGS_SPACE:
			check_overflow(m_buffer, 1);
			push_char(m_buffer, ' ');
			break;
		case FLAGS_SHARP_OCTAL:
			check_overflow(m_buffer, 1);
			push_char(m_buffer, '0');
			break;
		case FLAGS_SHARP_HEXA:
			check_overflow(m_buffer, 1);
			push_char(m_buffer, '0');
			check_overflow(m_buffer, 1);
			push_char(m_buffer, 'x');
			break;
		case FLAGS_SHARP_HEXA_CAPS:
			check_overflow(m_buffer, 1);
			push_char(m_buffer, '0');
			check_overflow(m_buffer, 1);
			push_char(m_buffer, 'X');
			break;
		default:
			break;
		}
	}
}
