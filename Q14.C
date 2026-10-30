#include <stdio.h>
int main() {
    int n, i, j, num = 1;
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            if (j > 1) printf(" ");
            printf("%d", num++);
        }
        printf("\n");
    }
    return 0;
}