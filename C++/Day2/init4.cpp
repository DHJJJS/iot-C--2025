/*
*		멤버 초기화
*		1,
*		2,
*		3. 객체를 멤버로 가지는 경우
*/
#include <iostream>

class ConstClass {
private:
	int m_value;		// 상수 멤버 변수는 객체 생성되기 전에 반드시 초기화가 되어야 한다.
	const int m_value2{ 0 }; // 상수는 값을 변경 못함 -> 우리는 선언과 동시에 초기화 해야한다.
public:									// 이렇게 초기화
	ConstClass(int value, int value2) : m_value2(value2) { m_value = value ; } //m_value(value)도 됨.
	void showValue() {				
		printf("m_value: %d, m_value2: %d\n", m_value, m_value2);

	}
};
class RefClass{
private:
	int& ref;				// 레퍼런스 역시 객체가 생성되기 전에 반드시 초기화가 이루어져야 한다.
public:
	RefClass(int& r): ref(r) { }
	void showValue() {
		printf("ref: %d\n", ref);
	}

};

class Position {
//private:
//	int m_x;
//	int m_y;
public:
	int m_x;
	int m_y;
	Position(int x, int y) { 
		printf("Position 생성자!!\n");
		m_x = x, m_y = y; }
	void getData() {
		printf("x: %d, y : %d\n", m_x, m_y);
	}
};

class ObjClass {
private:
	Position pos;					// 객체 멤버 변수 // position == 사용자 정의 자료형 (타입이다.)
public:
	ObjClass(int x, int y) : pos(x, y) { printf("ObjClass constructor!!\n"); }
	void showValue() {
		printf("x: %d, y: %d\n", pos.m_x, pos.m_y);
	}
};

int main()
{
	ConstClass obj(10, 20);
	obj.showValue();

	int n = 50;
	RefClass obj2(n);
	obj2.showValue();


	std::cout << "================================================" << std::endl;
	ObjClass o(3, 6);
	o.showValue();

	return 0;
}