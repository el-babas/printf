#include "main.h"

/**
 * push_char - pushes char into main buffer
 *
 * @m_buffer: main buffer to store data
 * @c: character to be push into buffer
 *
 *
 * Return: none - void function
 */
void push_char(struct main_buffer *m_buffer, char c)
{
	if (m_buffer == NULL)
	{
		free(m_buffer->buffer_data);
	}

	m_buffer->buffer_data[m_buffer->index] = c;
	m_buffer->len++;
	m_buffer->index++;
}

/**
 * write_buffer - write data reserved in main buffer
 *
 * @m_buffer: main buffer structure
 *
 * Return: none - void function
 */
void write_buffer(struct main_buffer *m_buffer)
{
	write(1, m_buffer->buffer_data, m_buffer->index);
}

/**
 * check_overflow - checks if new size is bigger than BUFFERSIZE
 * and reset if necessary
 * @m_buffer: main buffer string
 * @new_bytes: new data to be stored
 * Return: none - void
 *
 */
void check_overflow(struct main_buffer *m_buffer, unsigned int new_bytes)
{
	int _overflow = ((int)m_buffer->index + (int)new_bytes - BUFFERSIZE);

	if (_overflow >= 0)
		write_buffer(m_buffer);
}
