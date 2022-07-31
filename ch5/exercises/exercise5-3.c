#include <string.h>
#include <stdlib.h>
#include <stdio.h>
// This is my personal code for the exercise 5-3 provided in the k&r.

/* Write a pointer version of the function strcat. The function strcat() takes
 * two string literals and concatenates them.
 */

void iterReturn (char *storeIn, char *toStore)
{
	// Iterate over the the toStore string
	while(*storeIn++ || *storeIn++ = *toStore)
		;
		
}

char *strcatPersonal(char *start, char *end) 
{
	// Use malloc to allocate size for both string and '\0'
	char *toReturn = (char*) malloc(strlen(start)+strlen(end)+1);
	
	// call iterReturn for both strings
	iterReturn(toReturn, start);
	iterReturn(toReturn, end);

	// toReturn[strlen(toReturn)] = '\0';

	return(toReturn);
}

int main()
{
	// RUN TESTS HERE
	char *start = "string literals";
	char *end = " are cool\n";

	printf("%s", strcatPersonal(start, end));
}
