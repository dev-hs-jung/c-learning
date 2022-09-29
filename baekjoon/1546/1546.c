#include <stdio.h>

int main(){
    int n,m=0;
    int score[1000];
    double sum=0;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d",&score[i]);
        if(m < score[i])
        {
            m = score[i];
        }
    }
    for(int j=0; j<n; j++)
    {
        sum+= ((score[j]/(double)m)*100);
    }
    sum = sum/n;
    printf("%lf",sum);
}   