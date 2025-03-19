//두 개의 정수를 입력받아 합을 출력하는 프로그램을 작성하시오.
#include <iostream>
using namespace std;

//int main() 
//{
//	int num1, num2;
//	cout << "정수를 입력해주세요 >> ";
//	cin >> num1;
//	cout << "두번째 정수를 입력해주세요 >> ";
//	cin >> num2;
//	cout << "정수의 합 : " << num1 + num2 << "입니다. " << endl;
//
//	return 0;
//}
// 
//사용자로부터 세 개의 숫자를 입력받고, 평균을 구해 출력하는 프로그램을 작성하시오.
//int main()
//{
//	int num1, num2, num3;
//	cout << "숫자 1을 입력해주세요 >> ";
//	cin >> num1;
//	cout << "숫자 2을 입력해주세요 >> ";
//	cin >> num2;
//	cout << "숫자 3을 입력해주세요 >> ";
//	cin >> num3;
//	cout << "평균 : " << (num1 + num2 + num3) / 3 << endl;
//
//	return 0;
//}
//하나의 정수를 입력받고, 그 수가 짝수인지 홀수인지 출력하는 프로그램을 작성하시오.
//int main()
//{
//	int num; 
//	cout << "정수를 입력해주세요 >> ";
//	cin >> num;
//
//
//	if (num % 2 == 1) {
//		cout << "정수는 홀수!";
//	}
//	else if (num % 2 == 0) {
//		cout << "정수는 짝수!";
//	}
//
//	return 0;
//}

//정수를 입력받아, 그 수가 양수면 "양수입니다", 음수면 "음수입니다", 0이면 "0입니다"를 출력하는 프로그램을 작성하시오. (if - else 활용)

//int main()
//{
//	int num;
//	cout << "정수를 입력하세요 >> ";
//	cin >> num;
//	if (num > 0) {
//		cout << "양수입니다.";
//	}
//	else if (num < 0) {
//		cout << "음수입니다.";
//	}
//	else {
//		cout << "0입니다.";
//	}
//
//	return 0;
//}

//1부터 10까지의 합을 구하는 프로그램을 작성하시오. (for 반복문 활용)

//int main()
//{
//	int sum = 0;
//	for (int i = 1; i < 11; i++) {
//		sum += i;
// }
//	cout << "1부터 10까지 합 : " << sum << endl;
//	
//
//	return 0;
//}

//1부터 사용자가 입력한 숫자까지 출력하는 프로그램을 작성하시오. (while 활용)
//int main()
//{
//	int num;
//	cout << "숫자를 입력하세요.";
//	cin >> num;
//	int i = 1;
//	while (i <= num) {
//		cout << "숫자 출력 : " << i << endl;
//		i++;
//	}
//
//	return 0;
//}
//1부터 20까지 출력하는데, 5의 배수는 건너뛰도록(continue) 작성하시오.
//
//int main()
//{
//	for (int i = 1; i <= 20; i++) {
//		if (i % 5 == 0) { continue; }
//		cout << "출력 : " << i << endl;
//	}
//	return 0;
//}
//두 개의 정수를 입력받아, 두 수의 합을 반환하는 함수를 작성하시오.
//int add(int, int);
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	cout << "정수 1 입력하세요.";
//	cin >> num1;
//	cout << "정수 2 입력하세요.";
//	cin >> num2;
//
//	cout << "정수의 합 : " << add(num1, num2);
//
//	return 0;
//}
//int add(int a, int b) {
//	return a + b;
//}
//한 개의 정수를 입력받아, 해당 정수의 팩토리얼(예: 5!= 5×4×3×2×1)을 계산하는 함수를 작성하시오.
//int pact(int);
//int main()
//{
//	int num;
//	cout << "정수를 입력하세요.";
//	cin >> num;
//
//	cout << "정수의 팩토리얼 : " << pact(num);
//	
//
//	
//	return 0;
//}
//int pact(int a) {
//  int result = 1;
//	for (int i = 1; i <= a; i++) {
//		return * = i;
//	}
//}
//이름과 나이를 입력받아 "OOO님, OO살이군요!"를 출력하는 함수를 작성하시오.

//int main() {
//
//	char name[20];
//	int age;
//
//	cout << "이름을 입력하세요.";
//	cin >> name;
//	cout << "나이를 입력하세요.";
//	cin >> age;
//	cout << name << "님, " << age << "살이군요!" << endl;
//	
//	return 0;
//}
//참조자를 이용하여 두 개의 정수를 바꾸는 함수(swap)을 작성하시오.

//void swap (int&, int&);
//int main() {
//
//	int num1 = 3;
//	int num2 = 4;
//	swap(num1, num2);
//	cout << "정수 바꾸기 : " << num1 << ", " << num2 ;
//	
//	return 0;
//}
//void swap (int& a, int& b) {
//	
//	temp = a;
//	a = b;
//	b = temp;
//	
//}
