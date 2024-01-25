#include <stdio.h>

void print_numbers(int n) {
    if (n > 0) {
        printf("%d ", n);
        print_numbers(n - 1);
    }
}

int main() {
    int num = 50;
    print_numbers(num);
    return 0;
}