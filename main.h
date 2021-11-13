#ifndef MAIN_H
#define MAIN_H

/* Libraries */
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

/* MACROS - STATE */
#define NORM_STATE 0
#define FORM_STATE 1


/* MACROS - SUB STATE */
#define FLAGS_SUB_STATE 0
#define LEN_SUB_STATE 1
#define PREC_SUB_STATE 2
#define SPEC_SUB_STATE 3

#define FLAGS_PLUS 4
#define FLAGS_SPACE 5

#define FLAGS_SHARP 6 
#define FLAGS_SHARP_OCTAL 61
#define FLAGS_SHARP_HEXA 62
#define FLAGS_SHARP_HEXA_CAPS 63

#define PREC_POINT 7

#define LEN_L 8
#define LEN_H 9

#define BUFFERSIZE 1024

/**
 * main_buffer - keeps track of active modifiers
 * 
 * @f: flags modifiers: +, space or #
 * @p: precision modifieras: . followed by digits
 * @l: len modifiers: l or h
 * 
 */
struct main_buffer
{
        char *buffer_data;
        unsigned int index;
        unsigned int len;

        int f;
	int p;
	int l;
};

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
	void (*write_fun)(va_list, struct main_buffer*);
} f_print;

/* prototypes */
int _printf(const char *format, ...);
void (*get_format_func(const char))(va_list, struct main_buffer*);
int check_state(char);
int check_sub_state(char);
int check_sharp_state(char c);

int get_sub_mod(const char c, int mod);
void flags_modifier(struct main_buffer *m_buffer);
void push_char(struct main_buffer *m_buffer, char c);
void write_buffer(struct main_buffer *m_buffer);
void check_overflow(struct main_buffer *m_buffer, unsigned int);
int gargabe_collector(struct main_buffer *m_buffer, const char *);
int gargabe_collector_2(struct main_buffer *m_buffer, int state, int sub_state);
void norm_state(char c, struct main_buffer *m_buffer, int *state);
int form_state (int sub_state, int *s, struct main_buffer *m_buffer, char f);
void struct_init (struct main_buffer *m_buffer);

void convert_base(struct main_buffer *main_buffer, int, unsigned int, int);
char *_strncpy(char *, char *, int);
int _strlen(char *);

void write_str(va_list, struct main_buffer *m_buffer);
void write_char(va_list, struct main_buffer *m_buffer);
void write_num(va_list, struct main_buffer *m_buffer);
void write_bin(va_list, struct main_buffer *m_buffer);
void write_hexa(va_list, struct main_buffer *m_buffer);
void write_HEXA(va_list, struct main_buffer *m_buffer);
void write_octal(va_list, struct main_buffer *m_buffer);
void write_unint(va_list, struct main_buffer *m_buffer);

#endif
