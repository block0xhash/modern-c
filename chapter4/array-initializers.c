
#include<stdio.h>

int main(void)
{
	int i;
	int a[5] = {0,[2]=87}; // Initialie with these values

	int len = sizeof(a) / sizeof(int);

	printf("len = %d\n ", len);

	for (i = 0; i < len ; i++)
	{
		printf("%d\n ", a[i]);
	}
}


