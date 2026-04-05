/// Conditional Operators 
#include <stdio.h>
int main() {
    int max ,a,b;
    printf("Enter Your Two Numbers");
    scanf("%d %d",&a,&b);
    max = (a>b) ? a : b; // if a is greater than b then assign a to max otherwise assign b to max
    printf("The Maximum Number is %d",max);
    return 0;
}