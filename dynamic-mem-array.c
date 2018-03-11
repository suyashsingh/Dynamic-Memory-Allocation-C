/*
* Array of Dynamically Allocated Integers
*/

/*
	Concepts	
	1. constant to pointer to a variable
	2. constant pointer
	3. pointer to constant variable
	
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
	int  *ptr = (int *)malloc(5 * sizeof(int));
	
	for(int i = 0; i < 5; i++) {
		printf("Enter an element: ");
		scanf("%d", ptr + i);
	}
	
	printf("Printing the Elements: ");
	for(int i = 0; i < 5; i++) {
		printf("%d ", *(ptr + i));
	}
	printf("\n");
	return 0;
}