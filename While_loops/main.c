#include <stdio.h>

int main() {
    int array[] = {1, 7, 4, 5, 9, 3, 5, 11, 6, 3, 4};
    int i = 0;

    while (i < 11) {  // array has 11 elements (index 0 to 10)
        printf("%d\n", array[i]);
        i++;
    }

    return 0;
}

