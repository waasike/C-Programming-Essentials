#include <stdio.h>
#include <stdlib.h>

enum seasons{
    summer,winter,spring,autumn
};

int main(){

    enum seasons s;

    s = spring;
    printf("%d",s);
}
