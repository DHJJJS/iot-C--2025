/*
	전역함수 오버로딩 : operator(p1, p2)
	1. public

*/
//#include <iostream>
//
//class Point {
//public:
//	int x, y;
//	Point(int ax = 0, int ay = 0) : x(ax), y(ay) {}
//	Point operator+(const Point& other) {							// 객체 더하기 객체
//		return Point(x + other.x, y + other.y);
//	}
//	Point operator+(int n) {										// 객체 더하기 정수
//		return Point(x + n, y + n);
//	}
//	void showPoint() {
//		printf("x: %d, y: %d\n", x, y);
//	}
//};
//inline Point operator+(int n, const Point& other) {
//	return Point(n + other.x, n + other.y);
//}
//int main()
//{
//	Point a(10, 20);
//	Point b(30, 40);
//	Point c = a + b;
//	c.showPoint();
//
//	Point d = a + 100;
//	d.showPoint();
//	Point e = 200 + b;
//	e.showPoint();
//
//	return 0;
//}
