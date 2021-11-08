#include "main.h"

unsigned int fill_malloc(char *str_malloc, char character, unsigned int pos)
{
	*(str_malloc + pos) = character;
	pos++;
	return (pos);
}

unsigned int write_malloc(char *str_malloc, unsigned int byte_malloc)
{
	return (write(1, str_malloc, byte_malloc));
}
