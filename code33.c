#include<stdio.h>
int main(){
    char name[]="a";
    int marks1,mark2,mark3;
    int total;
    float percentage;
    // total marks for each subject=100
    printf("enter marks for subject 1: ");
    scanf("%d",&marks1);
    printf("enter marks for subject 2: ");
    scanf("%d",&mark2);
    printf("enter marks for subject 3: ");
    scanf("%d",&mark3);
    total = marks1+mark2+mark3;
    percentage=(total/300.0)*100;
    printf("\nstudents name: %s\n",name);
    printf("total marks:%d/300\n",total);
    printf("percentage: %.2f%%\n",percentage);
    if("percentage >=50.0"){
        printf("result:passed\n");
    }else{
        printf("result:failed\n");
    }
    return 0;
}