#include "monty.h"

/**
 * _strcmp - this function compares two strings within the program
 * @s1: the type of str to be compared
 * @s2: any type of str to be compared
 * Return: 0 if s1 and s2 are equals
 * another value if they are different
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] == s2[i] && s1[i]; i++)
		;
	if (s1[i] > s2[i])
		return (1);
	if (s1[i] < s2[i])
		return (-1);
	return (0);
}

/**
 * _sch - this search if a char is inside a string
 * @s: this is the string to review
 * @c: the char to find in the program
 * Return: 1 if sucess, 0 if fails
 */
int _sch(char *s, char c)
{
	int cont = 0;

	while (s[cont] != '\0')
	{
		if (s[cont] == c)
		{
			break;
		}
		cont++;
	}
	if (s[cont] == c)
		return (1);
	else
		return (0);
}

/**
 * _strtoky - this function cut a string into tokens based on delimit
 * @s: the string to cut the string into parts
 * @d: delimiters
 * Return: first position
 */
char *_strtoky(char *s, char *d)
{
	static char *ultimo;
	int i = 0, j = 0;

	if (!s)
		s = ultimo;
	while (s[i] != '\0')
	{
		if (_sch(d, s[i]) == 0 && s[i + 1] == '\0')
		{
			ultimo = s + i + 1;
			*ultimo = '\0';
			s = s + j;
			return (s);
		}
		else if (_sch(d, s[i]) == 0 && _sch(d, s[i + 1]) == 0)
		i++;
		else if (_sch(d, s[i]) == 0 && _sch(d, s[i + 1]) == 1)
		{
			ultimo = s + i + 1;
			*ultimo = '\0';
			ultimo++;
			s = s + j;
			return (s);
		}
		else if (_sch(d, s[i]) == 1)
		{
			j++;
			i++;
		}
	}
	return (NULL);
}
