#include <stdio.h>
#define tResult(x,range) ((x) >= (range) ? ((x) - (range)) : (x))
int main() {
	int h, m, addT;
	scanf("%d%d%d", &h, &m, &addT);
	printf("%d %d", tResult((h + (addT / 60) + ((m + (addT % 60)) / 60)),24), tResult((m + (addT % 60)),60));
}