#include<stdio.h>
int main(){
    int sunday;
    int snowing;
    printf("enter value of sunday: ");
    scanf("%d",&sunday);
    printf("enter snowing: ");
    scanf("%d",&snowing);
    printf("%d \n", (sunday && snowing));
    return 0;
}