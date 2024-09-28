////문제
////10진법 수 N이 주어진다.이 수를 B진법으로 바꿔 출력하는 프로그램을 작성하시오.
////
////10진법을 넘어가는 진법은 숫자로 표시할 수 없는 자리가 있다.이런 경우에는 다음과 같이 알파벳 대문자를 사용한다.
////
////A: 10, B : 11, ..., F : 15, ..., Y : 34, Z : 35
////
////입력
////첫째 줄에 N과 B가 주어진다. (2 ≤ B ≤ 36) N은 10억보다 작거나 같은 자연수이다.
////
////출력
////첫째 줄에 10진법 수 N을 B진법으로 출력한다.
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<math.h>
//
//int main() {
//	int n ,b;
//	scanf("%d %d", &n, &b);
//	//대문자 아스키코드는 65~90
//	char result[100];
//    int i = 0;
//	
//    while (n > 0) {
//        int cal = n % b;
//        if (cal >= 10) {
//            result[i] = cal + 55;
//        }
//        else {
//            result[i] = cal + '0';
//        }
//        i++;
//        n /= b;
//        /*n=n/B, 이렇게 해야 n이 몫으로 새로 정의되면서
//        반복문에서 제대로 계산을 함.*/
//    }
//
//    for (int j = i - 1; j >= 0; j--) {
//        printf("%c", result[j]);
//    }
//    /*int i가 배열 ans의 길이가 되므로*/
//    return 0;
//}