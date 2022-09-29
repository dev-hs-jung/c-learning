#include <stdio.h>
int main(){
    int a[42]={0, };
    int cnt=0;

    for(int i=0; i<10; i++){
        int x; 
        scanf("%d",&x);
        a[(x%42)] = 1;
    }

    for(int j=0; j<42; j++){
        if(a[j]){
            cnt++;
        }
    }
    printf("%d",cnt);
}