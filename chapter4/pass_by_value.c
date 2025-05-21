
#include <stdio.h>

int foo(void);

void increment(int a) 
{
	a++;
}

int main(void)
{
	int i = 10;

	increment(i);
	printf("i == %d\n",i); // what does int print 
	printf("i == %d\n",i); // what does int print 

	int j = foo();
	printf("%d\n",j); // what does int print 

}

int foo(void)
{
	return 5490;
}

