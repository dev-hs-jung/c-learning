#include <stdio.h>

int main()
{
	int t,n,num;
	int cnt = 0;
    scanf("%d", &t);
    for (int i = 0; i < t; i++){
        scanf("%d", &n);
        for (int j = 2; j <= n; j++){	
			if (n == j){
				cnt++;
			}
			if (n % j == 0){
				num=1;
			}
		}
	}
	printf("%d", cnt);
}