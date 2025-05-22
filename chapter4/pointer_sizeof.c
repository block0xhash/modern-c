
#include <stdio.h>

int main(void)
{

	int *p;

	// Prints size of an 'int' 
	printf("%zu\n", sizeof(int));

	// prints size of 'int *' so prints size on 'int*'
	printf("%zu\n", sizeof(p));

	// *p is type 'int', so prints size of 'int;
	printf("%zu\n", sizeof(*p));
	printf("%zu\n", sizeof *p);
	

}
