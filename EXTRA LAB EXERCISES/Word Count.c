#include <stdio.h>

int main() {
    char str[200];
    int i = 0, words = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        // Word ends when current char is not space
        // AND next char is space/newline/end
        if (str[i] != ' ' && (str[i+1] == ' ' || str[i+1] == '\0' || str[i+1] == '\n')) {
            words++;
        }
        i++;
    }

    printf("Total Words = %d\n", words);
    return 0;
}
