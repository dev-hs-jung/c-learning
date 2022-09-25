#include<stdio.h>

int main(){
    int x,y;
    scanf("%d%d",&x,&y);

    if(x >= 1 && y >=1){
        printf("1");
    }
    else if(x <= -1 && y >= 1){
        printf("2");
    }
    else if(x <= -1 && y <= -1){
        printf("3");
    }
    else if(x >= 1 && y <= -1){
       printf("4");
    }
}
    