#include <stdio.h> 
int main(){	
    int n, m;	
    int sum, max = 0;		
    int arr[100] = {0, };	
    int count = 0; 	
    scanf("%d %d", &n, &m);	
    sum = m; 	
    for(int i = 0; i < n; i++){	
        scanf("%d", &arr[i]);
    } 	
    for(int i = 0; i < n - 2; i++){		
        for(int j = i + 1; j < n - 1; j++){
            for(int k = j + 1; k < n; k++){
                sum = arr[i] + arr[j] + arr[k];
        		if (sum <= m && max < sum){
                    max = sum;
                }			
            }		   
        }	
    }	                      
    printf("%d", max);
}
