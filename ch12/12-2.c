// **********************************************
// 제 목 : 포인터를 사용해 변수를 저장하고 덧셈을 함
// 날 짜 : 2026년 9월 8일
// 작성자 : 2600006 강호현
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

int main(void)
{
    int a = 100, b = 200;
    int sum;

    int* pa = &a;
    int* pb = &b;
    int* psum = &sum;

    *psum = *pa + *pb;

    printf("두정수의 합 : %d\n", *psum);

    return 0;
}
