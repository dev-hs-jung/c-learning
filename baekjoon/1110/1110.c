#include<stdio.h>

int main(){
    int num,result,first,second;
    int cnt=1;
    scanf("%d",&num);
    result = num;
    if(result <10){
        first =0; 
        second = result; 
    }
    else{
        first = result /10;  
        second = result %10; 
    }
    result = (first + second) % 10;
	result = (second * 10) + result;

    while(result != num){
        if(result < 10){
            first =0;
            second = result;
        }
        else
        {
            first = result/ 10;
            second = result % 10;
        }
        result = (first +second) %10;
        result = (second * 10) + result;
        cnt++;
    }
    printf("%d",cnt);
}