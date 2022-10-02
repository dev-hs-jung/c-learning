#include <stdio.h>

void QuickSort(int arr[],int left,int right){
    int L =left,R=right;
    int temp;
    int pivot =arr[(left+right)/2];
    
    while(L<=R){
        while(arr[L<pivot]){
            L++;
        }
        while(arr[R]>pivot){
            R--;
        }
        if(L<=R){
            if(L != R){
                temp = arr[L];
                arr[L]=arr[R];
                arr[R]=temp;
                }
            L++;R--;
            for(int i=0; i<10;i++){
                printf("%d",arr[i]);
            }
            printf("\n");
        }
    }

    printf("1.left : %d < R: %d \n 2.right : %d >L : %d",left,R,right,L);
    if(left<R){
        QuickSort(arr,left,R);
    }
    if(L<right){
        QuickSort(arr,L,right);
    }
}
int main(){

    int data[10] = {2,9,4,18,4,1,7,8,15,12};

    for(int i=0; i<10; i++){
        printf("%d",data[i]);
    }
    printf("\n\n");
    QuickSort(data,0,9);
    for(int i=0; i<10;i++){
        printf("%d",data[i]);
    }
    printf("\n");

    return 0;
}