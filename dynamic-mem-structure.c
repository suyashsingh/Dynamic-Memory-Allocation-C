/*
* Dynamically Allocated structure variable
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
	int rollNo;
	//char *name;
	char name[10];
};

int main() {
	struct student s1 = {11, "Suyash"};
	struct student *ptr;

	ptr = (struct student *)malloc(sizeof(struct student));
	
	ptr -> rollNo = 21;
	//ptr -> name = "Mayank"; // Use this if student.name was defined as a pointer
	strcpy(ptr -> name,"Mayank");
	
	printf("%d, %s\n", s1.rollNo, s1.name);
	printf("----Dynamically Allocated----\n");
	printf("%d, %s\n", ptr -> rollNo, ptr -> name);

	return 0;
}