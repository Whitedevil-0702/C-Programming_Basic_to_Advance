///Write a Program to Understand relational operators in C.
///Relational operators are used to compare two values. They return either true (1) or false (0) based on the comparison.
#include<stdio.h>
int main()
{
    int a=10,b=20;
    printf("a= %d, b= %d\n",a,b);
    printf("a==b: %d\n",a==b); //Equal to
    printf("a!=b: %d\n",a!=b); //Not equal to
    printf("a>b: %d\n",a>b);   //Greater than
    printf("a<b: %d\n",a<b);   //Less than
    printf("a>=b: %d\n",a>=b); //Greater than or equal to
    printf("a<=b: %d\n",a<=b); //Less than or equal to

    return 0;
}