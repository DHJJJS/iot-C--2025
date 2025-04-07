///*
//*/
//#include <iostream>
//using namespace std;
//
//class MyClass {
//public:
//	int value;
//	MyClass(int v = 0) : value(v) { }
//	void showMyClass() {
//		cout << "value: " << value << endl;
//	}
//};
//
//int main()
//{
//	MyClass* ptr = new MyClass{ 10 };
//	ptr->showMyClass();
//	printf("value: %d\n", ptr->value);
//
//	delete ptr;
//
//	MyClass obj{};	// int v = 0 으로 해서 default 값을 주면 됨.
//	ptr = &obj;
//
//	ptr->showMyClass();
//	(*ptr).showMyClass();
//	printf("value: %d\n", ptr->value);
//
//	return 0;
//}