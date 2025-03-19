#include <iostream>

int main()
{

	int num = 10;							// 복사 초기화 // 이건 C 스타일
	int num2(30);							// 직접 초기화 // 11부터 변화가 많이 생겼고 이건 C++ 스타일
	int num3{ 300 };						// 중괄호 직접 초기화 // 이게 11부터 변화생긴 거
	int num4 = { 3000 };					// 중괄호 복사 초기화
	return 0;
}