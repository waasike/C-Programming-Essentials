#include <stdio.h>
#include <stdlib.h>

int main()
{
    int grade;
    printf("Enter Your Grade: ");
    scanf(" %d", &grade);

    if (grade >= 5)
    {

        if (grade > 5)
            printf("You are among the first half\n");

            if (grade > 8)
                printf("You are a top student too\n");
            else
                printf("Good try! Though you are not among the top students");
    }
    else{
        printf("Pull up your socks! You are below average");
    }

    return 0;
}