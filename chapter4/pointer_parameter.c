
#include <stdio.h>

void increment(int* p) // accepts a pointer to an int
{
	*p = *p + 1;	  // add one to the thing p points to

	printf("%p\n ", p);
}

int main(void) 
{
	int i = 10;
	int *j;
	j = &i;	// address-of; turns it to a pointer of i

	printf("i is %d\n", i); // prints 10
	printf("i is %d\n", *j); // prints 10

	increment(j);	// j is an int* -- to i

	printf("i is %d\n", i); // prints 11

	printf("%p\n ", j);

	increment(&i); // pass a pointer to modify the thing that you are passing so the results visible
	printf("i is %d\n", i); // prints 12

	///////////
	int *z;
	z = NULL;

	*z = 12; // CRASH or SOMETHING PROBABLY BAD. 

}
