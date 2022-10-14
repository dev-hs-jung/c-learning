#include <stdio.h>

int main(){
    int n,t,num;
    scanf("%d",&n);

    for(int i=1; i<n; i++){
        int t = i;
        int num =i;

        while(t>0){
            num +=t%10;
            t /= 10;
        }
        if(num == n){
            printf("%d",i);
            n =0;
            break;
        }
    }
    if(n !=0){
        printf("0");
    }
}