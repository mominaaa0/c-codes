#include<stdio.h>
int main(){
    int a;
    printf("age is:");
    scanf("%d",&a);
    if(a>=18)
    {
        printf("adult\n");
    }
    else if(a>12 && a<18)
    {
        printf("teenager \n");
    }
    else
    {
        printf("child \n");
    }
    return 0;
}