#include <stdio.h>
#include <string.h>
int main() {
    while (1) {
        char c[8];
        int swn = 1;
        scanf("%s", c);
        if (strcmp(c, "0")==0) {
            break;
        }
        for (int i = 0; i < (strlen(c)/2); i++){
            if (c[i] != c[(strlen(c) -1 -i)]){ 
                swn = 0; 
                break;
            }
        }
        if (swn){ 
            printf("yes\n");
        }
        else{
            printf("no\n");
        }
    }
}