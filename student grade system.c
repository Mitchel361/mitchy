#include <stdio.h>

int main() {
    int marks;

    // Ask user to enter marks
    printf("Enter your marks: ");
    scanf("%d", &marks);

    // Determine grade based on marks
    if (marks >= 90)
        printf("Grade: A");   // Excellent
    else if (marks >= 75)
        printf("Grade: B");   // Very good
    else if (marks >= 60)
        printf("Grade: C");   // Good
    else if (marks >= 50)
        printf("Grade: D");   // Pass
    else
        printf("Grade: F");   // Fail

    return 0;
}