
#include <stdio.h>

int mystery(char *, int);

char *str = "Reference letter";

void main () {
    int n = 16;

    printf("The return value was:  %d.\n", mystery(str,n));
    return;
}
