#include <stdio.h>
int main(){
    int asc=0, dec=9,num;
    for(int i=1; i <= 8; i++){
        scanf("%d",&num);
        if(num == i){
            asc++;
        }
        if(num == 9-i){
            dec--;
        }
    }
    if(asc == 8){
        printf("ascending");
    }
    else if(dec == 1){
        printf("descending");
    }
    else{
        printf("mixed");
    }
}