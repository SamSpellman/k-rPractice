#include <stdio.h>


/* 
 * This code will show both the differences and similarities between pointers
 * and arrays. 
 * It will also have some useful tips for using pointers and arrays correctly.
 */
int main()
{
	// Start code here. (Source)-> Kernighan, Brian W., & Ritchie, Dennis M.
	// (1988). The C Programming Language (Second Edition). Bell Telephone 
	// Laboratories, Incorporated.	
	int x = 1, y = 2, z[10];
	int *ip;		/* ip is an int pointer */

	ip = &x;		/* ip points to the address of x. */
	y = *ip;		/* y is now 1 (ip is "dereferenced" aka value returned). */
	*ip = 0;		/* ip is dereferenced again, so the x addr is fetched. */
					/* This causes 0 to be stored at x's address(x=0) */
	ip = &z[0];		/* ip is now pointed to the 0th element of z */
					
	// MY CODE BELOW**********************************************************
	
	// I will write an array and print out different indexes to show
	// how C stores them contiguosly. I also want to see how much storage is 
	// used.
	int storage[] = {12, 4, 99, 12345};
	int i = 0;
	// Iterate with a while loop (until char='\0')
	while(storage[i] != '\0') {
		printf("storage[%d] = %d \t location = %p\n", i, storage[i],
				&storage[i]);
		i++;
	}
	// This will print extra characters after the array, because the length
	// of the array isn't explicitly stated.
	printf("\nNow the correct way\n");
	// I will specify the size in the declaration, and also hard code the 
	// null termination char in two arrays.
	int specSize[5] = {7, 83, 6, 82, 1111};
	int specEndChar[] = {3, 56, 9393, '\0'};
	i = 0;

	printf("\nfirst, with a size declaration, specSize[5]:\n");
	// testing explicit size implementation
	while(specSize[i] != '\0') {
		printf("specSize[%d] = %d \t location = %p\n", i, 
				specSize[i], &specSize[i]);
		i++;
	}

	printf("\nThen, with an end char specification, {..., \\0}:\n");
	i = 0;
	// testing array with explicit null terminating char
	while(specEndChar[i] != '\0') {
		printf("specEndChar[%d] = %d \t location = %p\n", i, 
				specEndChar[i], &specEndChar[i]);
		i++;
	}

}
