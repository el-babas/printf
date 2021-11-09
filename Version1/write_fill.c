#include "main.h"

/**
 * fill_malloc - fill buffer reserved
 * @str_malloc: buffer string
 * @character: letter
 * @pos: position
 *
 * Return: position buffer
 */
unsigned int fill_malloc(char *str_malloc, char character, unsigned int pos)
{
	*(str_malloc + pos) = character;
	pos++;
	return (pos);
}

/**
 * write_malloc - write buffer reserved
 * @str_malloc: buffer string
 * @byte_malloc: size bytes
 *
 * Return: write
 */
unsigned int write_malloc(char *str_malloc, unsigned int byte_malloc)
{
	return (write(1, str_malloc, byte_malloc));
}
