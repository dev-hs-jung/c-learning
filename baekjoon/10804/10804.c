#include <stdio.h>

int main(){
    int card[21];
    int a,b,change=0;
    for(int i=1; i<=20; i++){
        card[i] = i;
    }

    for(int i=0; i<1; i++){
        scanf("%d%d",&a,&b);
        for(int j=a; j<=b; j++){ //4~7 4,5,6,7 4번
            int change = card[a];
            card[a++] = card[b];
            card[b--] = change;
        }
    }
    for(int i=1; i<=20; i++){
        printf("%d ",card[i]);
    }
}