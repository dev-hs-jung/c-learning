#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    int  a, b, max1;
    scanf("%d%d", &a, &b);
    int lim = (a < b) ? a : b;
    for (int i = 1; i <= lim; i++)
        if ((a % i == 0) && (b % i) == 0)
            max1 = i;
    printf("%d\n%d", max1, ((a * b) / max1));
}