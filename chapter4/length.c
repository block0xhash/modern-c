#include <stdio.h>
#include <string.h>

int main(void) {

    char *s = "Hello its me";

    printf("the string is %zu bytes long\n", strlen(s));
    fprintf(stdout, "Hello, world!\n");
    
}