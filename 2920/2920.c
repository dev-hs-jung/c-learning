#include <stdio.h>
int melody[8];
int main(){
    int as,des;
    as = 8;
    des = 1;
    for(int i=0; i < 8; i++){
        scanf("%d",&melody[i]);
    }
    if(melody[0]==1 && melody[1]==2 && melody[2]==3 && melody[3]==4 &&
        melody[4]==5 && melody[5]==6 && melody[6]==7 && melody[7]==8){
        printf("ascending");
    }
    else if(melody[0]==8 && melody[1]==7 && melody[2]==6 && melody[3]==5 &&
        melody[4]==4 && melody[5]==3 && melody[6]==2 && melody[7]==1){
        printf("descending");
    }
    else{
        printf("mixed");
    }
}