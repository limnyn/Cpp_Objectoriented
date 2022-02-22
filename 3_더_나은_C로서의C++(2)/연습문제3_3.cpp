#include<iostream>
using namespace std;

/*
* int형 변수 a에 대한 참조 변수 b를 만들고
* a의 값, b의 값, a의 주소, b의 주소를 차례대로 출력해 보라.
* 그리고 b의 값을 변경한 뒤, a, b의 값을 출력해 보라.
* 각 변수의 주소를 풀력해 봄으로써 참조 변수가 별도의 메모리에 생성되지 않고
* 기존 변수의 메모리를 공유하게 됨을 알게 될 것이다.
*/

int main(){
	int a = 5;
	int& b = a;
	cout << "a			: " << a << endl;
	cout << "b			: " << b << endl;
	cout << "a의 주소	: " << &a << endl;
	cout << "b의 주소	: " << &b << endl;
	
	b = 30;
	cout << "a			: " << a << endl;
	cout << "b			: " << b << endl;
	cout << "a의 주소	: " << &a << endl;
	cout << "b의 주소	: " << &b << endl;

	return 0;
}