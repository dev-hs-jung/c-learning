#include <stdio.h>
int arr[100]= {0, };
int main() {
   int n,max=0,x;
   scanf("%d", &n);
   for (int i = 0; i < n; i++) {
         //입력받기
        scanf("%d", &x);
        if (max <= x){
            max = x;
        }
      arr[x]++;
   }

   //init 0으로 셋팅
   for (int i = 0; i <= max; i++) {
      if(arr[i] != 0){
        for (int j = 0; j < arr[i]; j++) {
            printf("%d\n", i);
        }
      }
   }
}