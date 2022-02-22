#include<iostream>
using namespace std;

/*
* 5개 이하의 int형 값을 매개 변수로 전달받아 합을 반환하는 Sum함수를 구현해보라.
* 이때 Sum 함수는 단 하나만 구현해야 한다.
* 디폴트 매개 변수의 복습을 위한 간단한 문제이다.
*/

int Sum(int a, int b = 0, int c = 0, int d = 0, int e = 0) {
	int result = 0;
	result = a + b + c + d + e;
	return result;
}

int main() {
	int x = 3; 
	int y = 5;
	int z = 6;
	cout << Sum(x, y, z);
}