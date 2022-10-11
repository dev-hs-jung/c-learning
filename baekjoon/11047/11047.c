#include <stdio.h>
int main(){
    int coin[10];
    int n,k,price,i;
    scanf("%d%d",&n,&k);
    for(int j=0; j<n; j++){
        scanf("%d",&coin[j]);
    }
    int cnt=0;
    i=n-1;
    while(k >0){
        if(coin[i]>k){
            i--;
        }
        else if(coin[i]<= k){
            k -= coin[i];
            cnt++;
        }  
    }
    printf("%d",cnt);
}