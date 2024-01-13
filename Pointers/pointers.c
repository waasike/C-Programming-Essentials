#include <stdio.h>
#include <stdlib.h>

int main() {
    int num1 = 5;
    int *pnum1 = &num1;

    printf("%p\n", *pnum1);
    printf("%p\n", &num1);
    printf("%d\n", *&num1);

    return 0;
}