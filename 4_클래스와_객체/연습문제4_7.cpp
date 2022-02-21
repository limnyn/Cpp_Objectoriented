#include <iostream>
using namespace std;

/*
* (연습문제 4.6)에서 만든 모든 생성자를 멤버 초기화 구문을 사용하여 재작성해 보라.
* (예제  4.13)에서는 멤버 변수으 ㅣ값을 형식매개 변수의 값으로 초기화하는 예만을 살펴보았다.
* 그러나 초기화 구문 사용 시 초기화 값으로는 형식매개 변수뿐만 아니라 상수 또는 수식도 사용할 수 있다.
*	CPoint(int a, int b) : x(100), y(100) {}
*	CPoint(int a, int b) : x(a*a), y(b * b){}
* 이를 참고하여 프로그램을 작성해 보라.
*/
class CPoint {
private:
	int x, y;
public:
	CPoint(void) : x(0), y(0) {}
	CPoint(int i) : x(i), y(i) {}
	CPoint(int  a, int b) : x(a), y(b) {}
	CPoint(int a, int b, int c) :x(a + b + c), y(a* b* c) {}
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