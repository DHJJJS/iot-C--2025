///*
//*/
//#include <iostream>
//
//class Base {
//public:
//	void func1() { std::cout << "Base::func1()" << std::endl; }
//};
//class Derived : public Base {
//public:
//	void f() { std::cout << "Derived::f()" << std::endl; }
//	void func() { std::cout << "Derived::func()" << std::endl; }
//};
//class Derived2 : public Derived {
//public:
//	void f() { std::cout << "Derived2::f()" << std::endl; }
//	void func1() { std::cout << "Derived2::func1()" << std::endl; }
//};
//int main()
//{
//	Base* bptr;
//	Derived dobj;
//	bptr = static_cast<Base*>(&dobj);					// upcasting
//	bptr->func1();
//
//	Base bobj;
//	Derived* dptr;
//	dptr = static_cast<Derived*>(&bobj);				// downcasting
//	dptr->func();
//	dptr->func1();
//
//	Derived2* dptr2 = static_cast<Derived2*>(dptr);
//	dptr2->func();
//	dptr2->func1();
//
//	return 0;
//}