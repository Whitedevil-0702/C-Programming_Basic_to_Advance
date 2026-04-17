/// WAP to show declaration and initialization of variables in C.
#include <stdio.h> 
int main() {
    int a = 10; // Declaration and initialization of an integer variable
    char b = 'X'; // Declaration and initialization of a character variable
    float c = 3.14526; // Declaration and initialization of a float variable
    double d = 3.14159265358979323846; // Declaration and initialization of a double variable

    printf("integer: %d\n", a);
    printf("character: %c\n", b);
    printf("float: %f\n", c);
    printf("double: %lf\n", d);

    return 0;
}