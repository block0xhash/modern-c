
#include <stdio.h>

void foo(char x[12] )
{
	printf("%zu\n", sizeof x); // 8?! What happened to 48?
	printf("%zu\n", sizeof(int)); // 4 bytes per int
	printf("%zu\n", sizeof x / sizeof(int)); // 8/4 = 2 ints?? WRONG.
}

int main(void)
{
	int i;
	float f[4];

	f[0] = 3.14159;
	f[1] = 1.14159;
	f[2] = 223.14159;
	f[3] = 33.14159;
	f[4] = 53.14159;

	for ( i = 0; i < 5; i++ )
	{
		printf("%f\n ", f[i] );
	}

	// int x[12]; // 12 ints
	 char x[12]; // 12 ints

	printf("size of x = %zu\n", sizeof x);                // 48 total bytes
	// printf("%zu\n", sizeof(int));             // 4 bytes per int
	printf("size of chat = %zu\n", sizeof(char));             // 4 bytes per int
	printf("array size = %zu\n", sizeof x / sizeof(char)); // 48/4 = 12 ints!
	//printf("array size = %zu\n", sizeof x / sizeof(int)); // 48/4 = 12 ints!

	foo(x);
	
	return 0;
}
