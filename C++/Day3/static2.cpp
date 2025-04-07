/*
*/

//#include <iostream>
//
//class AAA {
//private:
//	static int static_a;				// static 멤버 변수
//	int n;
//public:
//	AAA(int n);
//	static void setStatic_a(int a);
//	void print();
//};
//int AAA::static_a = 100;
//AAA::AAA(int n) {
//	this->n = n;
//}
//void AAA::setStatic_a(int a) { // static 변수 함수에는 static 변수만 들어가야한다. 일반 함수안에서 하는 건
//								// 안 좋다. 가능은 하지만!
//	static_a = a;
//	//n = 0
//}
//void AAA::print() {
//	printf("static_a: %d, n: %d\n", static_a, n);
//}
//int main()
//{
//	AAA obj1(10), obj2(20);
//	obj1.print();
//	obj2.print();
//
//	obj1.setStatic_a(50);
//	obj1.print();
//	return 0;
//}