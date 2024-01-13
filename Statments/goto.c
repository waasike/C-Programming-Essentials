#include <stdio.h>

int main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age < 18) {
        goto notEligible;
    }
    else if (age >= 18) {
        printf("You are eligible to vote!\n");
        goto end;
    }

notEligible:
    printf("You are not eligible to vote!\n");

end:
    return 0;
}