///*
//	��� ���迡�� ��ü ���� �� �Ҹ�
//*/
//#include <iostream>
//using namespace std;
//
//class SuperClass {
//private:
//	int num;
//public:
//	SuperClass(int an) {
//		num = an;
//		cout << num << " SuperClass constructor" << endl;
//	}
//	~SuperClass() {
//		cout << num << " SuperClass Destructor" << endl;
//	}
//};
//
//class SubClass : public SuperClass {
//private:
//	int subNum;
//public:
//	SubClass(int an, int an2) : SuperClass(an) {
//		subNum = an2;
//		cout << subNum << " SubClass constructor" << endl;
//	}
//	~SubClass() {
//		cout << subNum << " SubClass Destructor" << endl;
//	}
//};
//int main()
//{
//	SuperClass s{ 1 };
//	cout << "====================================================" << endl;
//	SubClass sub{ 2, 22 };
//
//	return 0;
//}
///*
//	��ü�� ������ �� ȣ��Ǵ� �����ڿ� �������� ������ �ٸ���.
//*/
//
