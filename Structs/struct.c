#include <stdio.h>
#include <stdlib.h>
// #include <string.h>

struct student{
    char studentName[50];
    int studentAge;
    float studentGpa;
    char studentGrade;
};


int main(){

  struct student s;

    printf("Enter name: ");
    scanf("%s", s.studentName);
    printf("Your name is %s\n",s.studentName);

    printf("Enter age: ");
    scanf("%d", &s.studentAge);
    printf("You are %d years old\n",s.studentAge);

    printf("Enter gpa: ");
    scanf("%f", &s.studentGpa);
    printf("Your Gpa is %f\n",s.studentGpa);

    printf("Enter grade: ");
    scanf("%c", &s.studentGrade);
    printf("Your Grade is %c\n",s.studentGrade);

     if (s.studentGrade == 'A' || s.studentGrade == 'B')
    {
        printf("You Passed!");
    }
    else if (s.studentGrade == 'C' || s.studentGrade == 'D')
    {
        printf("Average");
    }
    else if (s.studentGrade == 'E' || s.studentGrade == 'F')
    {
        printf("FAIL!");
    }

    return 0;
}