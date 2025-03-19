/*
* 문자열 초기화에 대한 팁. 주소니까 초기화를 어떻게 해야하는가?
*/
//#define _CRT_SECURE_NO_WANRNINGS
//#include <iostream>
//using namespace std;
//
//class MyClass {
//private:
//	int id;
//	char name[20];
//	int age;
//public:
//	MyClass(int _id, const char* _name, int _age) {
//		id = n;
//		age = n2;
//		// 주소 = rvalue
//		// name = ps;
//		strcpy_s(name,(unsigned)sizeof(name), ps);		// 둘다 주소니까 이렇게 대입해야만 한다.
//		name[0] = 'a';
//		name[1] = 'b';		// 이것도 초기화 방법
//
//	}
//	void getData() {
//		cout << "아이디 : " << id << endl;
//		cout << "이름 : " << name << endl;
//		cout << "나이 : " << age << endl;
//	}
//};
//
//int main()
//{
//	MyClass obj(1, "김철수", 20);					// 문자열은 주소 !!
//	obj.getData();
//	return 0;
//}