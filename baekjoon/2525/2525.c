#include <stdio.h>

int main()
{
    int hour, minute, cook,sum;
    scanf("%d%d", &hour, &minute);
    scanf("%d", &cook);
    minute += cook;
    sum = minute / 60;
    hour += sum;
    if (minute >=60){
        minute = minute % 60;
    } 
    if (hour >=24){
        hour = hour % 24;
    }
    printf("%d %d",hour,minute);  
}