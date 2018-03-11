/*
* Sample Program for Dynamic Memory Allocation
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
	int *ptr; // Pointer for holding the address of dynamically allocated memory

	// Allocate Bytes equal to the size of int.
	// Type casting is required as calloc returns a void pointer to the allocated memory
	
	ptr = (int *)malloc(sizeof(int));
	//ptr = (int *)calloc(10, sizeof(int));
	// 10 is the number of blocks you want. in malloc you would have to do it as 10 * sizeof(int)
	//ptr = malloc(size);

	printf("Value at the allocated address %p is %d\n", ptr, *ptr); 
	// Should print a garbage value (But why it isnt???)
	// as malloc won't initialize the memory blocks

	*ptr = 10;
	printf("New Value at the allocated address %p is %d\n", ptr, *ptr); // Will print a garbage value

	// free the dynamically allocated memory
	free(ptr);
	// check the memory leaks using valgrind
	// valgrind ./a.out
	return 0;
}