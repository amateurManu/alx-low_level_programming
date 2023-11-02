#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: bytes from s2
 * Return: pointer to s2 appended to s1
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *output;
	unsigned int a, ns1, ns2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (ns1 = 0; s1[ns1] != '\0'; ns1++)
		;
	for (ns2 = 0; s2[ns2] != '\0'; ns2++)
		;

	if (n > ns2)
		n = ns2;

	output = malloc(ns1 + n + 1);

	if (output == NULL)
		return (NULL);

	for (a = 0; a < (ns1 + n); a++)
		if (a < ns1)
			output[a] = s1[a];
		else
			output[a] = s2[a - ns1];

	output[a] = '\0';

	return (output);
}
