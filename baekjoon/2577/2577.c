#include <stdio.h>

int main(){
    int a,b,c;
    int mul,num;
    int array[10]={0, };
    scanf("%d%d%d",&a,&b,&c);

    mul = a*b*c;

    for(; mul >0;)
    {
        num = mul % 10; //10으로 나누었을때 나머지 1의자리숫자
        array[num]++;
        mul /= 10;
    }
    for(int i=0; i<=9; i++){
        printf("%d\n",array[i]); //0~9까지 숫자 사용한 만큼 각각세기
    }
    return 0;
}