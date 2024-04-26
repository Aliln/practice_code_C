#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
void adddouhao(int n) {
	if (n < 1000) {
		printf("%d", n);
		return;
	}
	adddouhao(n / 1000);
	printf(",%03d", n % 1000);
}
int main() {
	int m;
	scanf("%d", &m);
	 
	adddouhao(m);
	
	/*printf("\n");*/

	return 0;
}