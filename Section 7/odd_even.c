/// WAP that finds whether a number is even or odd 
#include <stdio.h>
int main() {
    int num ;
    printf("Enter a number: ");
    scanf("%d",&num);
    find(num);
    return 0;
}
void find (int num)
{
    if (num % 2 == 0) {
        printf("%d is an even number.\n", num);
    } else {
        printf("%d is an odd number.\n", num);
    }
}