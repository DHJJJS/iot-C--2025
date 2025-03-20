/*
	step1.
	*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

class Human {
private:
	char* pname;
	int age;
	char* ptel;
public:
	Human(const char* _name, int _age, const char* _tel) : age(_age) { 
		if (_name == NULL) {
			exit(1);
		}
		pname = new char[strlen(_name) + 1];
		strcpy(pname, _name);
		if (_tel == NULL) {
			exit(1);
		}
		ptel = new char[strlen(_tel) + 1];
		strcpy(ptel, _tel);

	}
	~Human(){
		delete[] pname;
		delete[] ptel;
	}
	void getData(){
		printf("name : %s, age : %d, tel : %s\n", pname, age, ptel);
	}
};

int main()
{
	Human h("ȫ�浿", 30, "010-1234-1234");
	h.getData();

	return 0;
}