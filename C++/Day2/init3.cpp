///*
//* 생성자의 개념, 위치 알아두기, 객체를 표기하는 방법 잘 알아두기
//*/
//#include <iostream>
//using namespace std;
//
//class CTime {
//private:
//	int m_hour{ 0 };
//	int m_min{ 0 };
//	int m_sec{ 0 };
//public:
//	CTime() { cout << "기본 생성자 호출" << endl; };			// 디폴트 생성자
//	CTime(int h, int m, int s) : m_hour(h), m_min(m), m_sec(s)	// 콜론 초기화, 이니셜 라이져 리스트
//	{					// 생성자 기본 양식과 조금 다르게? 그래봤자 기능은 같다.
//		cout << "입력 3개 받는 생성자 호출" << endl;
//		//m_hour = h;
//		//m_min = m;
//		//m_sec = s;		// 몸체부분에 작성, 저 위에 건 헤드부분에 작성됨.
//		//지금 건 헤드부분에 작성되었으므로 메서드가 아니니까 실행되기 전에 초기화가 되는 형태.
//	}
//	void setTime(int hour, int min, int sec) {
//		m_hour = hour;
//		m_min = min;
//		m_sec = sec;
//	}
//	void showTime() const {
//		printf("현재 시간은 %d:%d:%d 입니다.\n", m_hour, m_min, m_sec);
//	}
//};
//int main()
//{
//	//CTime now; // 기본 객체
//	// CTime now(); 이렇게는 안된다.  함수 실행될때 이미 생성되어서??
//	CTime now = CTime();	// 임시 객체 생성 -> 복사 -> now라는 객체 생성
//	now.showTime();
//
//	//CTime t(15, 30, 30);		// 객체를 표기하는 방법에는 여러 방식이 있다.
//	// CTime t = { 12,12,12 };
//	CTime t{ 10,11,12 };
//	t.showTime();
//	
//	return 0;
//}