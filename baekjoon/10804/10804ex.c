#include<stdio.h>
int arr[21], input_a, input_b;
int temp;

void shuffle(int a, int b){
	int n = (b - a + 1) / 2;

	for (int i = 0; i < n; i++){
		temp = arr[a - 1 + i];
		arr[a - 1 + i] = arr[b - 1 - i];
		arr[b - 1 - i] = temp;

	}
}

int main(void)
{
	for (int i = 0; i < 20; i++){
		arr[i] = i + 1;
	}
	for (int i = 0; i < 1; i++){
		scanf("%d %d", &input_a, &input_b);
		shuffle(input_a, input_b);
	}
	for (int i = 0; i < 20; i++){
		printf("%d ", arr[i]);
	}
}