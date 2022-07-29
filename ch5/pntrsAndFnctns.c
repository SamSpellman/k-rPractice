#include <stdio.h>

// To copy a string literal from one pointer to another, you might assume
// that for pointers m and n, m = n would work. This would copy the pointer
// address. For a deep copy, you need to iterate over the string length, and 
// copy each char individually

//-----------------CODE FROM THE K&R-------------------------------------

/* strcpy: copy t to s; array subscript version */
void strcpy(char *s, char *t)
{
	int i;

	i = 0;
	while ((s[i] = t[i]) != '\0')
		i++;
}

/* strcpy: copy t to s; pointer version 1 */
void strcpyTwo(char *s, char *t)
{
	while ((*s = *t) != '\0') {
		s++;
		t++;
	}
}

/* strcpy: copy t to s; compact pointer version */
void strcpyThree(char *s, char *t) 
{
	while ((*s++ = *t++) != '\0')
		; // C requires a body for while loops
}

/* This next example is a bit more complex. Because (*s++ = *t++) implicitly
 * returns the value of the char it is on, you can take advantage of this.
 * The expression is effectively checking if the return char is zero, which
 * already will have a boolean value of false. This means the loop will 
 * terminate with the absence of this comparison.
 */
void strcpyFinal(char *s, char *t)
{
	while (*s++ = *t++) // True for any char except '\0'
		;
}


