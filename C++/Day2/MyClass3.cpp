///*
//* ���ڿ� �ʱ�ȭ�� ���� ��. �ּҴϱ� �ʱ�ȭ�� ��� �ؾ��ϴ°�?
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
//		cout << "���̵� : " << id << endl;
//		cout << "�̸� : " << name << endl;
//		cout << "���� : " << age << endl;
//	}
//};
//
//int main()
//{
//	MyClass obj(1, "��ö��", 20);					// ���ڿ��� �ּ� !!
//	obj.getData();
//	return 0;
//}