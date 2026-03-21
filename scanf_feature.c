/// WAP to read input data using scanf in C.
#include <stdio.h>
int main() {
    int a;
    char b;
    float c;
    double d;

    printf("Enter an integer: ");
    scanf("%d", &a); // Reading an integer

    printf("Enter a character: ");
    scanf(" %c", &b); // Reading a character (note the space before %c to consume any leftover newline)

    printf("Enter a float: ");
    scanf("%f", &c); // Reading a float

    printf("Enter a double: ");
    scanf("%lf", &d); // Reading a double

    printf("\nYou entered:\n");
    printf("Integer: %d\n", a);
    printf("Character: %c\n", b);
    printf("Float: %f\n", c);
    printf("Double: %lf\n", d);

    return 0;
}