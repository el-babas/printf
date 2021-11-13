#include "main.h"

/**
 * norm_state - checks
 *
 * @c: format c
 * @m_buffer: main data struct
 * @state: pointer to state
 *
 */
void norm_state(char c, struct main_buffer *m_buffer, int *state)
{
	switch (c)
	{
		case '%':
			*state = FORM_STATE;
			break;
		default:
			push_char(m_buffer, c);
			break;
	}
}

/**
 * form_state - checks dentro formato
 *
 * * @s: estado dentro de formato
 * @sb: sub stado
 * @m_buffer: main data struct
 * @f: char of format
 *
 * Return: 1 if is true, 0 if false
 *
 */
int form_state(int sb, int *s, struct main_buffer *m_buffer, char f)
{
	int isTrue = 1;

	if (f == '%')
	{
		push_char(m_buffer, '%');
		*s = NORM_STATE;
		return (-1);
	}

	switch (sb)
	{
	case FLAGS_SUB_STATE:
		m_buffer->f = get_sub_mod(f, sb);
		break;
	case PREC_SUB_STATE:
		m_buffer->p = get_sub_mod(f, sb);
		break;
	case LEN_SUB_STATE:
		m_buffer->f = get_sub_mod(f, sb);
		break;
	default:
		isTrue = 0;
		break;
	}

	return (isTrue);
}
