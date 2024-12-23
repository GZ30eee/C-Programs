#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void compress(char* input, char* output) {
    FILE *in = fopen(input, "r");
    FILE *out = fopen(output, "w");

    if (in == NULL || out == NULL) {
        printf("Error opening file!\n");
        return;
    }

    char ch, prev_ch = 0;
    int count = 1;

    while ((ch = fgetc(in)) != EOF) {
        if (ch == prev_ch) {
            count++;
        } else {
            if (count > 1) {
                fprintf(out, "%d%c", count, prev_ch);
            } else if (count == 1) {
                fputc(prev_ch, out);
            }
            prev_ch = ch;
            count = 1;
        }
    }

    if (count > 1) {
        fprintf(out, "%d%c", count, prev_ch);
    } else if (count == 1) {
        fputc(prev_ch, out);
    }

    fclose(in);
    fclose(out);
}

int main() {
    char input[] = "input.txt";
    char output[] = "output.txt";

    compress(input, output);

    printf("File compressed successfully!\n");

    return 0;
}
