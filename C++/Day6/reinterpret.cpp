/*
*		reinterptet_cast
*		������->������, ������->����, ����->�����ͷ� �ϴ� �ַ� �����Ͱ��� ������.
* 
*/

//#include <iostream>
//
//int main()
//{
//	int* ip = new int{ 10 };
//	long lg = reinterpret_cast<long>(ip);			//int* --> long
//	unsigned int ui = reinterpret_cast<int>(ip);
//	printf("ip: %d, lg: %d, ui: %d\n", ip, lg, ui);
//
//	//int* p = reinterpret_cast<int*>(lg);
//	int* p1 = reinterpret_cast<int*>(ui);
//	printf("p: %d\n", *p1);
//
//	int* p = new int{ 100 };
//	char* pc = reinterpret_cast<char*>(p);
//	printf("c: %d\n", *pc);					// int* --> char**
//
//
//	//delete p;
//	
//	int* p2 = reinterpret_cast<int*>(pc);
//
//	delete p;
//	p = reinterpret_cast<int*>(pc);
//	printf("p: %d\n", *p);					// char* --> int*
//
//	return 0;
//}