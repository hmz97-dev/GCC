#include <stdio.h>

int sum(int num) {
    /**
     * find sum to n numbers using formula
     */
    return num * (num + 1) / 2;
}

int main() {
    printf("%d ", sum(55));
    printf("%d ", sum(45));
    printf("%d ", sum(50));
    return 0;
}

