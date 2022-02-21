#include<iostream>
using namespace std;
/*
* (예제 4.4)구조체를 class로 변경하고 실행해 보라.
* 그리고 Move 함수를 추가해 보라.
* Move 함수는 int형 변수 2개를 매개 변수 a, b로 전달받아
* x, y 좌표의 값을 각각 a, b 만큼씩 이동하는 것이다.
* main 함수에서 Move 함수를 호출한 후 제대로 이동이 되는지
* Print 함수를 통해 확인해 보도록 하라.
* 이 문제는 클래스의 멤버 함수를 작성하는 방법과 멤버 함수를 통해 멤버 변수를 수정하는 
* 방법에 대해 학습하기 위한 문제이다.
*/
/*
* 예제 4.4의 구조체 
struct Point {
private :
	int x;
	int y;
public :
	void SetXY(int a, int b) { x = a; y = b; }
	void Print() { cout << "(" << x << " " << y << ")" << endl; }
};
*/

class Point {
private :
	int x;
	int y;
public :
	void SetXY(int a, int b) { x = a; y = b; }
	void Move(int a, int b) { x += a; y += b; }
	void Print() { cout << "(" << x << " " << y << ")" << endl; }
};
int main() {
	Point P1;
	P1.SetXY(3, 4);
	P1.Print();
	P1.Move(-1, 5);
	P1.Print();

	return 0;
	
}