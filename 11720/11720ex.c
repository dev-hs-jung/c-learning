#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int sum =0;
    for(int i=0; i<n;i++){
        int x;
        scanf("%1d",&x);
        sum += x;
    }
    // %1d 는 숫자 1개씩 입력받겠다
    printf("%d", sum);
}