#include<stdio.h>
void print_n_terms_fibonacci(int terms)
{
    int n1,n2;
n1=0;n2=1;
for(int i=0;i<terms;i++)
{
    printf("%d ",n1);
    int t=n1+n2;
    n1=n2;
    n2=t;
}
return;
}
int main()
{
    print_n_terms_fibonacci(5);
}
