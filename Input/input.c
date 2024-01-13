#include <stdio.h>
#include <stdlib.h>

int main(){
    // INTEGER INPUT
    int age;
    printf("Enter Your Age: ");
    scanf("%d", &age);
    printf("You are %d years old\n", age);
    

    // DOUBLE INPUT
    double gpa;
    printf("Enter Your GPA: ");
    scanf("%lf", &gpa);
    printf("Your GPA is %f\n", gpa);
    return 0;

    // CHARACTER(single) INPUT
    char grade;
    printf("Enter Your Grade: ");
    scanf(" %c", &grade);
    printf("Your Grade is %c\n", grade);

    // STRING CHARACTER INPUT
    char name[20];
    printf("Enter Your Name: ");
    scanf("%s", name); //no need for &
    printf("Your name is %s\n", name);


    // GETTING A WHOLE LINE OF INPUT (string)
    char fullname[20];
    printf("What are Your Full Names: ");
    fgets(fullname, 20, stdin);
    printf("Your Full Name is %s\n", fullname);
    
    return 0;
}