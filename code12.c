#include<stdio.h>
int main(){
    int marks;
    printf("the marks of the student are:");
    scanf("%d",&marks);
    if(marks>=30 && marks<70)
    {
        printf("the grade is b\n");
    }
else if(marks>=70 && marks<90)
    printf("the grade is A\n");
    else if(marks>=90 && marks<=100)
    {
        printf("the grade is A+\n");
    }
    else{
        printf("invalid output");
    }
    return 0;
}