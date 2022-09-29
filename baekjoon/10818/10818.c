#include <stdio.h>
int main(){
    int n,arr;
    int max, min;
    scanf("%d",&n);
    max =-1000000,min=1000000;
    for(int i=0; i<n; i++){
        scanf("%d",&arr);
        if(min > arr){
            min = arr;
        }
        if(max < arr){
            max = arr;
        }
    }
    printf("%d %d",min,max);
}