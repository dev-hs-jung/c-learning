#include <stdio.h>
int arr[10001];
int main(){
	int m, n,sum=0,min=10000,error=-1;
	scanf("%d%d", &m, &n);

	for (int i = 2; i <= n; i++) {
        for (int j = i+i; j <= n; j += i){
				arr[j] = 1;
            }
		if (i >= m && arr[i] == 0){
            sum += i;
            if(min > i){
                min=i;
            }
        }
	}
    if(sum !=0){
        printf("%d\n%d",sum,min);
    }
    else if(sum ==0){
        printf("%d",error);
    }
}