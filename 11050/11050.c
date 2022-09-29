#include <stdio.h>

int main(){
    int n,k,mul,mul2,mul3;
    scanf("%d%d",&n,&k);
    mul =1;
    mul2 =1;
    mul3=1;
    for(int i=n; i > 0; i--)
    {
        mul *= i; 
    }
    for(int j=k; j > 0; j--) 
    {
        mul2 *= j; 
    }
    for(int y=(n-k); y > 0; y--)
    {
        mul3 *= y; 
    }
    printf("%d",(mul/(mul2*mul3)));
}
