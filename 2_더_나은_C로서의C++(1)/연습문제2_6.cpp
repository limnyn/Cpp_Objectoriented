//#include <iostream>
//using namespace std;
//
//int* GetArray(int x) {
//	int* p = new int[x];
//	for (int i = 0; i < x; i++) {
//		p[i] = i;
//	}
//	return p;
//}
///*
//*	new아 delete를 사용하여 4행 5열의 배열을 동적으로 생상하고 행과 열의 값을 합한 값으로 각 원소를 채워보자.
//*	이때 배열을 가리키는 포인터 변수로는 int **p;를 사용하도록 하자.
//*/
//int main() {
//	int* pAry;
//
//	pAry = GetArray(5);
//	for (int i = 0; i < 5; i++)
//		cout << pAry[i] << " ";
//	cout << endl;
//
//	delete [] pAry;
//
//	return 0;
//
//}