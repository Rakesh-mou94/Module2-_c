#include <stdio.h>

int main() {
    FILE *fp;
    char str[100];

    // ---- Write to File ----
    fp = fopen("myfile.txt", "w");
    if (fp == NULL) {
        printf("Error creating file!\n");
        return 1;
    }

    printf("Enter a string to write into the file: ");
    fgets(str, sizeof(str), stdin);

    fputs(str, fp);   // write to file
    fclose(fp);        // close the file

    // ---- Read from File ----
    fp = fopen("myfile.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("\nContents of the file:\n");

    while (fgets(str, sizeof(str), fp) != NULL) {
        printf("%s", str);
    }

    fclose(fp);  // close after reading

    return 0;
}
