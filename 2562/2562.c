#include <stdio.h>

int main(){
    int Num,Max=0,cnt;

    for(int i= 1; i<=9; i++)
    {
        scanf("%d",&Num);
        if(Max < Num)
        {
            Max = Num;
            cnt = i;
        }
    }
    printf("%d\n%d",Max,cnt);
}