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
		cout << "��ǰ ID �Է�: ";
		cin >> id;
		cout << "��ǰ ���� �Է�: ";
		cin >> price;
		cout << "������ �Է�: ";
		cin >> producer;
	}

	virtual void ShowInfo() {
		cout << "��ǰ ID: " << id << "\n����: " << price << "\n������: " << producer << "\n";
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
		cout << "���� �Է�: ";
		cin >> author;
	}

	void ShowInfo() override {
		Product::ShowInfo();
		cout << "����: " << author << "\n";
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
			cout << "���� ������ ����Ǿ����ϴ�.\n";
		}
		catch (SQLException& e) {
			cerr << "���� ���� ����: " << e.what() << endl;
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
		Product::input();  // �θ� input ���� ����
		cout << "��Ż� �Է�: ";
		cin >> agency;
	}

	void ShowInfo() override {
		Product::ShowInfo();
		cout << "��Ż�: " << agency << "\n";
	}

	void saveToDB() override {
		try {
			unique_ptr<PreparedStatement> pstmt(
				conn->prepareStatement("INSERT INTO handphones(id, price, producer, agency) VALUES (?, ?, ?, ?)"));  // �� ���� ��ȣ ����!
			pstmt->setString(1, id);
			pstmt->setInt(2, price);
			pstmt->setString(3, producer);
			pstmt->setString(4, agency);
			pstmt->executeUpdate();
			cout << "�ڵ��� ������ ����Ǿ����ϴ�.\n";
		}
		catch (SQLException& e) {
			cerr << "�ڵ��� ���� ����: " << e.what() << endl;
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
		Product::input();  // �θ� input ���� ����
		cout << "CPU �Է�: ";
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
			cout << "��ǻ�� ������ ����Ǿ����ϴ�.\n";
		}
		catch (SQLException& e) {
			cerr << "��ǻ�� ���� ����: " << e.what() << endl;
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
