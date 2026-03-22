/// WAP To understand Assignment Operators in C
#include <stdio.h>
int main() {
    int a = 10; // Assignment operator (=) is used to assign the value 10 to variable a
    printf("Initial value of a: %d\n", a);

    a += 5; // Compound assignment operator (+=) adds 5 to the current value of a
    printf("After a += 5: %d\n", a);

    a -= 3; // Compound assignment operator (-=) subtracts 3 from the current value of a
    printf("After a -= 3: %d\n", a);

    a *= 2; // Compound assignment operator (*=) multiplies the current value of a by 2
    printf("After a *= 2: %d\n", a);

    a /= 4; // Compound assignment operator (/=) divides the current value of a by 4
    printf("After a /= 4: %d\n", a);

    a %= 3; // Compound assignment operator (%=) assigns the remainder of the division of the current value of a by 3 to a
    printf("After a %%= 3: %d\n", a);

    return 0;
}