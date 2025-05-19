#include <stdlib.h>
#include <stdio.h>

int main()
{
	[[maybe_unused]] int age = 10;
	int height = 72;

	printf(" I am %d years old.\n", age);
	printf(" I am %d years old.\n", height);
	printf(" EXIT_SUCCESS: %d ", EXIT_SUCCESS);

	return 0;
}
