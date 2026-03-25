/// WAP a program to demonstrate the use of relational operators in C ,by taking two integer values from the user and comparing them using relational operators.
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two integers: ");
    scanf("%d %d",&a,&b);
    printf("a= %d, b= %d\n",a,b);
    printf("a==b: %d\n",a==b); //Equal to
    printf("a!=b: %d\n",a!=b); //Not equal to
    printf("a>b: %d\n",a>b);   //Greater than
    printf("a<b: %d\n",a<b);   //Less than
    printf("a>=b: %d\n",a>=b); //Greater than or equal to
    printf("a<=b: %d\n",a<=b); //Less than or equal to

    return 0;
}