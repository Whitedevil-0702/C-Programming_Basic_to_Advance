/// Write the program to print numbers from 1 to 10 using while loops 
#include <stdio.h>
int main() {
    int i = 1;
    printf("Numbers from 1 to 10 using while loop:\n");
    while (i <= 10) {
        printf("%d ", i);
        i++;
    }
    printf("\n");
    return 0;
}