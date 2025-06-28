#include<stdio.h>
int main(){
    int marks;
    printf("enter the marks obtained: \n");
    scanf("%d",&marks);
    if(marks<=30)
    {
        printf("fail\n");
    }
    else if(marks>30 && marks<=100)
    {
        printf("pass\n");
    }
    else{
        printf("not valid\n");
    }
    return 0;
}