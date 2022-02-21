#include <iostream>
using namespace std;
/*
* 다음 main 함수와 실행 결과를 참고하여 좌표(x, y)를 나타내는 CPoint 클래스를 만들어 보라.
* 매개 변수가 3개인 경우 x 값은 합으로, y 값은 곱으로 초기화하면 된다.
*/
class CPoint {
private:
	int x, y;

public:

	CPoint(void){ x = 0; y = 0; }
	CPoint(int i) {
		x = i;
		y = i;
	}
	CPoint(int  a, int b) {
		x = a; 
		y = b; 
	}
	CPoint(int a, int b, int c) {
		x = a + b + c;
		y = a * b * c;
	}
	void print() { cout << "(" << x << ", " << y << ")" << endl; }
	
};

int main() {
	CPoint p1;
	CPoint p2(1);
	CPoint p3(2, 3);
	CPoint p4(4, 5, 6);

	p1.print();
	p2.print();
	p3.print();
	p4.print();

	return 0;

}
