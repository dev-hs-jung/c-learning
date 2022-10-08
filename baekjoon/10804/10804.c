#include <stdio.h>

int main(){
    int card[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int a,b,swap,change=0;

    for(int i=0; i<1; i++){
        scanf("%d%d",&a,&b);
        swap = b-1;
        for(int j=a-1; j<=b-1; j++){ //4~7 4,5,6,7 4번
            change = card[j];
            printf("change = %d\n",change);
            card[j] = card[swap];
            printf("card[j] = %d\n",card[j]);
            card[swap] = change;
            printf("card[swap] = %d\n",card[swap]);
            printf("swap = %d\n",swap);
            swap--;
        }   
    }
}