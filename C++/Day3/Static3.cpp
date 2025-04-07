/*
* StaticTest라는 클래스를 만드는데 멤버변수로는 이름, 전화번호, 주소, 회원번호(cnt)를 가지고
* 3개 입력을 받는 생성자를 작성한다. 회원번호는 자동으로 증가시킬 것이기 때문에.
* 출력담당의 showmember() 메서드를 구현하시오.
* 완성 못했으니 수정할 것
*/
//#include <iostream>
//using namespace std;
//
//StaticTest* actcnt[100];
//class StaticTest {
//private:
//	char* name;
//	char* phone;
//	char* addr;
//	int cnt;
//public:
//	class StaticTest(const char* _name, const char* _phone, const char* _addr, int _cnt) {
//		name = new char[strlen(_name + 1)];
//		strcpy(name, _name);
//		phone = new char[strlen(_phone + 1)];
//		strcpy(phone, _phone);
//		addr = new char[strlen(_addr + 1)];
//		strcpy(addr, _addr);
//		int i = 0;
//		for (i = 0; i < actcnt; i++) {
//			if (actcnt[i]->getcnt() == cnt) {
//				cin >> cnt;
//			};
//		}
//	}
//	int getcnt() { return cnt; }
//	void showmember(const char* name, const char* phone, const char* addr, int cnt) {
//		std::cout << "회원번호: " << cnt << std::endl;
//		printf("이름 : %s, 전화번호: %s, 주소: %s\n", name, phone, addr);
//	}
//};
//int main()
//{
//
//	StaticTest m1("홍길동", "010-1111-1111", "부산");
//	m1.showmember();
//	StaticTest m2("김영희", "010-2222-2222", "부산");
//	m2.showmember();
//	StaticTest m3("김철수", "010-3333-3333", "부산");
//	m3.showmember();
//
//	return 0;
//}