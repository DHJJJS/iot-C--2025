///*
//	virtual function : 파생클래스에서 재정의 할 것을 약속받은 멤버 함수에
//	virtual 키워드를 사용하여 만든다.
//	virtual table이 만들어지고, dynamic binding으로 동작한다.
//*/
//#include <iostream>
//using namespace std;
//
//class Base {
//public:
//	virtual void func1() { cout << "B::func1()" << endl; }			// 가상함수
//	virtual void func2() { cout << "B::func2()" << endl; }			// 가상함수
//	void func3() { cout << "B::func3()" << endl; }
//};
//class Derived : public Base {
//	void func1() { cout << "D::func1()" << endl; }					// 가상함수를 재정의하는 멤버함수를 나타냄.
//	void func3() { cout << "D::func3()" << endl; }
//	void func4() { cout << "D::func4()" << endl; }
//};
//
//int main()
//{
//	Base b;
//	Derived d;
//	Base* bptr = new Derived();				// upcasting
//
//	bptr->func1();					// base클래스의 func1() 은 가상함수로 선언되어 Derived 클래스의 func1() 호출된다.
//	bptr->func2();					// base클래스의 func1() 은 가상함수로 선언되었지만 오버라이딩(재정의)이 되지 않았다.
//	bptr->func3();					// 포인터 타입의 호출 함수가 결정된다.
//
//	//bptr->func4();
//
//	delete bptr;
//	bptr = &b;
//	bptr->func1();
//	bptr->func2();
//	bptr->func3();
//
//
//	return 0;
//}