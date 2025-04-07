///*
//	Inheritance(상속)
//	private, public, protected
//	is a(무엇은 무엇이다.), has a 관계가 성립해야 한다.
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//class Human {						// 부모클래스, 기초클래스, 슈퍼클래스, 베이스클래스
//private:
//	char name[20];
//	int age;
//public:
//	Human(const char*, int);
//	void getData();
//};
//
//class Student : public Human {		// 자식클래스, 파생클래스, 서브클래스, 드라이버드 클래스
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
//	printf("이름: %s, 나이: %d\n", name, age);
//}
//
///*상속받은 멤버들은 상속한 부모클래스의 생성자에서 초기화를 한다.*/
//Student::Student(const char* _name, int _age, int _id) : Human(_name, _age) {
//	/*strcpy(name, _name);
//	age = _age;*/				// 부모에서 들고오는 것은 대입연산자로 되지 않음. 콜론으로 미리 초기화를 해야 함. 
//	studentID = _id;
//}
//
//void Student::showStudent(){
//	printf("학번: %d", studentID);
//}
//
//int main()
//{
//	Human h("홍길동", 25);
//	h.getData();
//
//	Student h2{ "임꺽정", 30, 202503 };
//	h2.getData();
//	h2.showStudent();
//	return 0;
//}