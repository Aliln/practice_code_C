#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	int n;
	while (scanf("%d", &n) == 1) {
		long long sum = 0;
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++) {
				int num;
				scanf("%d", &num);
				sum += num;
			}
		printf("%lld\n",sum);
	}
	return 0;
}