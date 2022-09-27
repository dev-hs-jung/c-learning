#include <stdio.h>
#include <string.h>

int main(){
    int test,roll;
    char str[21];
    scanf("%d",&test); 
    for(int i=0; i < test; i++){
        scanf("%d",&roll);
        //scanf("%s", &str);
        scanf("%s",str);
        for(int j =0; j <strlen(str); j++){
            for(int k=0; k < roll; k++){
                printf("%c",str[j]);
            }
        }
        printf("\n");
    }
}