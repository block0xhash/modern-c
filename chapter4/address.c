
#include <stdio.h>

int main(void) 
{
	int i = 10;
	
	printf("value of i is %d\n", i);
	printf("and its address is %p\n", (void *)&i);
	printf("and its address is %p\n", &i);
	printf("and its address is %p\n", &i);

	return 0;

}
