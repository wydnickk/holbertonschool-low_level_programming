#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 *
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	/* dest sətrinin sonunu tapırıq (null baytın olduğu yer) */
	while (dest[i] != '\0')
	{
		i++;
	}

	/* src sətrini dest-in sonuna əlavə edirik */
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	/* Sonda null baytı əlavə edirik */
	dest[i] = '\0';

	return (dest);
}
