///*
//* ���ڿ� �ʱ�ȭ�� ���� ��. �ּҴϱ� �ʱ�ȭ�� ��� �ؾ��ϴ°�?
//*/
//#define _CRT_SECURE_NO_WANRNINGS
//#include <iostream>
//#include <string.h>
//using namespace std;
//
//class MyClass {
//private:
//	int id;
//	//char name[20];
//	char* name;
//	int age;
//public:
//	MyClass() { }				// ����Ʈ ������ (�Ű������� ����. �Ű������� �⺻���·� �ʱ�ȭ)
//	~MyClass() { delete[] name; }				// �Ҹ��� <- ��ü�� �Ҹ��Ű�� ��. �⺻������ �ڵ� ȣ���.
//								// ���� �Ҵ� ��� �ܿ� ������ �ۼ��� �ʿ䰡 ����.
//	MyClass(int _id, const char* _name, int _age);
//	void getData() const;
//
//	//void setData(int n, const char* ps, int n2) {
//	//	id = n;
//	//	age = n2;
//	//	// �ּ� = rvalue
//	//	// name = ps;
//	//	strcpy_s(name,(unsigned)sizeof(name), ps);		// �Ѵ� �ּҴϱ� �̷��� �����ؾ߸� �Ѵ�.
//	//	name[0] = 'a';
//	//	name[1] = 'b';		// �̰͵� �ʱ�ȭ ���
//
//	// }
//
//};
//MyClass::MyClass(int _id, const char* _name, int _age) {
//	id = _id;
//	age = _age;
//	name = new char[strlen(_name) + 1];			// �����Ҵ�
//	// name = _name; ���� �ƴ� �ּҸ� �ְ�޴´�.
//	// �迭�� ������ �Ŀ� ���� �����ڸ� ����Ͽ� ���� ���� �Ҵ��� �� ����.
//	strcpy_s(name, sizeof(_name), _name);
//}
//void MyClass::getData() const {					// ���ȭ (�ȿ����� ���� ������ �Ͼ�� �ʴ´�.) getdata���� ���� ������� �ʾƾ�.
//	cout << "���̵� : " << id << endl;			// ��� ��� �Լ�												// �Լ� ��ü�� ���ȭ ��Ų ��.
//	cout << "�̸� : " << name << endl;			// �Լ� ��ü�� ���ȭ ��Ų ��. (��� ��� ������ ���ȭ)
//	cout << "���� : " << age << endl;		// �ڵ������� ���� �ϳ� �ٴ´�?
//	// id = 2; // mutable�� ���� ���ȭ�� �ɾ ������ �����ϴ�.
//	// ���ȭ �ɾ������ ���� ����Ǵ� �� ���� �� ������ �Լ��� �̻��ϰ� ����Ǵ� �� ���� �� �ִ�.
//}
//int main()
//{
//	//MyClass obj;
//	//obj.setData(1, "��ö��", 20);					// ���ڿ��� �ּ� !!
//	//obj.getData();
//	MyClass obj(1, "��ö��", 20);					// �����ڴ� �ʱ�ȭ ��Ű�� ����� �ִ�.
//	// �����ڴ� �ַ� �ʱ�ȭ��Ű�� ���ؼ� �����Ѵ�.
//	obj.getData();
//
//	return 0;
//}