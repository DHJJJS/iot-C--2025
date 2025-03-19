/*
*		출력인 경우 : 레퍼런스 // 일반변수도 되고 참조도 되고
*/

//#include <iostream>
//
//int& func(int& ref) {
//	ref++;
//	return ref;							 // lvalue
//	//return ref++;							 // rvalue는 참조할 수 없음.
//}
//
//int main()
//{
//	int n = 10;
//	int& ref = func(n);
//	std::cout << ref << std::endl;
//
//	return 0;
//	
//}