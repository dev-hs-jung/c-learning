#include <stdio.h>

int main(){
    int  a,b,max,max1,max2;
    scanf("%d%d",&a,&b);

    for(int i=1; i <= a; i++){ //a약수
        if(a % i ==0)
        {
            max1 = i;
        }
        for(int j=1; j <= b; j++){  //b약수
            if(b % j ==0){
                max2 = j;
            }
            if(max1 == max2){ //공통약수
            max = max1;
            }
        }
        if(a == b){
        max = a;
        }
    }
    printf("%d\n%d",max,((a*b)/max)); 
    //최소공배수 = (a *b) / 최대공약수
}
