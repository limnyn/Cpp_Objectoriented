#pragma warning (disable:4996)
#include <iostream>
#include <cstring>
using namespace std;
/*
* CStudent라는 클래스를 만들어 보라.
* CStudent 클래스는 이름(char name[20]), 학번(int number),
* 나이(int age)를 저장하기 위한 멤버 변수를 포함하고 있다.
* 그리고 생성자와 멤버 변수의 값을 변경하기 위한 멤버 함수,
* 데이터를 출력하기 위한 멤버 함수가 필요하다.
* main 함수와 실행 결과를 참고하도록 하라.
* 
*/

class CStudent {
private:
	char name[20];
	int number;
	int age;
public:
	CStudent(const char stuName[] = "noname" , int stuNum = 0, int stuAge = 0) {
		strcpy(name, stuName);
		number = stuNum;
		age = stuAge;
	}
	void SetName(const char *stuName) { strcpy(name, stuName); }
	void SetNumber(int stuNum) { number = stuNum; }
	void SetAge(int stuAge) { age = stuAge; }
	void Print() {
		cout << "이름 : " << name << endl;
		cout << "학번 : " << number << endl;
		cout << "나이 : " << age << endl;
	}

};

int main() {
	CStudent St1("홍길동", 11111111, 25);
	CStudent St2;
	St1.Print();
	St2.Print();

	St2.SetName("이순신");
	St2.SetNumber(22222222);
	St2.SetAge(30);

	St2.Print();
	return 0;
}