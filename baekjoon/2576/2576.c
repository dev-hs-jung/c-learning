#include <stdio.h>

int main(){
    int array[7];
    int sum=0,min=100,cnt=0;
    for(int i=0; i<7; i++){ //7개의 수 입력받기
        scanf("%d",&array[i]); 
    }
    for(int i=0; i<7; i++){ //홀수 구하고 최소값 구하기
        if(array[i] % 2 == 1){
            sum += array[i];
            if(array[i] < min){
                min = array[i];
            }
        }
    }
    for(int i=0; i<7; i++){
        if(array[i] % 2 == 0){
            cnt++;
        }
    }
    if(cnt == 7){
        cnt = -1;
        printf("%d",cnt);
    }
    else{
    printf("%d\n%d",sum,min);
    }
}