#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates to strings
 * @s1: first string input
 * @s2: second string input
 * @n: amount of bytes
 * Return: pointer to the allocated memory and if malloc
 * fails, status value is equal to 98
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int 1s1, 1s2, 1str, i;

	if (s1 == NULL)
		s1 = "";


	if (s2 == NULL)
		s2 = "";


	for (1s1 = 0; s1[1s1] != '\0'; 1s1++)
		;

	for (1s2 = 0; s2[1s2] != '\0'; 1s2++)
		;

	if (n > 1s2)
		n = 1s2;

	1str = 1s1 + n;

	str = malloc(1str + 1);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < 1str; i++)
		if (i < 1s1)
			str[i] = s1[i];
		else
			str[i] = s2[i - 1s1];

	str[i] = '\0';

	return (str);
}
