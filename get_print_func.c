#include "main.h"

/**
 * *get_format_func - evaluates which function is correct for each format
 *
 * @f: user input format
 *
 * Return: pointer to function format
 *
 */
void (*get_format_func(const char f))(va_list, struct main_buffer *)
{
	f_print func[] = {
		{"c", write_char},
		{"s", write_str},
		{"d", write_num},
		{"i", write_num},
		{"b", write_bin},
		{"x", write_hexa},
		{"X", write_HEXA},
		{"o", write_octal},
		{"u", write_unint},
		{NULL, NULL}
	};

	int i;

	i = 0;
	while (i < 9)
	{
		if (f == func[i].fo[0])
			return (func[i].write_fun);
		i++;
	}
	return (NULL);
}
