#include <stdio.h>

int main(){
    int hour,min;
    scanf("%d%d",&hour,&min);

    if(hour >=0 && hour <= 23 && min >= 0 && min <= 59){
        if(min >=45)
        {
            min = min-45;
            printf("%d %d",hour,min);
        }
         else{
        if(hour == 0 ){
            hour=23;
        }
        else{
            hour = hour -1;
        }
        min = 60 + (min-45);
        printf("%d %d",hour,min);
    }
    return 0;
    } 
}