///*
//* 문자열 초기화에 대한 팁. 주소니까 초기화를 어떻게 해야하는가?
//*/
//#define _CRT_SECURE_NO_WANRNINGS
//#include <iostream>
//#include <string.h>
//using namespace std;
//
//class MyClass {
//private:
//	int id;
//	//char name[20];
//	char* name;
//	int age;
//public:
//	MyClass() { }				// 디폴트 생성자 (매개변수가 없음. 매개변수를 기본상태로 초기화)
//	~MyClass() { delete[] name; }				// 소멸자 <- 객체를 소멸시키는 놈. 기본적으로 자동 호출됨.
//								// 동적 할당 경우 외엔 별도로 작성할 필요가 없다.
//	MyClass(int _id, const char* _name, int _age);
//	void getData() const;
//
//	//void setData(int n, const char* ps, int n2) {
//	//	id = n;
//	//	age = n2;
//	//	// 주소 = rvalue
//	//	// name = ps;
//	//	strcpy_s(name,(unsigned)sizeof(name), ps);		// 둘다 주소니까 이렇게 대입해야만 한다.
//	//	name[0] = 'a';
//	//	name[1] = 'b';		// 이것도 초기화 방법
//
//	// }
//
//};
//MyClass::MyClass(int _id, const char* _name, int _age) {
//	id = _id;
//	age = _age;
//	name = new char[strlen(_name) + 1];			// 동적할당
//	// name = _name; 값이 아닌 주소를 주고받는다.
//	// 배열을 선언한 후에 대입 연산자를 사용하여 값을 직접 할당할 수 없다.
//	strcpy_s(name, sizeof(_name), _name);
//}
//void MyClass::getData() const {					// 상수화 (안에서는 값의 변경이 일어나지 않는다.) getdata에선 값이 변경되지 않아야.
//	cout << "아이디 : " << id << endl;			// 상수 멤버 함수												// 함수 자체를 상수화 시킨 것.
//	cout << "이름 : " << name << endl;			// 함수 자체를 상수화 시킨 것. (모든 멤버 값들을 상수화)
//	cout << "나이 : " << age << endl;		// 자동적으로 널이 하나 붙는다?
//	// id = 2; // mutable을 쓰면 상수화를 걸어도 변경이 가능하다.
//	// 상수화 걸어놓으면 값이 변경되는 걸 막을 수 잇으니 함수가 이상하게 변경되는 걸 막을 수 있다.
//}
//int main()
//{
//	//MyClass obj;
//	//obj.setData(1, "김철수", 20);					// 문자열은 주소 !!
//	//obj.getData();
//	MyClass obj(1, "김철수", 20);					// 생성자는 초기화 시키는 기능이 있다.
//	// 생성자는 주로 초기화시키기 위해서 생성한다.
//	obj.getData();
//
//	return 0;
//}