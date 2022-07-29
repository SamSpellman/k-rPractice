#include <stdio.h>

//----------------------CODE FROM THE K&R---------------------------------

#define ALLOCSIZE 10000 /* available for our storage allocator */

static char allocbuf[ALLOCSIZE]; /* storage array that we will be using */
static char *allocp = allocbuf; /* next free position in our storage */

char *alloc(int n) /* return pointer to n characters */
{
	if (allocbuf + ALLOCSIZE - allocp >= n) { /* it fits */
		allocp += n;
		return allocp - n; /* old p */
	} else 		/* There is not enough storage */
		return 0;
}

void afree(char *p) /* free storage pointed to by p */
{
	if (p >= allocbuf && p < allocbuf + ALLOCSIZE)
		allocp = p;
}

/* strlen is an example of pointer arithmetic, and specifically
 * subtraction being used in a valid manner.
 */
int strlen(char *s)
{
	char *p = s;

	while (*p != '\0') // Dereferencing p to get the char held
		p++;
	return p - s; // In a professional setting, you could use size_t
	// size_t is an unsigned int, and the standard library return for sizeof
}


/* -------------------------NOTES---------------------------------
 * Pointer arithmetic has some important restrictions to consider.
 *
 * - Pointers and Integers are not interchangeable, and their 
 *   comparison can cause errors. Zero is an exception, as it
 *   symbolizes an empty pointer. 
 *
 * - Comparison operators like == < >, among others can be used
 *   with pointer from the same array. The comparisons and 
 *   arithmetic from pointers to different arrays is UNDEFINED.
 *   The only exception is the pointer that immediately follows the
 *   array.
 *
 * - Pointer arithmetic or iteration is scaled to element size. This 
 *   means that (pointer + 1) will not always traverse the same amount
 *   of memory. This is because the storage for one element of different
 *   data types varies in size.
 *
 */
