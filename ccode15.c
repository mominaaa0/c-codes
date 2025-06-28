#include<stdio.h>
int main(){
    int marks;
    printf("enter the marks obtained: \n");
    scanf("%d",&marks);
    if(marks<=30)
    {
        printf("fail\n");
    }
    else
    {
        printf("pass\n");
    }
    return 0;
}