#include <stdio.h>

int main(){
    int test,floor,number;
    int arr[15][15];
    scanf("%d",&test);
    for(int t=0; t<test; t++){ 
        scanf("%d%d",&floor,&number);
            for(int i =1; i <=number; i++){
                arr[0][i]  = i;
                }
            for(int j=1; j<=floor; j++){
                for(int i=1; i<=number; i++)
                    arr[j][i] = arr[j-1][i] +((i!=1?arr[j][i-1]:0);
            }
        printf("%d\n",arr[floor][number]);
    }
}
