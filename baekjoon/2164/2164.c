#include <stdio.h>

int main(){
    int kg,sum,cnt=0;
    scanf("%d",&kg);
    if(kg>=3){
        while(kg>=5){
            if(kg % 5 > 3){
                kg -= 5;
                cnt++;
            }
        }
        while(kg>=3){
            kg -=3;
            cnt++;
        }
        if(kg == 0){
            printf("%d",cnt);
        }
        else if(kg != 0){
            printf("-1");
        }
    }
}