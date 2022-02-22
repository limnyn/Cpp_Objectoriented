#include<iostream>
using namespace std;
/*
정사각형과 원을 동시에 표현할 수 있는 CShape 클래스를 만들어 보자.
CShape 클래스는 멤버 변수로 정사각형 또는 원을 의미하는 타입 변수(int type)를 가지고 있으며,
int형 변수 하나(int len)를 통해 정사각형의 경우 한 변의 길이를 나타내고,
원의 경우 반지름을 나타내도록 하라.
생성자를 통해 타입과 한 변의 길이(반지름)를 지정할 수있으며, 멤버 함수로는 각 도형의 면적을 계산하는 GetArea 함수가 있다.
이때 도형의 타입 값으로는 정사각형은 1, 원은 2로 가정하라. 원의 면적 계산을 위한 PI 값은 const 멤버 변수로 선언하라.
그리고 현재 생성된 객체들 중 각 타입의 도형이 몇 개인지 알 수 있도록 static 멤버 변수를 사용해 보라.
다음 main 함수와 실행 결과를 참고하라.
*/

class CShape {
private:
	int type;
	int len;
	const double PI;
	static int RecCount;
	static int CirCount;

public:
	CShape() :PI(3.14) { RecCount++; };
	CShape(int a, int b) : type(a), len(b), PI(3.14) {
		if (type == 1)
			RecCount++;
		else if (type == 2)
			CirCount++;
	}
	~CShape() {
		if (type == 1)
			RecCount--;
		else if (type == 2)
			CirCount--;
	}
	static int GetRectCount() { return RecCount; }
	static int GetCircleCount() { return CirCount; }
	double GetArea() { 
		if (type == 1)
			return (len * len);
		else if (type == 2)
			return (len * len * PI);
	}
};


int CShape::RecCount = 0;
int CShape::CirCount = 0;

int main() {
	CShape S1(1, 5);
	CShape S2(2, 5);
	CShape* pRect = new CShape[3];

	cout << "사각형 개수 : " << CShape::GetRectCount() << endl;
	cout << "원 개수 : " << CShape::GetCircleCount() << endl;
	cout << "S1의 면적 : " << S1.GetArea() << endl;

	delete[] pRect;

	cout << "사각형 개수 : " << CShape::GetRectCount() << endl;
	cout << "원 개수 : " << CShape::GetCircleCount() << endl;
	cout << "S2의 면적 : " << S2.GetArea() << endl;

	return 0;
}