#include <stdio.h>
int arr[1000];
int main(){
	int t, n,cnt=0;
	scanf("%d", &t);

    for(int k=0; k<t; k++){
        scanf("%d",&n);
        for (int i = 2; i <= n; i++) {
            for(int j = i+i; j <= n; j += i){
                arr[j] = 1;
            }
            if(arr[i] == 0){
                cnt++;
            }
        }
    }
    printf("%d",cnt);
}