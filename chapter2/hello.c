
/* hello world program */

#include <stdio.h>
#include <stdbool.h> // not needed in C23

int main(void) {

	int i [[maybe_unused]];   // holds signed integers like -3, -2, 0, 10
	float f [[maybe_unused]]; // holds a signed floating point number like -3.1416

	i = 2;
	f = 3.14;
	char *s = ("hello, World"); // char * ("char pointer") is the string type 

	printf("%p %s i= %d and f = %f \n",s, s, i , f);  // actuall do some work


	/* Bolean */
	int b = 1;

	if (b) {
		printf("b is true \n");
	}

}
