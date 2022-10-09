#include <stdio.h>

int main(){
    int num[5];
    int n,sum=0,min,mid,max;

    for(int i=0; i<5; i++){
        scanf("%d",&n);
        if(n % 10 ==0 && n <=100){
            num[i] = n;
            }
        }
    min =101; max =0; mid = 101;
    for(int i=0; i<5; i++){
        sum += num[i];
        if(min > num[i]){
            min = num[i];
        }
        else if(max < num[i]){
            max = num[i];
        }

        
    }
    for(int i=0; i<5; i++){
        if(min < num[i] && mid > num[i]){
                mid = num[i];
        }    
    }
    printf("min :%d  mid : %d max :  %d\n",min,mid,max);
    printf("%d\n%d",sum/5,mid);
}