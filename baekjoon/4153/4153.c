#include <stdio.h>

int main(){
    int a,b,c,aa,bb,cc;
    
    while(1){
        scanf("%d%d%d",&a,&b,&c);
        if(a == 0 && b == 0 && c == 0){
            break;
        }
        aa = a*a;
        bb = b*b;
        cc = c*c;
        if(aa == bb+cc || bb == aa+cc || cc == aa+bb){
            printf("right\n");
        }
        else{
            printf("wrong\n");
        }
    }
    return 0;
}