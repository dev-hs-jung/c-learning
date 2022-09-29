#include <stdio.h>

int main(){
    int x,y,width,height; // width == 가로 height == |세로 x == 가로 y == 세로 
    scanf("%d%d%d%d",&x,&y,&width,&height);

    if(x <= (width-x) && x <= y && x <= (height-y)){
        printf("%d",x);
    }
    else if(y <= (width-x)&& y <= x && y <= (height-y)){
        printf("%d",y);
    }
    else if((width-x) <= x && (width-x) <= y&& (width-x) <= (height-y)){
        printf("%d",(width-x));
    }
    else if((height-y)<= x && (height-y) <= y && (height-y) <= (width-x)){
        printf("%d",(height-y));
    }
}