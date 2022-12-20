#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @dest: Stands for the destination
 * @src: Stands for source
 * Return: This is the return output
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
