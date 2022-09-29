#include <stdio.h>
int main()
{
    int i, num1, num2, n1, n2;
    scanf("%d %d", &num1, &num2);
    n1 = (num1 / 100) + (num1 / 10 % 10 * 10) + (num1 % 10 * 100);
    n2 = (num2 / 100) + (num2 / 10 % 10 * 10) + (num2 % 10 * 100);
    if(n1 > n2){
        printf("%d", n1);
    }
    else{
        printf("%d", n2);
    }
    return 0;
}
