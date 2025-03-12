//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
//int main() {
//	int n;
//	scanf("%d", &n); //입력받을 변수
//
//	int result = 1; //결과 저장용 변수
//	int max = 1; //최대값 저장용 변수. 최초 1부터 시작
//	int add = 6; //육각형 문제이기 때문에 매번 6씩 증가
//
//	while (1) {
//		if (n <= max) break; //입력받은 값이 최대값보다 작거나 같으면 반복문 탈출
//
//		max += add; //최대값에 add값을 더함. 1, 7, 19...
//		add += 6; //육각형 문제이기 때문에 매번 6씩 증가시킴
//		++result; //add가 6 증가하면 result는 전위연산으로 1 증가시켜 저장시킴
//	}
//
//	printf("%d", result); //결과 출력
//}