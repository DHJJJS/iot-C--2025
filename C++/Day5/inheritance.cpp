///*
//	Inheritance(���)
//	private, public, protected
//	is a(������ �����̴�.), has a ���谡 �����ؾ� �Ѵ�.
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//class Human {						// �θ�Ŭ����, ����Ŭ����, ����Ŭ����, ���̽�Ŭ����
//private:
//	char name[20];
//	int age;
//public:
//	Human(const char*, int);
//	void getData();
//};
//
//class Student : public Human {		// �ڽ�Ŭ����, �Ļ�Ŭ����, ����Ŭ����, ����̹��� Ŭ����
//private:
//	int studentID;
//public:
//	Student(const char*, int, int);
//	void showStudent();
//};
//
//Human::Human(const char* _name, int _age) {
//	strcpy(name, _name);
//	age = _age;
//}
//
//void Human::getData() {
//	printf("�̸�: %s, ����: %d\n", name, age);
//}
//
///*��ӹ��� ������� ����� �θ�Ŭ������ �����ڿ��� �ʱ�ȭ�� �Ѵ�.*/
//Student::Student(const char* _name, int _age, int _id) : Human(_name, _age) {
//	/*strcpy(name, _name);
//	age = _age;*/				// �θ𿡼� ������ ���� ���Կ����ڷ� ���� ����. �ݷ����� �̸� �ʱ�ȭ�� �ؾ� ��. 
//	studentID = _id;
//}
//
//void Student::showStudent(){
//	printf("�й�: %d", studentID);
//}
//
//int main()
//{
//	Human h("ȫ�浿", 25);
//	h.getData();
//
//	Student h2{ "�Ӳ���", 30, 202503 };
//	h2.getData();
//	h2.showStudent();
//	return 0;
//}