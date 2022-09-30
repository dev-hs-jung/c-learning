#include <stdio.h>

int main(){
    int n,st=0;
    int number[100];
    scanf("%d",&n);

    for(int i=0; i<n; i++){
        scanf("%d",&number);
        for(int j=i-1; j>=0; j--){
            if(number[j]>number[i]){
                number[j+1] = number[j];
            }
            else{
                break;
            }
        }
        number[j+1]=st;
        printf("%d",st);
    }
}
