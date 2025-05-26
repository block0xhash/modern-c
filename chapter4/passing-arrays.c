
#include <stdio.h>

// Passing as a pointer to the first element
void times2(int *a, int len)
{
	for (int i = 0; i < len; i++)
		printf("%d\n", a[i] * 2);
}

// same but with array notation
void times3(int a[], int len)
{
	for (int i = 0; i < len; i++)
		printf("%d\n", a[i] * 2);
}

// same but with array notation with size
void times4(int a[5], int len)
{
	for (int i = 0; i < len; i++)
		printf("%d\n", a[i] * 2);
}

int main(void) {
	int x[5] = {11, 22, 33, 44, 55};

	times2(x, 5);
	times3(x, 5);
	times4(x, 5);

	void times2(int *a, int len);
	void times3(int a[], int len);
	void times4(int a[5], int len);

}
