#include <iostream>
using namespace std;
/*
* 다음 main 함수에서 CPoint 객체 생성을 위해 필요한 모든 생성자를 포함하도록 CPoint 클래스를 작성해 보라.
* 필요한 모든 생성자는 명시적으로 구현해야만 한다.
*/
class CPoint {
private:
	int x, y;

public:
	CPoint(int a = 0) : x(a), y(a) {}
	CPoint(int a, int b) : x(a), y(b) {}
	CPoint(const CPoint& Po) { x = Po.x; y = Po.y; }	//복사생성자
	CPoint(const CPoint& Po, int a) { x = Po.x * a; y = Po.y * a; }
	CPoint(int a, const CPoint& Po) { x = Po.x * a; y = Po.y * a; }
	CPoint(const CPoint& P1, const CPoint& P2) { x = P1.x + P2.x; y = P1.y + P2.y; }
	void Print() { cout << "(" << x << ", " << y << ")" << endl; }
};

int main() {
	CPoint P1;
	CPoint P2(1);
	CPoint P3(2, 3);
	CPoint P4 = P3;
	CPoint P5(2, P3);
	CPoint P6(P4, P5);

	P1.Print();
	P2.Print();
	P3.Print();
	P4.Print();
	P5.Print();
	P6.Print();

	return 0;

}