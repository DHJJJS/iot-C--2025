///*
//* 문자열 초기화에 대한 팁. 주소니까 초기화를 어떻게 해야하는가?
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//
//class MyClass {
//private:
//	int id;
//	//char name[20];
//	char* name;
//	int age;
//public:
//	MyClass(int _id, const char* _name, int _age) {
//		id = _id;
//		age = _age;
//		int size;
//		size = strlen(_name) + 1;
//		name = new char[size];
//		if (_name == NULL) {
//			exit(1);
//
//		}
//		strcpy(name, _name);
//	}
//
//	//name = (char*)malloc(sizeof(_name + 1));
//	//if (_name == NULL) {
//	//	exit(1);
//
//	//}
//	//strcpy_s(name, (unsigned)sizeof(name), _name);
//
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