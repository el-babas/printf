#ifndef MAIN_H
#define MAIN_H

/* Library */
#include <unistd.h>
#include <stdarg.h>


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
int (*write_fun)(va_list);
} f_print;


int _printf(const char *format, ...);
int _putchar(char c);
int write_char(va_list args);
int write_str(va_list args);
int write_perc(va_list args);

int (*get_format_func(const char *format, int p))(va_list);

#endif
