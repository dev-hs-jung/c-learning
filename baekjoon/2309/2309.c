#include <stdio.h>

int main(){
	int sum = 0,total, fake1=0, fake2=0;
	int jot[9];

	for (int i = 0; i < 9; i++) {
		scanf("%d", &jot[i]);
		sum += jot[i];
	}
	int remain = sum - 100;
	for (int i = 0; i < 9; i++) { //0~8
		for (int j = i + 1; j < 9; j++) { //1~8
			total = jot[i] + jot[j];
			if (total == remain) {
				fake1 = i, fake2 = j;
				break;
			}
		}
	}
	int k = 0;
	int jot2[7];
	for (int i = 0; i < 9; i++) {
		if (i != fake1 && i != fake2) {
			jot2[k] = jot[i];
			k++;
		}
	}
	int temp;
	for (int i = 0; i < 7; i++) {
		for (int j = i+1; j < 7; j++) {
			if (jot2[i] > jot2[j]) {
				temp = jot2[i];
				jot2[i] = jot2[j];
				jot2[j] = temp;
			}
		}
	}
	for (int i = 0; i < 7; i++) {
		printf("%d\n", jot2[i]);
	}
}