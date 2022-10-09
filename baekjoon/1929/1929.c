#include <stdio.h>
int arr[1000001];
int main(){
	int m, n,cnt=0;;
	scanf("%d%d", &m, &n);

	for (int i = 2; i <= n; i++) {
        for (int j = i+i; j <= n; j += i){
				arr[j] = 1;
            }
		if (i >= m && arr[i] == 0){
            cnt++;
            printf("%d\n", i);
        }
	}
    printf("%d",cnt);
}