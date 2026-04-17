///User Defined Functions in C Programming
#include<stdio.h>
void hello(); //function Declaration
int main()
{
    hello(); //function call
    hello();
    hello();
    hello();
    return 0;
}
void hello() //function definition
{
    printf("Hello World\n");
}