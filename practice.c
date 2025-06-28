// #include<stdio.h>
// int main()
// {
//     int age=48;
//     printf("age is %d \n",age);
//     return 0;
// }



// #include<stdio.h>
//  int main()
//  {
//     float pi=3.14;
//     printf("the value of pi is %.5f \n",pi);
//     return 0;
//  }



// #include<stdio.h>
// int main()
// {
//     char star='*';
//     printf("the special character is %c \n",star);
//     return 0;
// }



// #include<stdio.h>
// int main()
// {
//     int age;printf("enter age");
//     scanf("%d",&age);
//     printf("age is : %d \n",age);
//     return 0;
// }



// #include<stdio.h>
// int main()
// {
//     int a,b;
//     printf("enter a : \n");
//     scanf("%d" ,&a);
//     printf("enter b : \n");
//     scanf("%d" ,&b);
//     int sum = a+b;
//     printf("sim is %d \n",sum);
//     return 0;
// }



// #include<stdio.h>
// int main(){
//     int a,b;
//     printf("enter a: \n");
//     scanf("%d" ,&a);
//     printf("enter b: \n");
//     scanf("%d" ,&b);
//     printf("sume is %d \n",a+b);
//     return 0;
// }



// #include<stdio.h>
// int main(){
//     int a;
//     printf("enter the value of a: \n");
//     scanf("%d",&a);
//     printf("area of the square with side a is %d \n",a*a);
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     float a;
//     printf("enter the value of a: \n");
//     scanf("%f",&a);
//     printf("area of the square with side a is %.5f \n",a*a);
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     float radius;
//     printf("the radius of the circle is: \n");
//     scanf("%f" ,&radius);
//     printf("area of the circle is %.3f \n",3.14*radius*radius);
//     return 0;
// }


// cant use and declare value to  more than 1 variables in the same statement 
// modulus(i.e remainder)function doesnt works with float values
// in case of modulus function if numerator is positive the answer is positive but if numerator is negative the answer is negative
// int operation with float will always result in float value(because float requires 4 bytes while int requires only 2 bytes)

// #include<stdio.h>
// int main(){
// float a,b;
// a=b=2;
// float c=a*b;
// printf("value of c is %.1f \n",c);
// return 0;
// }


// #include<stdio.h>
// int main(){
//     int a=(int) 1.9999;
//     // here if we do not specify(int)that will be considered as implicit(forceful) conversion 
//     printf("value of a is %d \n",a);
//     return 0;
// }


// #include<stdio.h>
// int main(){
// int a,b;
// printf("enter a: ");
// scanf("%d",&a);
// printf("enter b: ");
// scanf("%d",&b);
// here if condition will be used
// printf("a==b \n");
// return 0;
// }


// #include<stdio.h>
// int main(){
//     printf("%d \n",4==7);
//     printf("%d \n",5>4);
//     printf("%d \n",4!=4);
//     return 0;
// }
// 0 shows that the result is false 1 shows that result is true
// false statement results in zero whereas true statement results in 1


// #include<stdio.h>
// int main(){
//     printf("%d \n", 4>3 && 6>5);
//     return 0;
// }
// logical and


// #include<stdio.h>
// int main(){
//     printf("%d \n", 4<3 || 6>5);
//     return 0;
// }
// logical or


// #include<stdio.h>
// int main(){
//     printf("%d \n", 4<3 && 6>5);
//     return 0;
// }
// logical and false case

// logical not makes false statement true and true statement false
// #include<stdio.h>
// int main(){
// printf("%d \n",!(4>7));
// return 0;
// }


// #include<stdio.h>
// int main(){
//     int sunday;
//     int snowing;
//     printf("enter value of sunday: ");
//     scanf("%d",&sunday);
//     printf("enter snowing: ");
//     scanf("%d",&snowing);
//     printf("%d \n", (sunday && snowing));
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int monday;
//     int raining;
//     printf("enter value of monday: ");
//     scanf("%d",&monday);
//     printf("enter raining: ");
//     scanf("%d",&raining);
//     printf("%d \n", (monday || raining));
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int a;
//     int b;
//     printf("enter a: ");
//     scanf("%d",&a);
//     printf("enter b: ");
//     scanf("%d",&b);
//     printf("%d \n",(a>9 && b<100));
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int a,b,c;
//     printf("enter a:\n");
//     scanf("%d",&a);
//     printf("enter b:\n");
//     scanf("%d",&b);
//      printf("enter c:\n");
//      scanf("%d",&c);
//      int d=(a+b+c)/2;
//      printf("the average is %d \n",d);
//      return 0;
// }


// #include<stdio.h>
// int main(){
//     int a;
//     printf("value of a is:\n");
//     scanf("%d",&a);
//     if(a>10)
//     {
//         printf("adult \n");
//         printf("can drive\n");
//         printf("can vote\n");
//     }
//     else
//     {
//         printf("kid \n");
//     }
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int a;
//     printf("age is:");
//     scanf("%d",&a);
//     if(a>=18)
//     {
//         printf("adult\n");
//     }
//     else if(a>12 && a<18)
//     {
//         printf("teenager \n");
//     }
//     else
//     {
//         printf("child \n");
//     }
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int age;
//     printf("enter age");
//     scanf("%d",&age);
//     age>=18 ? printf("adult \n") : printf("not adult \n");
//     return 0; 
// }


