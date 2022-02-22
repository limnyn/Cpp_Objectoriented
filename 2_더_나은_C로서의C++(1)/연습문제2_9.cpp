#include<iostream>
using namespace std;


/*
* 1부터 100까지 더하는 프로그램을 작성하라.
* for문을 사용하고 index용 변수는 for문의 초기화 구문 내에서 선언하여 사용하도록 하라
* 매우 간단한 문제이다.
* 하지만 이 문제로부터 C++의 경우 어느 위치에서든지 변수 선언이 올 수 있으며.
* 특히 for문의 index로 다음과 같은 구문을 매우 흔하게 사용함을 알도록 하라.
* for(int i = 0; i < 100; i++)
*/
int main() {

	int Sum = 0;
	for (int index = 1; index <= 100; index++) {
		Sum += index;
	}
	cout << "Sum : " << Sum;


}