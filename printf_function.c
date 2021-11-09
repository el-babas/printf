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
		{"d", write_num},
		{"i", write_num},
		{"b", write_bin},
		{"u", write_unint},
		{"o", write_octal},
		{"x", write_hexa},
		{"X", write_HEXA},
		{NULL, NULL}
	};

	int i;

	i = 0;
	while (i < 10)
	{
		if (format[p] == func[i].fo[0])
			return (func[i].write_fun);
		i++;
	}
	return (NULL);
}
