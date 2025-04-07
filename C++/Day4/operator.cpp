///*
//*/
//#include <iostream>
//
//class MyClass {
//private:
//	int m_a, m_b;
//	const char* m_name;
//public:
//	MyClass(int a = 0, int b = 0, const char* name = nullptr) : m_a(a), m_b(b), m_name(name) {}
//	void showMyClass() {
//		std::cout << m_a << ", " << m_b << ", " <<  m_name << std::endl;
//	}
//};
//
//// 리턴 타입은 상관없고, 함수 자료형과 이름으로만 오버로딩이 갈린다.
//int main()
//{
//	//MyClass obj{ 1, 2, "홍길동" };
//	//obj.showMyClass();
//
//	//MyClass obj2;
//	//obj2 = obj;							// num = 10;, 오른쪽에 왼쪽의 객체를 집어넣어라.
//	//									// 말은 된다. 그런데 MyClass를 집어넣어라? 신기하다.
//	//									// 디폴트 대입 연산자
//	//obj2.showMyClass();
//
//	MyClass obj{ 10,20 };
//	MyClass obj2{ 30, 40 };
//	MyClass obj3 = obj + obj2;
//
//	return 0;
//}