#include <stdio.h>

int main(){
    int x,y,mul;
    scanf("%d",&x);
    scanf("%d",&y);
    
    printf("%d\n",x*(y%10));
    printf("%d\n",x*(y%100/10));
    printf("%d\n",x*(y/100));
    printf("%d\n",x*y);
}