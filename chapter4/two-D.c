
#include <stdio.h>

int main(void) {

	int row, col;

	int a[2][5] = {
		{0,1,2,3,4},
		{5,6,7,8,9}
	};

	int d = sizeof(a);
	printf("%d\n", d);

	for (row = 0; row < 2; row++) {
		for (col = 0; col < 5; col++) {
			printf("(%d,%d)=%d\n", row, col, a[row][col]);
		}
	}
}
