#include <iostream>
using namespace std;

/*
다음 main 함수가 수행될 수 있도록 CArray 클래스를 작성해 보라. 
CArray 클래스는 멤버 변수로 int 배열(int ary[5])을 가지고 있다.*/

class CArray {
private:
	int ary[5];

public :
	int& GetElem(int i) { return ary[i]; }
	CArray& Increase(int i) { ary[i]++; return (*this); }
};

int main() {
	int i;
	CArray Ary;
	for (i = 0; i < 5; i++) {
		Ary.GetElem(i) = i;
	}
	Ary.Increase(0).Increase(1).Increase(2).Increase(3).Increase(4);

	for (i = 0; i < 5; i++)
		cout << "Ary[" << i << "]" << Ary.GetElem(i) << endl;

	return 0;
}