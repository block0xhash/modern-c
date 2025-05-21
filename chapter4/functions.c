
#include <stdio.h>
#include <stdlib.h>

int plus_one(int n)
{
	return n + 1;
}

void hello(void) 
{
	printf("hello, world\n");

}

int main(void) {

	int i = 10, j;

	j = plus_one(i); // the "call"

	printf("i + 1 is %d\n", j);

	hello();

	return EXIT_SUCCESS;

}
