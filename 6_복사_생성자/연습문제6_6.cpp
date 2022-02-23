#pragma warning (disable:4996)
#include <iostream>
using namespace std;
/*
main 함수가실행 결과와 같이 수행될 수 있도록 CArray 클래스와 Sum 함수를 작성해 보라.*/

class CArray {
private :
	int* arr;
	int count;
	
public :
	CArray(int a) :count(a) {
		arr = new int[count];
		for (int i = 0; i < count; i++)
			arr[i] = i;
	}
	CArray(const CArray &ary2) : count(ary2.count){
		arr = new int[count];
		for (int i = 0; i < count; i++)
			arr[i] = ary2.arr[i];
	}

	~CArray() { delete[] arr; }
	
	CArray &Set(int index, int num) {
		arr[index] = num;
		return *this;
	}
	int Count() { return count; }
	int index(int num) { return arr[num]; }
	void Print() { 
		for (int i = 0; i < count; i++)
			cout << arr[i] << " ";
		cout << endl;
	}
};


CArray Sum(CArray A1, CArray A2)
{
	//같은 원소끼리 더한 결과로 만든 CArray 객체를 반환한다.

	int minCount = (A1.Count() < A2.Count()) ? A1.Count() : A2.Count();
	int maxCount = (A1.Count() > A2.Count()) ? A1.Count() : A2.Count();

	CArray Tmp(maxCount);

	for (int i = 0; i < minCount; i++)
		Tmp.Set(i, A1.index(i) + A2.index(i));
	for (int j = minCount; j < maxCount; j++)
	{
		if (A1.Count() < A2.Count())
			Tmp.Set(j, A2.index(j));
		else
			Tmp.Set(j, A1.index(j));
	}
	return Tmp;

	
}

int main() {
	CArray Ary1(5);
	CArray Ary2(7);
	Ary2.Set(0, 11).Set(1, 12).Set(2, 13);

	CArray Ary3 = Sum(Ary1, Ary2);

	Ary1.Print();
	Ary2.Print();
	Ary3.Print();

	return 0;
}
