///*
//	���� ������
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//class Person {
//private:
//	char name[20];
//	int age;
//public:
//	Person(const char *name, int age) {
//		printf("constructor call!\n");
//		strcpy(this->name, name);
//		this->age = age;
//	}
//	Person(const Person& other) {					// ���� ������ // ���� ����
//		printf("copy constructor!!\n");
//		this->age = other.age;
//		strncpy(this->name, other.name, strlen(other.name) + 1);
//	}
//	void printPerson() {
//		printf("name: %s, age: %d\n", this->name, this->age);
//	}
//};
//
//int main()
//{
//	Person p("ȫ�浿", 30);
//	p.printPerson();
//								// ��ü�� �����ؼ� �Ǵٸ� ��ü�� ������� �ִ�.
//	Person p2(p);			// ���� ������ (����Ʈ�� ����)
//	p2.printPerson();
//	
//	Person p3 = p;
//	p3.printPerson();
//
//	return 0;
//}
//
////void a(int aa) {
////	aa++;
////}
////
////void main()
////{
////	int n = 10;
////	a(n);
////}