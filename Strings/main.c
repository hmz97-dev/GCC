#include <stdio.h>
#include <string.h>

int main() {
    /* define first_name */
    char first_name[50] = "John";

    /* define last_name */
    char last_name[50] = "Boe";  // 'B' is already assigned here

    char name[100];

    // This line is fine now that last_name is defined
    last_name[0] = 'B';  // Reinforces the B in "Boe"

    // Combine first_name and last_name with a space
    sprintf(name, "%s %s", first_name, last_name);

    if (strncmp(name, "John Boe", 100) == 0) {
        printf("Done!\n");
    }

    // Reset name
    name[0] = '\0';

    // Concatenate first 4 characters of first_name and all of last_name
    strncat(name, first_name, 4);
    strncat(name, last_name, 20);

    printf("%s\n", name);

    return 0;
}

