
#include <stdio.h>

int main(void) 
{

	int a[5] = {11, 22, 33, 44, 55};
	int *p;
	int *q;

	p = &a[0]; // p points to first element of the array
	q = a;
	printf("%d\n", *p + 1);
	printf("%d\n", *q + 1);

	


}
