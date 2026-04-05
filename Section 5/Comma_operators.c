/// Comma Operators
#include <stdio.h>
int main() {
    int sum,a,b,c;
    sum = (a=10, b=20, c=30, a+b+c); // The comma operator evaluates each of its operands (from left to right) and returns the value of the last operand

    printf("The sum is %d", sum);
    return 0;

}