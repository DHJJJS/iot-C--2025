///*
//* �������� ����, ��ġ �˾Ƶα�, ��ü�� ǥ���ϴ� ��� �� �˾Ƶα�
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
//	CTime() { cout << "�⺻ ������ ȣ��" << endl; };			// ����Ʈ ������
//	CTime(int h, int m, int s) : m_hour(h), m_min(m), m_sec(s)	// �ݷ� �ʱ�ȭ, �̴ϼ� ������ ����Ʈ
//	{					// ������ �⺻ ��İ� ���� �ٸ���? �׷����� ����� ����.
//		cout << "�Է� 3�� �޴� ������ ȣ��" << endl;
//		//m_hour = h;
//		//m_min = m;
//		//m_sec = s;		// ��ü�κп� �ۼ�, �� ���� �� ���κп� �ۼ���.
//		//���� �� ���κп� �ۼ��Ǿ����Ƿ� �޼��尡 �ƴϴϱ� ����Ǳ� ���� �ʱ�ȭ�� �Ǵ� ����.
//	}
//	void setTime(int hour, int min, int sec) {
//		m_hour = hour;
//		m_min = min;
//		m_sec = sec;
//	}
//	void showTime() const {
//		printf("���� �ð��� %d:%d:%d �Դϴ�.\n", m_hour, m_min, m_sec);
//	}
//};
//int main()
//{
//	//CTime now; // �⺻ ��ü
//	// CTime now(); �̷��Դ� �ȵȴ�.  �Լ� ����ɶ� �̹� �����Ǿ??
//	CTime now = CTime();	// �ӽ� ��ü ���� -> ���� -> now��� ��ü ����
//	now.showTime();
//
//	//CTime t(15, 30, 30);		// ��ü�� ǥ���ϴ� ������� ���� ����� �ִ�.
//	// CTime t = { 12,12,12 };
//	CTime t{ 10,11,12 };
//	t.showTime();
//	
//	return 0;
//}