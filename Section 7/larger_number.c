/// WAP that finds which number is larger 
#include <stdio.h>
int max (int x,int y);
int main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("Maximum of %d and %d is %d\n",a,b,max(a,b));
    return 0;
}
int max (int x,int y)
{
    if (x > y) {
        return x;
    } else {
        return y;
    }
}