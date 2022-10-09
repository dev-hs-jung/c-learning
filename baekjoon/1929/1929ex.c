#include <stdio.h>
int arr[1000001] = { 0, };
int main() {
   int n, m, i, j;
   scanf("%d%d", &n, &m);
   for (i = 2; i <= m; i++) {
      if (!arr[i]) {
         for (j = 2*i; j <= m; j += i)arr[j] = 1;
         if (i >= n)   printf("%d\n", i);
      }
   }
}