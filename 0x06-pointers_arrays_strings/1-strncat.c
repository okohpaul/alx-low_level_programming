nclude "main.h"

/**
 *  * *_strcat - function commute srtings
 *    @dest: param pointer to a char
 *    @src: param pointer to a char
 *    @n: the limit of the concatenation 
 *    Return: return value of dest
 */


  char *_strncat(char *dest, char *src, int n)
{
	int dlen = 0, j = 0;
	while (dest[dlen])
	{
		dlen++;
	}
	while (j < n && src[j])
	{
		dest[dlen] = src[j];
		dlen++;
		j++;
	}
	dest[dlen + n + 1] ='\0';
	return (dest);
}
