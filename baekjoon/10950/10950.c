#include <stdio.h>

int main(){
    int roll,a,b;
    scanf("%d",&roll);

    for(int i=1; i <= roll; i++){
        scanf("%d%d",&a,&b);
        printf("%d\n",a+b);
    }
}