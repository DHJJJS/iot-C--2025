///*
//	복사 생성자
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
//	Person(const Person& other) {					// 복사 생성자 // 참조 형태
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
//	Person p("홍길동", 30);
//	p.printPerson();
//								// 객체도 복사해서 또다른 객체로 만들수가 있다.
//	Person p2(p);			// 복사 생성자 (디폴트로 제공)
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