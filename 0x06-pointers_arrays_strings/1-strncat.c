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
int index = 0, dest_len = 0;
while (dest[index++])
	dest_len++;
for (index = 0; src[index] && index < n; index++)
	dest[dest_lenm++] = srx[index];
return (dest);
	
}



