#include<stdio.h>
int main(){
    char ch;
    printf("enter an character: \n");
    scanf("%c",&ch);
if(ch>='a' && ch<='z')
{
    printf("the alphabet is lower case \n");
}
else if(ch>='A' && ch<='Z')
{
    printf("alphabet is upper case \n");
}
else
{
    printf("invalid output \n");
}
return 0;
}