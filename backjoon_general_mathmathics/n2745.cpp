////문제
////B진법 수 N이 주어진다.이 수를 10진법으로 바꿔 출력하는 프로그램을 작성하시오.
////
////10진법을 넘어가는 진법은 숫자로 표시할 수 없는 자리가 있다.이런 경우에는 다음과 같이 알파벳 대문자를 사용한다.
////
////A: 10, B : 11, ..., F : 15, ..., Y : 34, Z : 35
////
////입력
////첫째 줄에 N과 B가 주어진다. (2 ≤ B ≤ 36)
////
////B진법 수 N을 10진법으로 바꾸면, 항상 10억보다 작거나 같다.
////
////출력
////첫째 줄에 B진법 수 N을 10진법으로 출력한다.
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<math.h> //pow 함수 사용하기 위해 헤더파일 추가
//
//int main() {
//	int B;
//	char N[100];
//	scanf("%s %d", N, &B);
//	int result = 0;
//	//대문자 아스키코드는 65~90
//
//	for (int i = 0; i < strlen(N); i++) {
//		int temp = 0; //임시로 저장할 변수
//		if (N[i] >= 65 && N[i] <= 90) {
//			temp = N[i] - 55;
//		}
//		else if (N[i] >= '0' && N[i] <= '9') {
//			temp = N[i] - '0';
//		}
//		result += temp * pow(B, strlen(N) - i - 1); //pow : 진법 변환 함수
//	}
//	printf("%d", result);
//}