/*
		연산자 오버로딩
*/

#include <iostream>

class Point {
public:
	int x, y;
	Point(int ax = 0, int ay = 0) :x(ax), y(ay) { printf("constructor!~\n"); }
	const Point& add(const Point& other) {
		printf("add()!~\n");
		return Point(x + other.x, y + other.y);
	}
	class Point(const Point& other) {
		printf("copy constructor!~\n");
		x = other.x;
		y = other.y;
	}
	void ShowPoint() {
		printf("x: %d, y: %d\n", x, y);
	}
};

int main()
{	
	Point obj(10, 20);
	//obj.ShowPoint();

	Point obj2(30, 40);
	//obj2.ShowPoint();
	Point obj3;
	obj3 = obj.add(obj2);
	obj3.ShowPoint();

	return 0;
}