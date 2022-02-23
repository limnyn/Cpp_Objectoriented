#include<iostream>
using namespace std;
/*
main함수와 실행 결과를 참고하여 2개의 CPoint 객체를 매개 변수로 전달받아. 
두 점에 대한 합과 차에 대한 새로운 CPoint 객체를 만들어 반환하는 Sum, Sub 함수를 작성해 보라.
객체 반환 시에는 임시 객체를 사용하도록 하라.*/
class CPoint {
private :
	int x;
	int y;

public :
	CPoint(int a = 0, int b = 0) :x(a), y(b){}
	int GetX() {
		return x;
	}
	int GetY() {
		return y;
	}

	~CPoint() { }
	void Print() { cout << "(" << x << ", " << y << ")" << endl; }
};

CPoint Sum(CPoint p1, CPoint p2) {
	return CPoint(p1.GetX() + p2.GetX(), p1.GetY()+p2.GetY());
}
CPoint Sub(CPoint p1, CPoint p2) {
	return CPoint(p1.GetX() - p2.GetX(), p1.GetY() - p2.GetY());

}

int main() {
	CPoint P1(1, 2);
	CPoint P2(3, 4);
	CPoint P3 = Sum(P1, P2);
	CPoint P4 = Sub(P1, P2);

	P1.Print();
	P2.Print();
	P3.Print();
	P4.Print();

	return 0;
}