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
	while(*toStore != '\0' && (*storeIn++ = *toStore++))
		;
}

char *strcatPersonal(char *start, char *end) 
{
	// Try to achieve it in an effective manner
	//while(*(strlen(start) + start++)
	char *toReturn = (char*) malloc(100);
	iterReturn(toReturn, start);
	printf("%ld", strlen(start));
	printf("%s", toReturn);
	return("akdlsfj");
}

int main()
{
	// RUN TESTS HERE
	char *start = "string literals";
	char *end = " are cool\n";

	strcatPersonal(start, end);
}
