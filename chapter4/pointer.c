
#include <stdio.h>

int main(void) 
{
	int  i;	// int
	int *p; // pointer to an int, int-pointer

	p = &i; // assign address of i to p,  p now "points to" i

	i = 10; // i is now 10

	*p = 20; // the thing that p points to ( namelly i!!) is no 20!!

	printf("i is %d\n", i); //prints "20"
	printf("i is %d\n", *p); // "20" ! derefeerence-p is the the same as i
}
