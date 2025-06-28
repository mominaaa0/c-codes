#include<stdio.h>
int main(){
    int i,j,rows;  
    rows=5;
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
        {
            if((i==3 && j==2)||(i==4 && (j==2 || j==3)))
            {
                printf("  ");
            }else{
                printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
}