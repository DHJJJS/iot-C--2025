///*
//	vector
//*/
//#include <iostream>
//#include <vector>				// vector 헤더파일 포함
//using namespace std;
//
//int main()
//{
//	vector<int> v;
//	vector<int> v1{ 10 };
//	vector<int> v2(5);
//	vector<int> v3 = { 1,2,3,4,5,6 };
//
//	cout << "v size: " << v.size() << endl;
//	cout << "v1 size: " << v1.size() << endl;
//	cout << "v2 size: " << v2.size() << endl;
//	cout << "v3 size: " << v3.size() << endl;
//
//	for (int i = 0; i < 5; i++) {
//		printf("v2[%d]:%d  ", i, v2[i]);
//	}
//	cout << endl;
//	for (auto i : v3) {			// 범위기반 for문 - 인덱스 사용이 불가
//		// cout << v3[i] << endl;
//		cout << i << endl;
//	}
//
//	/* begin()과 end()는 iterator(반복자) 타입을 반환하다.(포인터) */
//	cout << "v3의 첫번째 요소값: " << *v3.begin() << endl;
//	cout << "v3의 마지막 요소값: " << *(v3.end() - 1) << endl;
//
//
//	return 0;
//}
///*
//	vector.size(): 원소 크기(갯수)를 반환
//	vector.begin(): 첫번째 요소를 반환
//	vector.end(): 마지막 요소 다음걸 반환
//*/