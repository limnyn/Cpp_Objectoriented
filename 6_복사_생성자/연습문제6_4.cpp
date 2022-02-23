#include <iostream>
using namespace std;

/*
다음 프로그램의 문제점은 무엇인가?
*/

class CPoint {
private :
	int x, y;

public :
	//기본생성자가 없기 때문에 추가해주면 작동이 된다.
	//CPoint(int a = 0, int b = 0) : x(a), y(b) {}
	CPoint(const CPoint& Po) { x = Po.x; y = Po.y; }
	void Print() { cout << "(" << x << ", " << y << ")" << endl; }

};
int main() {
	CPoint P1;
	CPoint P2(P1); //복사생성

	P1.Print();
	P2.Print();

	return 0;
}
//복사 생성자를 만들면 기본 생성자도 사라진다.
//CPoint의 기본 생성자가 없다.
//따라서 기본 생성자를 만들어야 한다.