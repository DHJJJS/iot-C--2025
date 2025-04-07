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
//		cout << "계좌ID : " << accID << endl;
//		cout << "이름 : " << cusname << endl;
//		cout << "잔액 : " << balance << endl;
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
//		cout << "1. 계좌 개설" << endl;
//		cout << "2. 계좌 입금" << endl;
//		cout << "3. 계좌 출금" << endl;
//		cout << "4. 계좌 출력" << endl;
//		cout << "5. 종료" << endl;
//
//		int Numb = 0;
//		cout << "원하는 번호를 입력하세요 >> ";
//		cin >> Numb;
//		if (Numb == 1) { MakeAcc(); }
//		else if (Numb == 2) { depositmoney(); }
//		else if (Numb == 3) { WithdrawalMoney(); }
//		else if (Numb == 4) { ShowAllAccinfo(); }
//		else if (Numb == 5) {
//			cout << "프로그램 종료" << endl;
//			break;
//		}
//		else {
//			cout << "잘못된 입력입니다." << endl;
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
//	cout << "계좌 개설 창" << endl;
//	cout << "계좌ID: ";
//	cin >> id;
//	cout << "이름 : ";
//	cin >> name;
//	cout << "입금액 : ";
//	cin >> balance;
//
//	cout << "계좌ID: " << id << "이름 : " << name << "입금액 : " << balance << endl;
//
//	accArr[accNum++] = new Account(id, balance, name);
//
//}
//
//void depositmoney(void) {
//	int money;
//	int id;
//	cout << "[입 금]" << endl;
//	cout << "계좌 ID : ";
//	cin >> id;
//	cout << "입금액 : ";
//	cin >> money;
//
//	int i = 0;
//	for (i = 0; i < accNum; i++) {
//		if (accArr[i]->GetAccID() == id) {
//			accArr[i]->deposit(money);
//			cout << "입금완료" << endl << endl;
//			return;
//		}
//	}
//	cout << "유효하지 않은 ID." << endl << endl;
//}
//
//void WithdrawalMoney(void) {
//	int money;
//	int id;
//
//	cout << "[ 출금 ]" << endl;
//	cout << "계좌 ID : ";
//	cin >> id;
//	cout << "출금액 : ";
//	cin >> money;
//
//	int i = 0;
//	for (i = 0; i < accNum; i++) {
//		if (accArr[i]->GetAccID() == id)
//		{
//			if (accArr[i]->Withdrawal(money) == false) {
//				cout << "잔액부족" << endl << endl;
//				return;
//			}
//
//			cout << "출금 완료" << endl;
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