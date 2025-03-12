
//
//int main() {
//	int A, B, V;
//	scanf("%d %d %d", &A, &B, &V);
//	int day = 0;
//
//	while (1) {
//		V -= A;
//		day++;
//		if (V <= 0) {
//			printf("%d", day);
//			break;
//		}
//		else V += B;
//	}
//}

//위의 코드는 반복문 사용으로 시간초과
//수학적으로 접근해야함

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	int A, B, V;
	scanf("%d %d %d", &A, &B, &V);
	int day = 0;

	day = (V - B - 1) / (A - B) + 1; //day를 int로 선언했기 때문에 소수점 이하를 버림
	printf("%d", day);
}