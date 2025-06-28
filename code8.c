#include<stdio.h>
void print_pattern()
{
    int rows=12;
    printf("*\n");
    rows--;
    int spaces=0;
    for(int i = 0 ; i < rows ; i ++)
    {printf("*");
        for(int j = 0; j < spaces; j ++)
        {
            printf(" ");
        }
        spaces ++;
        printf("*\n");
    }
    for(int i =0;i < spaces + 2;i ++)
    {
        printf("*");
    }
}
void main()
{
    print_pattern();
    return;
}