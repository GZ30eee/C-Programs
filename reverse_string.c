#include <stdio.h>
#include <string.h>

void reverse_string(char str[]) {
    int length = strlen(str);
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    printf("Reversed string: ");
    reverse_string(str);

    return 0;
}
