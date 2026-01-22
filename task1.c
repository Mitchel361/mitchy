#include <stdio.h>

int main() {
    int n;
    char ch[100], temp;

    // Step 1: Read number of characters
    printf("Enter number of characters: ");
    scanf("%d", &n);

    // Step 2: Read characters
    printf("Enter %d characters:\n", n);
    for (int i = 0; i < n; i++) {
        scanf(" %c", &ch[i]);  // space before %c ignores newline
    }

    // Step 3: Sort characters (ascending order)
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (ch[j] > ch[j + 1]) {
                temp = ch[j];
                ch[j] = ch[j + 1];
                ch[j + 1] = temp;
            }
        }
    }

    // Step 4: Display sorted characters
    printf("Sorted characters:\n");
    for (int i = 0; i < n; i++) {
        printf("%c ", ch[i]);
    }

    return 0;
}
