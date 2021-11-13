#include "main.h"

/**
 * _printf - function like as printf in c
 * @format: string
 *
 * Return: length of strinf print
 */
int _printf(const char *format, ...)
{
	struct main_buffer m_buffer;
	va_list arg;
	void (*chosen_fun)(va_list, struct main_buffer *m_buffer);
	int i = 0, state = 0, sub_state = 0;

	struct_init(&m_buffer);
	if (gargabe_collector(&m_buffer, format) < 0)
		return (-1);
	va_start(arg, format);
	for (i = 0; format[i]; i++)
	{
		switch (state)
		{
		case NORM_STATE:
			norm_state(format[i], &m_buffer, &state);
			break;
		case FORM_STATE:
			sub_state = check_sub_state(format[i]);
			if (form_state(sub_state, &state, &m_buffer, format[i]) == 0)
			{
				state = NORM_STATE, chosen_fun = get_format_func(format[i]);
				if (chosen_fun != NULL)
				{
					if (m_buffer.f == FLAGS_SHARP)
						m_buffer.f = check_sharp_state(format[i]);
					chosen_fun(arg, &m_buffer);
				}
				else if (format[i + 1] != '\0')
					push_char(&m_buffer, format[i - 1]), i--;
				else
					return (-1);
			}
		}
	}
	va_end(arg);
	if (gargabe_collector_2(&m_buffer, state, sub_state) < 0)
		return (-1);
	write_buffer(&m_buffer), free(m_buffer.buffer_data);
	return ((format[i] == '\0') ? m_buffer.len : -1);
}
