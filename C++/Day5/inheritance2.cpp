/*
	protected ��������� ��ӹ��� �ڽ��� ���� �����ϴ�.
*/

//#include <iostream>
//
//class Human {
//protected:
//	char name[20];
//	int age;
//public:
//	Human(const char* _name, int _age) {
//		strcpy_s(name, _name);
//		age = _age;
//	}
//	void getData() {
//		printf("Human�� ������ �ҷ��ɴϴ�.\n");
//		printf("�̸�: %s, ����: %d\n\n", name, age);
//	}
//};
//
//class Student : public Human {
//private:
//	int studentID;
//public:
//	Student(const char* _name, int _age, int _id) : Human(_name, _age) {
//		studentID = _id;
//	}
//	void showStudent() {
//		printf("Student�� ������ �ҷ��ɴϴ�.\n");
//		printf("�̸�: %s, ����: %d, �й�: %d\n\n", name, age, studentID);
//	}
//};
//int main()
//{
//	Human h("�ֿ���", 25);
//	h.getData();
//	Student h2("���ؿ�", 30, 250324);
//	h2.getData();
//	h2.showStudent();
//}