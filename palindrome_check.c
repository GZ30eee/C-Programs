#include <stdio.h>
#include <string.h>

int is_palindrome(char str[]) {
    int start = 0, end = strlen(str) - 1;
    while (start < end) {
        if (str[start] != str[end])
            return 0;
        start++;
        end--;
    }
    return 1;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    if (is_palindrome(str)) {
        printf("'%s' is a palindrome.\n", str);
    } else {
        printf("'%s' is not a palindrome.\n", str);
    }

    return 0;
}
