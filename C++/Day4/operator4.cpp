///*
//*/
//#include <iostream>
//
//class MyClass{
//private:
//	int x, y;
//public:
//	MyClass(int ax = 0, int ay = 0) : x(ax), y(ay) {
//		printf("constructor~!\n");
//	};
//	MyClass(const MyClass& other) {
//		printf("copy constructor!!\n");
//		x = other.x;
//		y = other.y;
//	}
//	MyClass& add(const MyClass& other) {
//		printf("Add!!\n");
//		x = other.x;
//		y = other.y;
//		return *this;
//	}
//	MyClass operator+(const MyClass & other) {
//		printf("overlording!!\n");
//		return MyClass(x + other.x, y+ other.y);
//	}
//	void showMyClass() {
//		printf("x : %d, y : %d\n", x, y);
//	}
//};
//
//int main() {
//	MyClass obj(10, 20);
//	MyClass obj2(20, 30);
//	MyClass obj3 = obj.add(obj2);
//	obj3.showMyClass();
//	MyClass obj4 = obj.operator+(obj3);
//	obj4.showMyClass();
//	MyClass obj5 = obj4 + 100;
//	obj5.showMyClass();
//	return 0;
//}
//
//
///* 오버로딩 할 수 없는 연산자:
//	::, ., *, sizeof
//*/