#include <stdio.h>
#include <string.h>
char txt[10000001];
int main(){
    int cnt=1;
    scanf("%[^\n]s", txt);

    for(int i=0; i <strlen(txt); i++)
        //txt에서 i번째에 있는 문자가 알파벳 대소문자이면 조건식 들어간다.
        if(txt[i] == ' ') cnt++;


    if (txt[0]==' ')cnt--;
    if(txt[strlen(txt)-1]== ' ')cnt--;
    
    printf("%d",cnt);
    return 0;
}