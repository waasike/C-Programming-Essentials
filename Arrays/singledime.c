#include <stdio.h>
#include <stdlib.h>

int main()
{

    int favnums[5] = {2, 4, 6, 8, 10};

    favnums[2] = 7; // giving it a new value

    printf("%d", favnums[0]);

    return 0;
}