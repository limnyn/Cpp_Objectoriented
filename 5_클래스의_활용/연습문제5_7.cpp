#include <iostream>
using namespace std;

/*
다음 프로그램의 문제점을 설명하고 수정해 보라.
단, 현재 나와있는 멤버 변수 및 함수 외에는 따로 변수나 함수를 추가할 수 없다.
CPointArray 클래스는 3개의 원소를 갖는 CPoint 객체 배열을 포함하고 있으며
18라인에서 생성자를 통해 (1,1), (2,2), (3,3)으로 초기화 하고 있다.
24라인의 SetSum 멤버 함수는 지정한 index의 원소 값(x, y)을 모든 원소들의 합으로 지정하는데
CPoint 클래스에 준비되어 있는 SetSum 함수를 호출하여 달성하고 있다.
이때 CPoint 클래스는 6라인과 같이 CPointArray 객체를 참조로 받게 된다. 
실행 결과를 보면 첫 번째 원소의 값이 이전 3개의 원소의 값의 합으로 변경되어 있는 것을 볼 수 있다.
*/
//friend class를 선언하고
//SetSum함수가 CPointArray를 참조하기 때문에
//함수 선언만 클래스 내부에 하고 
//외부에 정의를 한다.
class CPointArray;// 전방 선언

class CPoint {
private:
	int x, y;

public:
	void SetSum(CPointArray& Pa);
	void Print() { cout << "(" << x << ", " << y << ")" << endl; }
	friend class CPointArray;	//선언 필요

};

class CPointArray {
private :
	CPoint Ary[3];

public :
	CPointArray() {
		for (int i = 0; i < 3; i++) {
			Ary[i].x = i + 1;
			Ary[i].y = i + 1;
		}
	}
	void SetSum(int index) { Ary[index].SetSum(*this); }
	void Print() {
		for (int i = 0; i < 3; i++)
			Ary[i].Print();
	}
	friend class CPoint;	//선언필요
};
void CPoint::SetSum(CPointArray& Pa) {
	x = (Pa.Ary[0].x + Pa.Ary[1].x + Pa.Ary[2].x);
	y = (Pa.Ary[0].y + Pa.Ary[1].y + Pa.Ary[2].y);
}
int main() {
	CPointArray PAry;

	PAry.SetSum(0);
	PAry.Print();

	return 0;
}