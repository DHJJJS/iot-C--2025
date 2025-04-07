#include <stdio.h>
#include <iostream>
#include <mysql/jdbc.h>

using namespace std;
using namespace sql;

#define SERVER_IP "127.0.0.1:3306"
#define USERNAME  "root"
#define PASSWORD  "12345"
#define DATABASE  "testDB"

class MySQLConnector {
private:
	string server;
	string username;
	string password;
	string database;
public:
	unique_ptr<Connection> conn;
	MySQLConnector(const string& serv, const string& user, const string& pw, const string& db)
		: server(serv), username(user), password(pw), database(db) {
		try {
			mysql::MySQL_Driver* driver = mysql::get_mysql_driver_instance();
			conn = unique_ptr<Connection>(driver->connect(server, username, password));
			conn->setSchema(database);
			cout << "MySQL Connection success!!" << endl;
		}
		catch (SQLException& e) {
			cerr << "MySQL Connection Failed!!" << e.what() << endl;
		}
	}
	~MySQLConnector() {
		cout << "MySQL Disconnect!!" << endl;
	}
};

class Product : public MySQLConnector {
protected:
	string id;
	int price;
	string producer;

public:
	Product(const string& server, const string& user, const string& pw, const string& db)
		: MySQLConnector(server, user, pw, db) {
	}

	virtual void input() {
		cout << "상품 ID 입력: ";
		cin >> id;
		cout << "상품 가격 입력: ";
		cin >> price;
		cout << "제조사 입력: ";
		cin >> producer;
	}

	virtual void ShowInfo() {
		cout << "상품 ID: " << id << "\n가격: " << price << "\n제조사: " << producer << "\n";
	}

	virtual void saveToDB() = 0;
};

class Book : public Product {
private:
	string author;
public:
	Book(const string& server, const string& user, const string& pw, const string& db)
		: Product(server, user, pw, db) {
	}

	void input() override {
		Product::input();  // 
		cout << "저자 입력: ";
		cin >> author;
	}

	void ShowInfo() override {
		Product::ShowInfo();
		cout << "저자: " << author << "\n";
	}

	void saveToDB() override {
		try {
			unique_ptr<PreparedStatement> pstmt(
				conn->prepareStatement("INSERT INTO books(id, price, producer, author) VALUES (?, ?, ?, ?)"));
			pstmt->setString(1, id);
			pstmt->setInt(2, price);
			pstmt->setString(3, producer);
			pstmt->setString(4, author);
			pstmt->executeUpdate();
			cout << "도서 정보가 저장되었습니다.\n";
		}
		catch (SQLException& e) {
			cerr << "도서 저장 실패: " << e.what() << endl;
		}
	}
};

class HandPhone : public Product {
private:
	string agency;
public:
	HandPhone(const string& server, const string& user, const string& pw, const string& db)
		: Product(server, user, pw, db) {
	}

	void input() override {
		Product::input();  // 부모 input 먼저 실행
		cout << "통신사 입력: ";
		cin >> agency;
	}

	void ShowInfo() override {
		Product::ShowInfo();
		cout << "통신사: " << agency << "\n";
	}

	void saveToDB() override {
		try {
			unique_ptr<PreparedStatement> pstmt(
				conn->prepareStatement("INSERT INTO handphones(id, price, producer, agency) VALUES (?, ?, ?, ?)"));  // ← 여기 괄호 닫힘!
			pstmt->setString(1, id);
			pstmt->setInt(2, price);
			pstmt->setString(3, producer);
			pstmt->setString(4, agency);
			pstmt->executeUpdate();
			cout << "핸드폰 정보가 저장되었습니다.\n";
		}
		catch (SQLException& e) {
			cerr << "핸드폰 저장 실패: " << e.what() << endl;
		}
	}
};

class Computer : public Product {
private:
	string CPU;
public:
	Computer(const string& server, const string& user, const string& pw, const string& db)
		: Product(server, user, pw, db) {
	}

	void input() override {
		Product::input();  // 부모 input 먼저 실행
		cout << "CPU 입력: ";
		cin >> CPU;
	}

	void ShowInfo() override {
		Product::ShowInfo();
		cout << "CPU: " << CPU << "\n";
	}

	void saveToDB() override {
		try {
			unique_ptr<PreparedStatement> pstmt(
				conn->prepareStatement("INSERT INTO computers(id, price, producer, cpu) VALUES (?, ?, ?, ?)"));
			pstmt->setString(1, id);
			pstmt->setInt(2, price);
			pstmt->setString(3, producer);
			pstmt->setString(4, CPU);
			pstmt->executeUpdate();
			cout << "컴퓨터 정보가 저장되었습니다.\n";
		}
		catch (SQLException& e) {
			cerr << "컴퓨터 저장 실패: " << e.what() << endl;
		}
	}
};


int main() {
	Book book(SERVER_IP, USERNAME, PASSWORD, DATABASE);
	book.input();
	book.ShowInfo();
	book.saveToDB();

	HandPhone hp(SERVER_IP, USERNAME, PASSWORD, DATABASE);
	hp.input();
	hp.ShowInfo();
	hp.saveToDB();

	Computer com(SERVER_IP, USERNAME, PASSWORD, DATABASE);
	com.input();
	com.ShowInfo();
	com.saveToDB();

	return 0;
}
