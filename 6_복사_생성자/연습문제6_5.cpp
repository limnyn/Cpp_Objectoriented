#pragma warning (disable:4996)
#include <iostream>
using namespace std;
/*
CArray 클래스는 임의 개수의 int형 원소를 저장할 수 있는 클래스이다.
이를 위해 배열을 가리키는 포인터 변수*(int *ary)와 원소의 개수를 의미하는 int형 변수(int count)를 멤버 변수로 가지고 있다.
다음 main 함수와 실행 화면을 참고하여 CArray 클래스를 작성해 보라.
단, 객체 소멸 시 소멸자를 통해 해당 객체를 위해 동적으로 생성한 메모리를 해제해야만 한다.
*/

class CArray {
private :
	int* ary;
	int count;

public :

	CArray(int a) : count(a) {
		ary = new int [count];
		for (int i = 0; i < count; i++)
			ary[i] = i;
	}
	CArray(const CArray &Car) : count(Car.count) {
		ary = new int[count];
		for (int i = 0; i < count; i++)
			ary[i] = i;
	}
	~CArray() { delete[] ary; }
	CArray &Set(int index, int num) {
		ary[index] = num;
		return *this;
	}
	void Print() {
		for (int i = 0; i < count; i++)
			cout << ary[i] << " ";
		cout << endl;
	}
};

int main() {
	CArray Ary1(5);
	CArray Ary2(7);
	CArray Ary3(Ary1);
	Ary2.Set(0, 11).Set(1, 12).Set(2, 13);

	Ary1.Print();
	Ary2.Print();
	Ary3.Print();

	return 0;
}