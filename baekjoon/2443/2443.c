#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    for(int i=n; i>0; i--){
        for(int z=n; z>i; z--){
            printf(" ");
        }
        for(int j=i; j>0; j--){
            printf("*");
        }
        for(int k=i-1; k>0; k--){
            printf("*");
        }
        printf("\n");
    }
}