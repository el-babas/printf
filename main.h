#ifndef MAIN_H
#define MAIN_H

/* Library */
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

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
int write_num(va_list args);
int print_number(int n);
int write_bin(va_list args);
int write_octal(va_list args);
int write_HEXA(va_list args);
int write_hexa(va_list args);
int write_unint(va_list arg);
char *_strncpy(char *dest, char *src, int n);
int convert_base(int base, unsigned int num, int h);


int (*get_format_func(const char *format, int p))(va_list);

#endif
