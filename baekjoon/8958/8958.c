#include <stdio.h>
#include <string.h>
char arr[81];
int main(){
    int n;
    scanf("%d",&n);
    for(int i = 1; i <= n; i++){
        int sum=0,gab=0;
        scanf("%s",arr);
        for(int j=0; j < strlen(arr); j++){
            if(arr[j] == 'O') sum++;
            else sum = 0;
            gab += sum;
        }
        printf("%d\n",gab);
    }
    return 0;
}