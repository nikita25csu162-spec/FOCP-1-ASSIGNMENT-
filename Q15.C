#include <stdio.h>
int main() {
    int n, i, j, wing, gap;
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        wing = (i <= (n + 1) / 2) ? i : n - i + 1;
        gap = 2 * (n - wing) + 1;

        for (j = 1; j <= wing; j++)
            printf("*");

        for (j = 1; j <= gap; j++)
            printf(" ");

        for (j = 1; j <= wing; j++)
            printf("*");

        printf("\n");
    }
    return 0;
}