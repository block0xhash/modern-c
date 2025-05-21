
#include <stdio.h>

int main(void) {

	int goat_count = 2;

	switch ( goat_count) {

		case 0:
			printf("you have zero \n");
			break;

		case 1:
			printf("1 goat\n");
			break;

		case 2:
			printf("2 goats\n");
			break;

		default:
			printf("1 goat\n");
			break;

	}

	if (goat_count == 0)
		printf("You have no goats.\n");
	else if (goat_count == 1)
		printf("You have a singular goat.\n");
	else if (goat_count == 2)
		printf("You have a brace of goats.\n");
	else
		printf("You have a bona fide plethora of goats!\n");

	int x = 1;

	switch (x) {
		case 1:
			printf("1\n");
			// Fall through!
		case 2:
			printf("2\n");
			break;
		case 3:
			printf("3\n");
			break;
	}

	char c = 'b';

	switch (c) {
		case 'a':
			printf("It's 'a'!\n");
			break;
		case 'b':
			printf("It's 'b'!\n");
			break;

	}

}
