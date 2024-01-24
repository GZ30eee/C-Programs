#include <stdio.h>
#include <time.h>

int fib(int n) {
    if (n <= 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fib(n-1) + fib(n-2);
    }
}

int main() {
    int n, i;
    clock_t start, end;
    double time_taken;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    start = clock();
    for (i = 0; i < n; i++) {
        fib(i);
    }
    end = clock();

    time_taken = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Time taken: %f seconds\n", time_taken);

    return 0;
}