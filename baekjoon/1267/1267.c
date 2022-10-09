#include <stdio.h>

int main(){
    int tel,M=0,Y=0;
    int n[20];
    scanf("%d",&tel);

    for(int i=0; i<tel; i++){
        scanf("%d",&n[i]);
        Y += n[i] / 30 +1;
        M += n[i] / 60+1;
    }
    Y *=10;
    M *=15;
    if(Y==M){
        printf("Y M %d",Y);
    }
    else if(Y > M){
        printf("M %d",M);
    }
    else{
        printf("Y %d",Y);
    }
    
}