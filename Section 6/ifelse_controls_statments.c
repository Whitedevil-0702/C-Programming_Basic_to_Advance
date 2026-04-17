/// ifelse Controls Statements
#include <stdio.h>
int main() {
    int a,b;
    printf("Enter Your Two Numbers");
    scanf("%d %d",&a,&b);
    if (a>b)
    {
        printf("The Maximum Number is %d",a);
    }
    else
    {
        printf("The Maximum Number is %d",b);
    }
    
    return 0;
}