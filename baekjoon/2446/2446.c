#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        for(int k=n+1; k<n+i; k++){
            printf(" ");
        }
        for(int j=n; j>=i; j--){
            printf("*");
        }
        for(int j=n-1; j>=i; j--){
            printf("*");
        }
        printf("\n");
    }
    for(int i=1; i<n; i++){
       for(int j=n; j>i+1; j--){
            printf(" ");
        }
        for(int k=n; k<n+i+1; k++){
            printf("*");
        }
        for(int k=n; k<n+i; k++){
            printf("*");
        }        
        printf("\n");
    }  
}