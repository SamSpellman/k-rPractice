#include <stdio.h>

/* strcmp: return <0 if s<t, 0 if s==t, >0 if s>t */
int strcmp(char *s, char *t) 
{
	int i;

	for (i = 0; s[i] == t[i]; i++) // iter. until chars are not equal
		if (*s == '\0') // This is reached if chars are equal until end char
			return 0;
	return s[i] - t[i]; // Arithmetic on the chars
}
/* If the first non matching char is less than t[i] than the string s is
 * less than (lexicographically) the string t. This is an efficient way of
 * comparing two strings (THE ABOVE FUNCTION)
 */

/* pointer version of strcmp */
int pntrstrcmp(char *s, char *t)
{
	for ( ; *s == *t; s++, t++)
		if (*s == '\0')
			return 0;
	return *s - *t;
}
