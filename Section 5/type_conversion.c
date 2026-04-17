/// Type Conversion in C 
#include<stdio.h>
int main() {
    int a = 10;
    float b = 5.5;
    float sum;

    // Implicit type conversion (automatic)
    sum = a + b; // 'a' is implicitly converted to float before addition

    printf("The sum is: %.2f\n", sum); // Output will be 15.50
    return 0;
}