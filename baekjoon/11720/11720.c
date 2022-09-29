#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for(int i=0; i<n;i++) scanf("%1d",&arr[i]);
    // %1d 는 숫자 1개씩 입력받겠다.

    int sum =0;
    for(int i=0;i<n;i++){
        sum +=arr[i];
    }
    printf("%d", sum);

}