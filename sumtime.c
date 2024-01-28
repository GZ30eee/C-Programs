#include <stdio.h>
#include <stdlib.h>

int* memo;

int sum(int n) {
    if (memo[n] != -1) {
        return memo[n];
    }

    if (n == 0) {
        memo[n] = 0;
    } else {
        memo[n] = n + sum(n - 1);
    }

    return memo[n];
}

int main() {
    int n, i;
    memo = (int*) malloc(sizeof(int) * (n + 1));

    for (i = 0; i <= n; i++) {
        memo[i] = -1;
    }

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    int result = sum(n);
    printf("Sum = %d", result);

    free(memo);
    return 0;
}