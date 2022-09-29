#include <stdio.h>

int main(){
    int t,n1,n2;
    scanf("%d",&t);
    for(int i=0; i<t; i++){
        scanf("%d%d",&n1,&n2);
        printf("%d\n",n1+n2);
    }
}