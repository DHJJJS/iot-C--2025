///*
//	변환 생성자
//	다른 타입의 객체로 변환될때 호출되는 생성자. 입력을 한개만 가지는 생성자
//*/
//#include <iostream>
//
//class MyClass {
//private:
//	int value;
//public:
//	MyClass(int value) {
//		printf("변환 생성자 호출!!");
//		this->value = value;
//	}
//	void printMyClass() {
//		printf("value: %d\n", value);
//	}
//};
//int main()
//{
//	MyClass obj = 10;	// obj가 빨간 줄이 그어졌었다. 기본 입력이 없고 생성자도 없는 상황이었어서.
//	obj.printMyClass();
//
//	MyClass obj2(10);
//	obj2.printMyClass();
//
//	return 0;
//}