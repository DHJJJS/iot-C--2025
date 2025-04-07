///*
//banking systen ver 0.1
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <cstring>
//using namespace std;
//const int len = 20;
//
//void ShowMenu(void);
//void MakeAcc(void);
//void depositmoney(void);
//void WithdrawalMoney(void);
//void ShowAllAccinfo(void);
//
//class Account
//{
//private:
//	int accID;
//	int balance;
//	char* cusname;
//public:
//	Account(int ID, int money, const char* name) {
//		cusname = new char[strlen(name) + 1];
//		strcpy(cusname, name);
//		accID = ID;
//		balance = money;
//
//	}
//	int GetAccID() { return accID; }
//	void deposit(int money) {
//		balance += money;
//	}
//	bool Withdrawal(int money) {
//		if (balance < money) return false;
//		balance -= money;
//		return true;
//	}
//	void ShowAccinfo()
//	{
//		cout << "����ID : " << accID << endl;
//		cout << "�̸� : " << cusname << endl;
//		cout << "�ܾ� : " << balance << endl;
//	}
//	~Account() {
//		delete[]cusname;
//	}
//};
//
//Account* accArr[100];
//int accNum = 0;
//
//int main() {
//	
//	ShowMenu();
//
//	for (int i = 0; i < accNum; i++) {
//		delete accArr[i]; 
//	}
//
//	return 0;
//}
//
//void ShowMenu(void) {
//	while (true) {
//		cout << "------Menu------" << endl;
//		cout << "1. ���� ����" << endl;
//		cout << "2. ���� �Ա�" << endl;
//		cout << "3. ���� ���" << endl;
//		cout << "4. ���� ���" << endl;
//		cout << "5. ����" << endl;
//
//		int Numb = 0;
//		cout << "���ϴ� ��ȣ�� �Է��ϼ��� >> ";
//		cin >> Numb;
//		if (Numb == 1) { MakeAcc(); }
//		else if (Numb == 2) { depositmoney(); }
//		else if (Numb == 3) { WithdrawalMoney(); }
//		else if (Numb == 4) { ShowAllAccinfo(); }
//		else if (Numb == 5) {
//			cout << "���α׷� ����" << endl;
//			break;
//		}
//		else {
//			cout << "�߸��� �Է��Դϴ�." << endl;
//		}
//	}
//	
//}
//
//void MakeAcc(void) {
//	int id;
//	char name[len];
//	int balance;
//
//	cout << "���� ���� â" << endl;
//	cout << "����ID: ";
//	cin >> id;
//	cout << "�̸� : ";
//	cin >> name;
//	cout << "�Աݾ� : ";
//	cin >> balance;
//
//	cout << "����ID: " << id << "�̸� : " << name << "�Աݾ� : " << balance << endl;
//
//	accArr[accNum++] = new Account(id, balance, name);
//
//}
//
//void depositmoney(void) {
//	int money;
//	int id;
//	cout << "[�� ��]" << endl;
//	cout << "���� ID : ";
//	cin >> id;
//	cout << "�Աݾ� : ";
//	cin >> money;
//
//	int i = 0;
//	for (i = 0; i < accNum; i++) {
//		if (accArr[i]->GetAccID() == id) {
//			accArr[i]->deposit(money);
//			cout << "�ԱݿϷ�" << endl << endl;
//			return;
//		}
//	}
//	cout << "��ȿ���� ���� ID." << endl << endl;
//}
//
//void WithdrawalMoney(void) {
//	int money;
//	int id;
//
//	cout << "[ ��� ]" << endl;
//	cout << "���� ID : ";
//	cin >> id;
//	cout << "��ݾ� : ";
//	cin >> money;
//
//	int i = 0;
//	for (i = 0; i < accNum; i++) {
//		if (accArr[i]->GetAccID() == id)
//		{
//			if (accArr[i]->Withdrawal(money) == false) {
//				cout << "�ܾ׺���" << endl << endl;
//				return;
//			}
//
//			cout << "��� �Ϸ�" << endl;
//			return;
//		}
//	}
//}
//void ShowAllAccinfo(void) {
//	for (int i = 0; i < accNum; i++)
//	{
//		accArr[i]->ShowAccinfo();
//		cout << endl;
//	}
//}