// #include<stdio.h>
// int main(){
//     int marks;
//     printf("enter the marks obtained: \n");
//     scanf("%d",&marks);
//     if(marks<=30)
//     {
//         printf("fail\n");
//     }
//     else
//     {
//         printf("pass\n");
//     }
//     return 0;
// }



// #include<stdio.h>
// int main(){
//     int marks;
//     printf("enter the marks obtained: \n");
//     scanf("%d",&marks);
//     if(marks<=30)
//     {
//         printf("fail\n");
//     }
//     else if(marks>30 && marks<=100)
//     {
//         printf("pass\n");
//     }
//     else{
//         printf("not valid\n");
//     }
//     return 0;
// }


// #include<stdio.h>
// int main (){
//     int marks;
//     printf("enter marks:\n");
//     scanf("%d",&marks);
//     marks<=30?printf("fail\n"):printf("pass\n");
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int marks;
//     printf("the marks of the student are:");
//     scanf("%d",&marks);
//     if(marks>=30 && marks<70)
//     {
//         printf("the grade is b\n");
//     }
// else if(marks>=70 && marks<90)
//     printf("the grade is A\n");
//     else if(marks>=90 && marks<=100)
//     {
//         printf("the grade is A+\n");
//     }
//     else{
//         printf("invalid output");
//     }
//     return 0;
// }


// #include<stdio.h>
// int main(){
// int x=2;
// if(x=1) this will return the value as 1 because single =will assign value 1 to x
// {
// printf("x is equal to 1\n");
// }
// else{
//     printf("x is not equal to 1\n");
// }
// return 0;
// }


// #include<stdio.h>
// int main(){
//     char ch;
//     printf("enter an character: \n");
//     scanf("%c",&ch);
// if(ch>='a' && ch<='z')
// {
//     printf("the alphabet is lower case \n");
// }
// else if(ch>='A' && ch<='Z')
// {
//     printf("alphabet is upper case \n");
// }
// else
// {
//     printf("invalid output \n");
// }
// return 0;
// }


// #include<stdio.h>
// int main(){
//     int i,j,rows;  
//     rows=5;
//     for(i=1;i<=rows;i++)
//     {
//         for(j=1;j<=i;j++)
//         {
//             if((i==3 && j==2)||(i==4 && (j==2 || j==3)))
//             {
//                 printf("  ");
//             }else{
//                 printf("* ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }



// #include<stdio.h>
// void print_pattern()
// {
//     int rows=12;
//     printf("*\n");
//     rows--;
//     int spaces=0;
//     for(int i = 0 ; i < rows ; i ++)
//     {printf("*");
//         for(int j = 0; j < spaces; j ++)
//         {
//             printf(" ");
//         }
//         spaces ++;
//         printf("*\n");
//     }
//     for(int i =0;i < spaces + 2;i ++)
//     {
//         printf("*");
//     }
// }
// void main()
// {
//     print_pattern();
//     return;
// }



// #include<stdio.h>
// void print_n_terms_fibonacci(int terms)
// {
//     int n1,n2;
// n1=0;n2=1;
// for(int i=0;i<terms;i++)
// {
//     printf("%d ",n1);
//     int t=n1+n2;
//     n1=n2;
//     n2=t;
// }
// return;
// }
// int main()
// {
//     print_n_terms_fibonacci(5);
// }



// #include <stdio.h>

// int main() {
//     int a[2][2], b[2][2], result[2][2];
//     int i, j, k;

//     // Input elements for first matrix
//     printf("Enter elements of first 2x2 matrix (a):\n");
//     for (i = 0; i < 2; i++) {
//         for (j = 0; j < 2; j++) {
//             printf("a[%d][%d]: ", i, j);
//             scanf("%d", &a[i][j]);
//         }
//     }

//     // Input elements for second matrix
//     printf("Enter elements of second 2x2 matrix (b):\n");
//     for (i = 0; i < 2; i++) {
//         for (j = 0; j < 2; j++) {
//             printf("b[%d][%d]: ", i, j);
//             scanf("%d", &b[i][j]);
//         }
//     }

//     // Initialize result matrix to zero
//     for (i = 0; i < 2; i++) {
//         for (j = 0; j < 2; j++) {
//             result[i][j] = 0;
//         }
//     }

//     // Multiply matrices
//     for (i = 0; i < 2; i++) {
//         for (j = 0; j < 2; j++) {
//             for (k = 0; k < 2; k++) {
//                 result[i][j] += a[i][k] * b[k][j];
//             }
//         }
//     }

//     // Display the result
//     printf("\nResult of multiplication (a x b):\n");
//     for (i = 0; i < 2; i++) {
//         for (j = 0; j < 2; j++) {
//             printf("%d\t", result[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }
