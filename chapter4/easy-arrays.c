
#include <stdio.h>

int main(void)
{
	int i;
	float f[4];

	f[0] = 3.14159;
	f[1] = 1.14159;
	f[2] = 223.14159;
	f[3] = 33.14159;
	f[4] = 53.14159;

	for ( i = 0; i < 9; i++ )
	{
		printf("%f\n ", f[i] );
	}
	
	return 0;
}
