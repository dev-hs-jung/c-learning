#include <stdio.h>

int main(){
    int arr[7];
    int tmp;

    for(int i=0; i<7; i++){
        scanf("%d",tmp);
        arr[i] = tmp;
    }
    for(int i=0; i<7; i++){
        printf("%d",arr[i]);
    }
}