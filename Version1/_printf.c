#include "main.h"
/**
 * _printf - function like as printf in c
 * @format: string
 *
 * Return: length of strinf print
 */
int _printf(const char *format, ...)
{
	char *str_malloc;
	unsigned int byte_str = 0, x = 0;
	int (*chosen_fun)(va_list, char*, unsigned int);
	va_list args;

	/* reserve memory for main buffer - 1024 bytes */
	str_malloc = (char *)malloc(sizeof(char) * W_BUFFER);
	if (format == NULL || str_malloc == NULL)
		return (-1);
	if (*(format) == '%' && *(format + 1) == '\0')
		return (-1);
	if (*(format) == '\0')
		return (0);
	memset(str_malloc, '\0', W_BUFFER);
	va_start(args, format);
	for (x = 0; *(format + x); x++)
	{
		if (*(format + x) != '%')
			byte_str = fill_malloc(str_malloc, *(format + x), byte_str);
		else
		{
			if (*(format + (x + 1)) == '\0')
				break;
			chosen_fun = get_format_func(format, x + 1);
			if (chosen_fun != NULL)
				byte_str += chosen_fun(args, str_malloc, byte_str), x++;
			else
			{
				if (*(format + (x + 1)) == ' ' && *(format + (x + 2)) == '\0')
					return (-1);
				byte_str = fill_malloc(str_malloc, *(format + x), byte_str), x--;
			}
		}
	}
	/* print string and free reserved in malloc */
	write_malloc(str_malloc, byte_str), free(str_malloc), va_end(args);
	if (*(format + x) == '\0')
		return (byte_str);
	else
		return (-1);
}