#include <stdio.h>

int main(){
    long cnt=0,a,b;
    scanf("%d%d",&a,&b);
    if(a < b){
        for(long long i=a; i<b-1; i++){
                cnt++;    
        }
    }
    else if(b < a){
        for(long long j=b; j<a-1; j++){
                cnt++;    
        }
    }
    printf("%d\n",cnt);
    if(a <b){
        for(long long i=a+1; i<b; i++){
            printf("%d ",i);   
        }
    }
    else if(b < a){
        for(long long j =b+1; j<a; j++){
                printf("%d ",j);      
        }
    }
}