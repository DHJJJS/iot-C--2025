/*
	step3.
	char �������� name, intŸ���� age, ����� ����ϴ� showHuman()�� ������ Human Ŭ������ �ִ�.
	name�� �����Ҵ��ϰ� ���� 30, �̸� ȫ���� man ��ü�� �����Ͻÿ�.
	man ��ü�� �����Ͽ� copyman ��ü�� �����Ͻÿ�.
*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//class Human {
//public:
//	char* name;
//	int age;
//	Human(const char* _n = "default", int a = 0) {
//		printf("basic!\n");
//		this->age = a;
//		this->name = new char[strlen(_n)+1];
//		strcpy(this->name, _n);
//	}
//	Human(const Human& other) {
//		printf("copy!\n");
//		age = other.age;
//		name = new char[strlen(other.name) + 1];
//		strcpy(this->name, other.name);
//	}
//	~Human() {
//		printf("delete!\n");
//		delete[]name;
//	}
//	void showHuman() {
//		printf("name : %s, age: %d\n", name, age);
//	}
//};
//
//int main()
//{
//	Human man("ȫ��", 30);
//	man.showHuman();
//
//	Human copyman(man);
//	copyman.showHuman();
//
//	Human xman;
//	xman = copyman;
//	xman.showHuman();
//
//	return 0;
//}