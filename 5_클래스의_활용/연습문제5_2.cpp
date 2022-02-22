#include <iostream>
using namespace std;
/*
다음과 같은 main 함수가 실행 결과와 같이 수행될 수 있도록 
CPoint 클래스와 GetSumX, GetSumY 함수를 작성해 보라.
실행 결과 = (9, 12)
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
	int i;
	CPoint ary[5] = { CPoint(1, 2), CPoint(3, 4), CPoint(5,6) };
	CPoint sum;
	sum.SetXY(sum.GetSumX(ary, 5), sum.GetSumY(ary, 5));

	sum.Print();

	return 0;
}