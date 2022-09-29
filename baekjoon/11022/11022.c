#include <stdio.h>

int main(){
    int t,a,b,sum;
    scanf("%d",&t);

    for(int i=1; i<=t; i++){
        scanf("%d%d",&a,&b);
        sum = a+b;
        printf("Case #%d: %d + %d = %d\n",i,a,b,sum);
    }
}