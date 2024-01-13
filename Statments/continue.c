#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;

    for (i = 1; i <= 10; i++) {
        if (i == 6) {
            continue;
        }
        printf("%d\n", i);
    }
    printf("Loop Terminated!\n");

    return 0;
}