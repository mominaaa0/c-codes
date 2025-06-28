#include<stdio.h>
int factorial(int n){
int fact=1,i;
for(i=1;i<=n;i++){
    fact *=i;
}
return fact;
}
int main(){
    int num;
    printf("enter a number: ");
    scanf("%d",&num);
    printf("factorial of %d i %d \n",num,factorial(num));
    return 0;
}