#include "main.h"

/**
 * *get_format_func - evaluates which function is correct for each format
 *
 * @format: user input format
 * @p: pos
 *
 * Return: pointer to function format
 *
 */

int (*get_format_func(const char *format, int p))(va_list)
{
	f_print func[] = {
		{"c", write_char},
		{"s", write_str},
		{"%", write_perc},
		{NULL, NULL}
	};

	int i;

	i = 0;
	while (i < 3)
	{
		if (format[p] == func[i].fo[0])
			return (func[i].write_fun);
		i++;
	}
	return (NULL);
}
