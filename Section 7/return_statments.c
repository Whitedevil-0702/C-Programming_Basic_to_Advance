/// Return Statments in C 
#include <stdio.h>
void fun (int age);
int main() {
    int age ;
    printf("Enter your age:");
    scanf("%d",&age);
    fun(age);
    return 0;
}
void fun (int age)
{
    if (age < 18) {
        printf("You are a minor.\n");
        return; // Exit the function early
    }
    printf("You are an adult.\n");
}
