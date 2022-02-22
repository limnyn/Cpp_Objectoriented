#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

/*
* 다음과 같은 구조체가 있다.
* 이 구조체 변수 5개를 원소로 갖는 배열을 포인터 변수를 상ㅇ하여
* 동적으로 생성하고 각 원소의 x, y 값을 임의의 값으로 채워 보라.
* struct Point{
* int x, y;
* };
*/

struct Point {
	int x, y;
};
int main() {
	int x, y;
	struct Point* pAry = new struct Point[5];
	srand(unsigned int(time(NULL)));
	for (int i = 0; i < 5; i++) {
		x = rand() % 10;
		y = rand() % 10;
		*(pAry + i) = { x,  y};

	}
	for (int i = 0; i < 5; i++) {
		cout << "x, y = " << pAry[i].x << ", " << pAry[i].y << endl;
	}
	delete[]pAry;
}