#include <stdio.h>

// Function to calculate total marks
int calculateTotal(int marks[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += marks[i];
    }
    return total;
}

// Function to calculate average marks
float calculateAverage(int marks[], int size) {
    int total = calculateTotal(marks, size); // reuse total function
    return (float)total / size;
}

// Function to find the highest mark
int findMax(int marks[], int size) {
    int max = marks[0];
    for (int i = 1; i < size; i++) {
        if (marks[i] > max) {
            max = marks[i];
        }
    }
    return max;
}

int main() {
    int marks[5]; // array to store 5 subject marks
    int size = 5;

    // Get marks from the user
    printf("Enter marks for 5 subjects:\n");
    for (int i = 0; i < size; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    // Using functions to calculate results
    int total = calculateTotal(marks, size);
    float average = calculateAverage(marks, size);
    int max = findMax(marks, size);

    // Display the results
    printf("\nTotal Marks: %d\n", total);
    printf("Average Marks: %.2f\n", average);
    printf("Highest Mark: %d\n", max);

    return 0;
}

