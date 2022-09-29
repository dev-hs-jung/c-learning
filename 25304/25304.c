#include <stdio.h>

int main(){
    int receipt,pct,price,n,sum;
    sum =0;
    scanf("%d\n",&receipt);
    scanf("%d\n",&pct);

    for (int i = 0; i < pct; i++){
        scanf("%d%d",&price,&n);
        sum += price*n;
    }
    if (receipt == sum){
        printf("Yes");
    }
    else{
        printf("No");
    }  
}