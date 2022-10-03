#include <stdio.h>

#define Result(a,b) {int n; n=a, a=b, b=n;}

void Reverse(char *ar, int length){
        int left, right;
        for(left=0,right=length-1; ; left++,right--){
                if(left>=right){break;}
                Result(ar[left], ar[right]);
        }
}

int main()
{
        char arA[10001], arB[10001];
        int i,j;
        scanf("%s %s", &arA, &arB);
        for(i=0; *(arA+i); i++){
                arA[i]-='0';
        }
        for(j=0; *(arB+j); j++){
                arB[j]-='0';
        }

        Reverse(arA, i);
        Reverse(arB, j);

        i= i>=j ? i: j;
        for(j=0; j<i; j++){
            arA[j]= arA[j]+arB[j];
            if(arA[j]>=10){
                arA[j+1]+=1;
                arA[j]%=10;
            }
        }
        if(arA[i]!='\0'){i++;}

        Reverse(arA, i);

        for(j=0; j<i; j++){
                arA[j]+='0';
        }

        printf("%s", arA);
}