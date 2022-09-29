#include <stdio.h>
using namespace std;
int main() {
	int asc = 0, dec = 0, data[8];
	for (int i = 0; i < 8; i++) {
		scanf("%d", &data[i]);
		(data[i] == i + 1) ? asc++ : (data[i] == 8 - i) ? dec++ : NULL;
	}
	asc == 8 ? printf("ascending") : dec == 8 ? printf("descending") : printf("mixed");
}