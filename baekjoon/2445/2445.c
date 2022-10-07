#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    for(int i=n; i>0; i--){
        for(int j=i; j<n+1; j++){
            printf("*");
        }
        for(int k=i; k>1; k--){
            printf(" ");
        }
        for(int z=i; z>1; z--){
            printf(" ");
        }
        for(int x=i; x<n+1; x++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=1; i<n; i++){
        for(int j=i; j<n; j++){
            printf("*");
        }
        for(int k=i; k>0; k--){
            printf(" ");
        }
        for(int k=i; k>0; k--){
            printf(" ");
        }
        for(int j=i; j<n; j++){
            printf("*");
        }
        printf("\n");
    }
}