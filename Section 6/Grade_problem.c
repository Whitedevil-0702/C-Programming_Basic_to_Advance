/// Write a program to find teh grade of students when the marks of 4 subjects is given 
#include <stdio.h>
int main() {
    int marks[4];
    float average;
    char grade;

    printf("Enter marks for 4 subjects: ");
    for (int i = 0; i < 4; i++) {
        scanf("%d", &marks[i]);
    }

    // Calculate average
    average = (marks[0] + marks[1] + marks[2] + marks[3]) / 4.0;

    // Determine grade based on average
    if (average >= 90) {
        grade = 'A';
    } else if (average >= 80) {
        grade = 'B';
    } else if (average >= 70) {
        grade = 'C';
    } else if (average >= 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    printf("Average Marks: %.2f\n", average);
    printf("Grade: %c\n", grade);

    return 0;
}