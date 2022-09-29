#include<stdio.h>
int main(){

    int n, x, in;

    scanf("%d %d", &n, &x);
    for(int i=0; i<n; i++){
        scanf("%d", &in);
      
        if(x>in)
            printf("%d ", in);
    }
}
    
