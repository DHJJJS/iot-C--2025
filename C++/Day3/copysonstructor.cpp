///*
//		copyconstructor(복사생성자)
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//class Person {
//private:
//	char m_name[20];
//	int m_age;
//public:
//	Person(const char* pname, int age) {
//		printf("Constructor call!!!\n");
//		strcpy(m_name, pname);
//		m_age = age;
//	}
//	void printPerson() {
//		printf("name : %s, age: %d\n", m_name, m_age);
//	}
//};
//int main()
//{
//	Person p("홍길동", 30);
//	p.printPerson();
//							// 객체도 복사해서 또다른 객체로 만들수가 있다.
//	Person p2(p);			// 복사 생성자 (디폴트로 제공)
//	p2.printPerson();
//
//	Person p3 = p;
//	p3.printPerson();
//
//	return 0;
//}