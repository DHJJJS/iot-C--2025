/*
* StaticTest��� Ŭ������ ����µ� ��������δ� �̸�, ��ȭ��ȣ, �ּ�, ȸ����ȣ(cnt)�� ������
* 3�� �Է��� �޴� �����ڸ� �ۼ��Ѵ�. ȸ����ȣ�� �ڵ����� ������ų ���̱� ������.
* ��´���� showmember() �޼��带 �����Ͻÿ�.
* �ϼ� �������� ������ ��
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
//		std::cout << "ȸ����ȣ: " << cnt << std::endl;
//		printf("�̸� : %s, ��ȭ��ȣ: %s, �ּ�: %s\n", name, phone, addr);
//	}
//};
//int main()
//{
//
//	StaticTest m1("ȫ�浿", "010-1111-1111", "�λ�");
//	m1.showmember();
//	StaticTest m2("�迵��", "010-2222-2222", "�λ�");
//	m2.showmember();
//	StaticTest m3("��ö��", "010-3333-3333", "�λ�");
//	m3.showmember();
//
//	return 0;
//}