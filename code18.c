#include<stdio.h>
int main(){
    int a;
    printf("value of a is:\n");
    scanf("%d",&a);
    if(a>10)
    {
        printf("adult \n");
        printf("can drive\n");
        printf("can vote\n");
    }
    else
    {
        printf("kid \n");
    }
    return 0;
}