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
		
	
}
