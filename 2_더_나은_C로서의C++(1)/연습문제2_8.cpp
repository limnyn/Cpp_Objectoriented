#include<iostream>
using namespace std;

/*
* 다음 프로그램의 출력 결과는 무엇인가?
*/
	//bVar1 == 1+1 == 2
	//bVar2 == true + true == 1;
typedef int BOOL;


int main() {
	BOOL bVar1;
	bool bVar2;

	bVar1 = (1 < 2) + (2 < 3);
	bVar2 = (1 < 2) + (2 < 3);

	cout << "bVar1 : " << bVar1 << endl;
	cout << "bVar2 : " << bVar2 << endl;

	return 0;
}