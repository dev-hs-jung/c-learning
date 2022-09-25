#include <stdio.h>
#include <string.h>
char txt[1000001];
int alp[26];
int main(){
    int Max=0;
    int size;
    char apb;
    scanf("%s", txt);
    size = strlen(txt);

    for(int i=0; i <size; i++){
        if(txt[i]>='a') {
            alp[txt[i]-'a']++;
        }
        else{
            alp[txt[i]-'A']++;
        }
    }
    for(int i=0; i<26; i++){
        if(alp[i]==Max){
            apb = '?';
        }
        else if(alp[i]>Max){
            Max = alp[i];
            apb = 'A'+i;
        }
    }
    printf("%c",apb);
    return 0;
}