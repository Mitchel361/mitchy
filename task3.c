#include <stdio.h>
#include <string.h>

struct Product {
    char name[30];
    float price;
    int quantity;
};

int main() {
    struct Product p[100];
    int count = 0;
    FILE *fp;

    // ---------- Writing to file ----------
    fp = fopen("products.txt", "w");

    if (fp == NULL) {
        printf("File error!\n");
        return 1;
    }

    while (1) {
        printf("Enter product name (END to stop): ");
        scanf("%s", p[count].name);

        if (strcmp(p[count].name, "END") == 0)
            break;

        printf("Enter price: ");
        scanf("%f", &p[count].price);

        printf("Enter quantity: ");
        scanf("%d", &p[count].quantity);

        fprintf(fp, "%s %.2f %d\n",
                p[count].name,
                p[count].price,
                p[count].quantity);

        count++;
    }

    fclose(fp);

    // ---------- Reading from file ----------
    fp = fopen("products.txt", "r");

    if (fp == NULL) {
        printf("File error!\n");
        return 1;
    }

    int found = 0;

    printf("\nProducts found:\n");

    while (fscanf(fp, "%s %f %d",
                  p[0].name,
                  &p[0].price,
                  &p[0].quantity) != EOF) {

        if (strcmp(p[0].name, "soap") == 0 ||
            strcmp(p[0].name, "carrot") == 0) {

            printf("%s %.2f %d\n",
                   p[0].name,
                   p[0].price,
                   p[0].quantity);
            found = 1;
        }
    }

    fclose(fp);

    // ---------- If not found, print all ----------
    if (!found) {
        fp = fopen("products.txt", "r");

        printf("\nNo soap or carrot found. Displaying all products:\n");

        while (fscanf(fp, "%s %f %d",
                      p[0].name,
                      &p[0].price,
                      &p[0].quantity) != EOF) {

            printf("%s %.2f %d\n",
                   p[0].name,
                   p[0].price,
                   p[0].quantity);
        }

        fclose(fp);
    }

    return 0;
}
