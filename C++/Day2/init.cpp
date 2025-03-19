//#include <iostream>
//using namespace std;
//
//int main()
//{
//
//	int num = 10;							// 복사 초기화 // 이건 C 스타일
//	int num2(30);							// 직접 초기화 // 11부터 변화가 많이 생겼고 이건 C++ 스타일
//	int num3{ 300 };						// 중괄호 직접 초기화 // 이게 11부터 변화생긴 거
//	int num4 = { 3000 };					// 중괄호 복사 초기화
//	
//	int x = 3.14;
//	int x1{ 3.14 };							// 중괄호는 암묵적으로 일어나는 뭘 허용하지 않는다. 정확한 거만.
//
//	cout << num << endl;
//	cout << num2 << endl;
//	cout << num3 << endl;
//	cout << num4 << endl;
//	cout << x << endl;
//	cout << x1 << endl;
//	
//	return 0;
//}