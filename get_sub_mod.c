#include "main.h"

/**
 * get_sub_mod - finds the correct sub mode for char passed
 *
 * @c: char to be evaluated
 * @mod: current state
 * Return: correct int
 *
 */
int get_sub_mod(const char c, int mod)
{
	char flags[] = {'+', ' ', '#'};
	char Prec[] = {'.'};
	char Len[] = {'l', 'h'};
	int i;

	switch (mod)
	{
	case FLAGS_SUB_STATE:
		for (i = 0; i < 4; i++)
		{
			if (flags[i] == c)
				return (i + 4);
		}
		return (0);
	case PREC_SUB_STATE:
		for (i = 0; i < 1; i++)
		{
			if (Prec[i] == c)
				return (i + 7);
		}
		return (0);
	case LEN_SUB_STATE:
		for (i = 0; i < 2; i++)
		{
			if (Len[i] == c)
				return (i + 8);
		}
		return (0);
	default:
		return (0);
	}
}
