#include <iostream>
using namespace std;
#include <time.h>
/*
* CPoint **ptr;가 있다.
* 이 포인터를 통해 2행 3열의 CPoint형 2차원 객체 배열을 동적으로 생성하라.
* 그리고 rand 함수를 사용하여 각 원소의 x, y 값을 임의의 값으로 채운 후 출력해 보라.
* main 함수가 끝나기 전에 delete를 사용하여 동적으로 생성된 모든 객체의 메모리를 해제하도록 하라.
* 이중 포인터(포인터에 대한 포인터)에 대해서는 (예제 2.12)를 참고하도록 하라.
*/

class CPoint {
private:
	int x, y;

public:
	CPoint() : x(0), y(0) {}
	CPoint(int a) : x(a), y(a) {}
	CPoint(int a, int b) : x(a), y(b) {}
	void SetXY(int a, int b) { x = a; y = b; }
	void Print() { cout << "(" << x << ", " << y << ")" << endl; }
	int GetSumX(CPoint arr[], int num) {
		int sum = 0;
		for (int i = 0; i < num; i++) {
			sum += arr[i].x;
		}
		return sum;
	}
	int GetSumY(CPoint arr[], int num) {
		int sum = 0;
		for (int i = 0; i < num; i++)
			sum += arr[i].y;
		return sum;
	}
};
int main() {
	CPoint** ptr;
	ptr = new CPoint * [2];
	for (int i = 0; i < 2; i++)
		ptr[i] = new CPoint[3];

	srand((unsigned)int(time(NULL)));
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			ptr[i][j].SetXY(rand() % 100, rand()%100);
			ptr[i][j].Print();
		}
	}
	
	for (int i = 0; i < 2; i++)
		delete[] ptr[i];
	delete ptr;

}