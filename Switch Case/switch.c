#include <stdio.h>
#include<stdlib.h>

int main(){

    char grade = 'A';

    switch(grade){
        case 'A':
        printf("You passed\n");
        break;
        
        case 'B':
        printf("You did well\n");
        break;

        case 'C':
        printf("You are average\n");
        break;

        case 'D':
        printf("Poor performance\n");
        break;

        case 'E':
        printf("You FAILED! Work hard!\n");
        break;

        default : 
        printf("Invalid Grade\n");
    }
    
    return 0;
}