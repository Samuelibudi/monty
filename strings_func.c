#include "monty.h"

/**
 * _strcmp - Function that compares two strings.
 * @s1: first string
 * @s2: second string
 * Return: 0 if equal
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
 * _sch - search if a char is inside a string
 * @s: string to search
 * @c: char to find
 * Return: 1 if successful
 */
int _sch(char *s, char c)
{
	int cont = 0;

	while (s[cont] != '\0')
	{
		if (s[cont] == c)
			break;
		cont++;
	}
	if (s[cont] == c)
		return (1);
	else
		return (0);
}
/**
 * _strtoky - function that cut a string into tokens
 * @s: string to break
 * @d: delimiter
 * Return: first part
 */
char *_strtok(char *s, char *d)
{
	static char *str_s;
	int i = 0, j = 0;

	if (!s)
		s = str_s;
	while (s[i] != '\0')
	{
		if (_sch(d, s[i]) == 0 && s[i + 1] == '\0')
		{
			str_s = s + i + 1;
			*str_s = '\0';
			s = s + j;
			return (s);
		}
		else if (_sch(d, s[i]) == 0 && _sch(d, s[i + 1]) == 0)
			i++;
		else if (_sch(d, s[i]) == 0 && _sch(d, s[i + 1]) == 1)
		{
			str_s = s + i + 1;
			*str_s = '\0';
			str_s++;
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
