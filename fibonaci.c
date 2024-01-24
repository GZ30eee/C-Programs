#include <stdio.h>

int main() {
    int n, i, a = 0, b = 1;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("%d ", a);
        int temp = a;
        a = b;
        b = temp + b;
    }

    return 0;
}