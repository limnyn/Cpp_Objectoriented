#include<iostream>
using namespace std;
/*
다음 main 함수가 수행될 수 있도록 CPoint 클래스에 SetX와 SetY 멤버 함수를 추가해 보라.
*/
class CPoint {
private :
	int x, y;
	
public :
	CPoint(int a = 0, int b = 0) : x(a), y(b) {}
	CPoint &SetX(int a) { x = a; return (*this); }
	CPoint &SetY(int b) { y = b; return (*this); }

	void Print() {	cout << "(" << x << ", " << y << ")" << endl;	}

};

int main() {
	CPoint P1;
	P1.SetX(3).SetY(4);
	P1.Print();

	P1.SetY(6).SetX(5);
	P1.Print();

	return 0;

}