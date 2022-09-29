#include <stdio.h>

int main(){
    int test,n,sum,div,x;
    double percent;
    int score[1001];
        scanf("%d",&test);
        for(int i=0; i<test; i++){
            scanf("%d",&n);
            sum =0;
            x=0;
            for(int j=0; j<n; j++){
                scanf("%d",&score[j]);
                 sum += score[j];
                }
            div = sum/n; //div 점수평균
            for(int k=0; k < n; k++){
                if(score[k] > div){
                    x++;
                    }
                }
            percent = (((double)x/n)*100);
            printf("%.3lf%%\n",percent);
        }
}