#include <stdio.h>
#include <conio.h>

int fact(int n);

void main() {
    int n, f;
    printf("Enter n: ");
    scanf("%d", &n);
    f = fact(n);
    printf("Factorial: %d", f);
    getch();
}

int fact(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * fact(n - 1);
    }
}
