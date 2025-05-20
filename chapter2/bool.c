
#include <stdio.h>
#include <stdbool.h>


int main() {

	bool x = true;

	if (x) {
		printf("x is true \n");
	}

	printf("%d\n ", true == 12); //prints "0" false !!
	printf("%d\n ", true == 1); //prints "1" true !!


	int a = 999;

	// %zu is the format specifier for type size_t
    // If your compiler balks at the "z" part, leave it off

	printf("%zu\n", sizeof a);		// Prints 4 on my system
	printf("%zu\n", sizeof(2 + 7)); // Prints 4 on my system
	printf("%zu\n", sizeof 3.14);	// Prints 8 on my system

	// If you need to print out negative size_t values, use %zd

	printf("%zu\n", sizeof(int)); // Prints 4 on my system
	printf("%zu\n", sizeof(char)); // Prints 1 on all systems


	int d = 0;

	while (d < 10) {
		printf("d is %d\n", d);
		d++;
	}

	// do the exact same thing with a for loop:
	// for (initialize things; loop if this is true; do this after each loop)
	for(int i= 0; i < 10; i++) {
		printf("i is %d\n", i);
	}

	// You can use the comma operator to do multiple things in each clause of the for loop!
	
	for(int i = 0, j = 999; i < 10; i++, j--) {
		printf("%d, %d\n", i, j);
	} 

   for(;;) { // "forever"
		printf("I will print this again and again and again\n" );
		printf("for all eternity until the heat-death of the universe.\n");
		printf("Or until you hit CTRL-C.\n");
	}


}
