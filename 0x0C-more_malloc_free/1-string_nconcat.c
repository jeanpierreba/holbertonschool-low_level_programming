#include "holberton.h"
#include <stdlib.h>

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *phrase;
	unsigned int l1 = 0, l2 = 0, i = 0, j = 0;

	while (s1 != '\0' && s1[l1] != '\0')
		l1++;
	while (s2 != '\0' && s2[l2] != '\0')
		l2++;

	if (n < l2)
		phrase = malloc(sizeof(char) * (l1 + n + 1));
	else
		phrase = malloc(sizeof(char) * (l1 + l2 + 1));

	if (!phrase)
		return (NULL);

	while (i < l1)
	{
		phrase[i] = s1[i];
		i++;
	}

	while (n < l2 && i < (l1 + n))
		phrase[i++] = s2[j++];

	while (n >= l2 && i < (l1 + l2))
		phrase[i++] = s2[j++];

	phrase[i] = '\0';

	return (phrase);
}
