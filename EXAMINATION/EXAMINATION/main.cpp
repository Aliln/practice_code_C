#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	long long A, B;
	while (scanf("%lld %lld", &A, &B) ){
		printf("%lld\n ", A + B);
	}
	return 0;
}