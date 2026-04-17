/// Function Arguments
#include <stdio.h>
void greet(char name[]); // Function prototype
int main() {
    char name[50];
    printf("Enter your name: ");
    scanf("%s", name); // Read user input
    greet(name); // Call the function with the argument
    return 0;
}