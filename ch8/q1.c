#include <stdio.h>
#include <string.h>
void main() {
    char str[100];
    char *ptr = str;

    printf("Enter any string: ");
    if (fgets(str, sizeof(str), stdin)) {

        str[strcspn(str, "\n")] = '\0';

        int length = 0;
        while (*ptr != '\0') {
            length++;
            ptr++;
        }

        printf("The length of the string is: %d\n", length);
    } else {
        printf("Error reading input.\n");
    }

    getch();
}
