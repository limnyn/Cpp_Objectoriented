#pragma warning (disable:4996)
#include <iostream>
#include <cstring>
using namespace std;
/*
* 다음 프로그램의 지역 객체들에 대한 메모리 구조를 설명해 보고 출력 결과가 무엇인지, 문제가 있다면 왜 문제가 발생하는지에 대해 설명해 보라.
* (예제 6.5)의 CString 클래스를 그대로 사용한다고 가정하라.
*/

class CString {
private :
	int len;
	char* str;


public :
	CString(const char* s = "UnKnown") {
		len = strlen(s);
		str = new char[len + 1];
		strcpy(str, s);
	}
	//CString(const CString& copy) {
	//	len = copy.len;
	//	str = new char[len + 1];
	//	strcpy(str, copy.str);
	//}
	~CString() { delete[] str; }
	void Print() { cout << str << endl; }
};

void ShowString(CString str, int count) {
	if (count <= 0)
		return;
	cout << "cout : " << count << endl;
	str.Print();
	ShowString(str, count - 1);
}
/*
재귀함수가 끝나면 count 가 0일때의 str1이 소멸된다
그 다음 count가 2일때의 메모리를 해제하려하지만 이미 메모리가 해제되어 있기 때문에
메모리 해제 대상이 없기 때문에 에러가 발생한다.

*/

int main(void)
{
	CString str1 = "C++ Programming";
	ShowString(str1, 3);

	return 0;
}