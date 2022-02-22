#include <iostream>
using namespace std;
/*
(예제 5.4)의 프로그램에서 3행 2열의 CPoint 객체 배열을 생성하되, 
배열 선언 시에는 별도의 초기화를 하지 않고 단지 선언만 한 후,
사용자로부터 각 원소의 x, y값을 차례로 입력받도록 하라.
그리고 제대로 입력되었는지 출력을 통해 확인해 보도록 하라.
객체 배열을 선언(초기화 없이)하기 위해서는 CPoint 클래스에서 생성자와 관련된 수정이 필요하며,
본 문제의 경우 객체의 값을 변경하기 위한 수정도 필요함을 인지할 수 있어야 한다.
*/
class CPoint {
private:
	int x, y;

public:
	CPoint(int a = 0, int b = 0) : x(a), y(b) {}
	void Print() { cout << "(" << x << ", " << y << ")"; }
};

int main() {
	CPoint pt[3][2];
	
	int a, b;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			cin >> a >> b;
			pt[i][j] = CPoint(a, b);
		}
		cout << endl;
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			pt[i][j].Print();
		}
		cout << endl;
	}
	return 0;
}