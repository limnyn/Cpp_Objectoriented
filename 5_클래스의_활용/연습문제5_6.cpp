#include <iostream>
using namespace std;

/*
다음과 같은 CCircle 클래스를 만들어 보라.
CCircle 클래스는 중심(int x, y)과 반지름(double Radius)을 가지고 있다.
생성자는 3가지 종류가 존재하는데 매개 변수가 없는 생성자는 중심과 반지름의 값을(0, 0, 1)로 초기화 하고,
매개 변수가 2개인 생성자는 x, y값을 매개 변수 값으로 설정하고 반지름은 1로 설정한다.
세 번째, 매개 변수가 3개인 생성자는 각각 중심과 반지름의 값을 설정한다.
멤버 함수로는 GetArea와 Move 함수가 존재한다.
GetArea 함수는 매개 변수가 없는 경우 현재 반지름(Radius) 값을 기반으로 원의 면적을 계산하여 반환하면 되고,
매개 변수(double)가 있는 경우 해당 매개 변수 값을 반지름으로 하여 원의 면적을 반환하면 된다.
Move 함수는 2개의 매개 변수를 전달받아 각각 x, y값을 해당 값만큼 이동한다.
마지막으로 Print 함수에서는 객체의 중심과 원의 면적을 출력한다.
생성자와 GetArea 구현 시 함수 오버로딩 또는 디폴트 매개 변수 중 편한 것을 적용하면 된다.
다음 main 함수와 출력값을 참고하도록 하라.
*/

class CCircle {
private :
	int x, y;
	double Radius;
	
public :
	CCircle(int a = 0, int b = 0, double r = 1) : x(a), y(b), Radius(r) {}

	double GetArea() {
		return (3.14 * Radius* Radius);
	}
	double GetArea(double rad) {
		return (3.14 * rad * rad);
	}
	void Move(int a, int b) { x += a; y += b; }
	void Print() { cout << "중심 : (" << x << ", " << y << "), 면적 : " << GetArea() << endl; }

};

int main() {
	CCircle C1;
	CCircle C2(1, 1);
	CCircle C3(2, 2, 2);

	cout << "GetArea 테스트 : " << C1.GetArea(10) << endl;

	C2.Move(3, 3);

	C1.Print();
	C2.Print();
	C3.Print();

	return 0;
}