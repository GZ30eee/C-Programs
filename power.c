long int x_to_the_n (int x,int n) {
    int i;
    long int number = 1;
    for (i = 0; i < n; ++i)
        number *= x;
    return (number);
}
int main () {
    int number;
    int exponent;
    long int answer;
    printf ("Enter a number: ");
    scanf ("%i", &number);
    printf ("Enter a number that represents the power you want your number to be raised to: ");
    scanf ("%i", &exponent);
    answer = x_to_the_n (number,exponent);
    printf ("X To The N is %li",answer);
    return 0;
}

