#include<stdio.h>
int main(){
    int monday;
    int raining;
    printf("enter value of monday: ");
    scanf("%d",&monday);
    printf("enter raining: ");
    scanf("%d",&raining);
    printf("%d \n", (monday || raining));
    return 0;
}