#include "main.h"

/**
 * gargabe_collector - validates and cleans memory if necessary
 *
 * @m_buffer: main data structure
 * @format: string passed
 *
 * Return: 0 if all is ok / -1 if not
 */
int gargabe_collector(struct main_buffer *m_buffer, const char *format)
{
	if (m_buffer->buffer_data == NULL)
		return (-1);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
	{
		free(m_buffer->buffer_data);
		return (-1);
	}
	return (0);
}

/**
 * gargabe_collector_2 - validates and cleans memory if necessary
 *
 * @m_buffer: main data structure
 * @state: int
 * @sub_state: int
 *
 * Return: 0 if all is ok / -1 if not
 */
int gargabe_collector_2(struct main_buffer *m_buffer, int state, int sub_state)
{
	if (state != NORM_STATE && sub_state != SPEC_SUB_STATE)
	{
		free(m_buffer->buffer_data);
		return (-1);
	}
	return (0);
}
