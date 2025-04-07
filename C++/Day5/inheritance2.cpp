/*
	protected 접근제어는 상속받은 자식이 접근 가능하다.
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
//		printf("Human의 정보를 불러옵니다.\n");
//		printf("이름: %s, 나이: %d\n\n", name, age);
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
//		printf("Student의 정보를 불러옵니다.\n");
//		printf("이름: %s, 나이: %d, 학번: %d\n\n", name, age, studentID);
//	}
//};
//int main()
//{
//	Human h("주예성", 25);
//	h.getData();
//	Student h2("김준우", 30, 250324);
//	h2.getData();
//	h2.showStudent();
//}