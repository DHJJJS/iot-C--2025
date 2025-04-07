///*
//*/
//#include <iostream>
//
//class Base {
//public:
//	void show() { printf("Base Class"); }
//};
//
//class Derived : public Base {
//public:
//	void show() { printf("Derives Class"); }
//};
//
//int main()
//{
//	Base bobj;
//	Derived* dptr = nullptr;
//	//dptr = &bobj;
//	/*dptr = (Base*)&bobj;
//	dptr->show();*/
//
//	dptr = (Derived*)&bobj;
//	dptr->show();
//
//	return 0;
//}