#ifndef MAIN_H
#define MAIN_H

/* standard library includes */
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdint.h>

/**
 * struct format_print - choose functions format
 *
 * @fo: format
 * @write_fun: pointer function
 *
 */
typedef struct format_print
{
	char *fo;
	int (*write_fun)(va_list, char*, unsigned int);
} f_print;

/* macros */

#define W_BUFFER 1024

/* functions */
int _printf(const char *format, ...);
unsigned int fill_malloc(char *str_malloc, char character, unsigned int pos);
unsigned int write_malloc(char *str_malloc, unsigned int byte_malloc);
int (*get_format_func(const char *, int))(va_list, char*, unsigned int);
int write_char(va_list args, char *str_malloc, unsigned int pos);
int write_str(va_list args, char *str_malloc, unsigned int pos);
int write_int(va_list args, char *str_malloc, unsigned int pos);
int write_unint(va_list args, char *str_malloc, unsigned int pos);
int write_hexa(va_list args, char *str_malloc, unsigned int pos);
int write_HEXA(va_list args, char *str_malloc, unsigned int pos);
int write_octal(va_list args, char *str_malloc, unsigned int pos);
int write_address(va_list args, char *str_malloc, unsigned int pos);
int write_perc(va_list args, char *str_malloc, unsigned int pos);
int write_bin(va_list args, char *str_malloc, unsigned int pos);
int _strlen(char *s);

int convert_base(int, unsigned int, char *, unsigned int, int);

#endif
