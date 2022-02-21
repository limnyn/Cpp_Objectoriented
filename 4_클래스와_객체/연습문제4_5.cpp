#include <iostream>
using namespace std;

/*
* 다음 프로그램의 출력 결과에 대해 설명해 보라.
*/
class CMyClass {
private :
	int i;

public:
	CMyClass(int a) { i = a; cout << "생성자 : " << i << endl; }
	~CMyClass() { cout << "소멸자 : " << i << endl; }
};

CMyClass M(0);

void f(CMyClass LocalM){} //함수의 형식매개 변수 LocalM도 지역변수이다.

void main() {
	CMyClass M1(1);
	CMyClass M2[3] = { 2, 3, 4 };
	f(M2[2]);
}

/*
* 생성은 0 1 배열 2 3 4 그리고 4를 매개변수로 삼는 f함수가 생성된다
* 소멸은 역순이다.
*/