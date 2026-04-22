#include <stdio.h>

int main() {
    FILE *file;
    char task[100];
    int choice;

    // Infinite loop for menu system
    while(1) {

        // Display menu options
        printf("\n1. Add Task\n2. View Tasks\n3. Exit\n");
        printf("Choose: ");
        scanf("%d", &choice);

        // Option 1: Add task to file
        if(choice == 1) {
            file = fopen("tasks.txt", "a"); // open file in append mode

            printf("Enter task: ");
            scanf(" %[^\n]", task); // read full line including spaces

            fprintf(file, "%s\n", task); // write task to file
            fclose(file); // close file
        }

        // Option 2: Read and display tasks
        else if(choice == 2) {
            file = fopen("tasks.txt", "r"); // open file in read mode

            printf("\nTasks:\n");

            // Read file line by line
            while(fgets(task, sizeof(task), file)) {
                printf("%s", task);
            }

            fclose(file); // close file
        }

        // Option 3: Exit program
        else if(choice == 3) {
            break;
        }

        // Invalid option handling
        else {
            printf("Invalid choice. Try again.");
        }
    }

    return 0;
}