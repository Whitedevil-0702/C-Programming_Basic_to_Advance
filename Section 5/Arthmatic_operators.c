/// WAP to undersatnd different Arthermatic Functions in c 

/// There are 2 types of Variable operations in c :

/// 1. Unary Operators - These operators operate on a single operand. Examples include:
///    - Increment (++) and Decrement (--) operators: These operators increase or decrease the value of a variable by 1, respectively.
///    - Unary plus (+) and minus (-) operators: These operators indicate the sign of a variable. The unary plus does not change the value, while the unary minus negates it.
///    - Logical NOT (!) operator: This operator negates the truth value of a boolean expression.
///    - Bitwise NOT (~) operator: This operator inverts the bits of an integer variable.
///    - Address-of (&) operator: This operator returns the memory address of a variable.

/// 2. Binary Operators - These operators operate on two operands. Examples include:
///    - Arithmetic operators: These operators perform basic mathematical operations such as addition (+), subtraction (-), multiplication (*), division (/), and modulus (%).
///    - Relational operators: These operators compare two values and return a boolean result. Examples include equal to (==), not equal to (!=), greater than (>), less than (<), greater than or equal to (>=), and less than or equal to (<=).
///    - Logical operators: These operators perform logical operations on boolean expressions. Examples include logical AND (&&), logical OR (||), and logical NOT (!).
///    - Bitwise operators: These operators perform bitwise operations on integer variables. Examples include bitwise AND (&), bitwise OR (|), bitwise XOR (^), left shift (<<), and right shift (>>).  

#include <stdio.h>
#include <math.h>
int main() {
    int a = 10, b = 5;
    printf("Addition: %d\n", a + b); // Addition
    printf("Subtraction: %d\n", a - b); // Subtraction
    printf("Multiplication: %d\n", a * b); // Multiplication
    printf("Division: %d\n", a / b); // Division
    printf("Modulus: %d\n", a % b); // Modulus

    return 0;
}