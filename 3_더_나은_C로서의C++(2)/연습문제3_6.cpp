#include<iostream>
using namespace std;

/*
* 다음과 같은 프로그램이 있다.
* C++에서는 함수 오버로딩이 가능하므로 이와 같이 2개의 sum 함수가 나올 수도 있다.
* 여기서 int형 sum함수와 double형 sum 함수 중 어느 한 함수에만 extern "C"선언을 한 후 컴파일해 보도록 하라.
* 그리고 두 함수 모두 extern "C" 선언을 한 후 컴파일해 보도록 하라.
* 두 경우의 컴파일 결과를 설명하고 왜 그런 결과가 나오는지 설명해보라.
* 참고로 함수 정의 앞에 extern "C"를 선언하면 C언어와 같이 오브젝트 파일 생성 시 
* 그 함수의 linkage 구성을 위해 함수 이름만 사용하게 된다.
*/

extern "C" int sum(int x, int y) {
	return(x + y);
}
extern "C" double sum(double x, double y) {
	return(x + y);
}
//C에서는 mangled name을 만들지 않고 함수 이름으로만 linkage를 구성한다
//그러므로 함수 오버로딩을 허용하지 않는다.
int main(void) {
	cout << sum(1, 2) << endl;
	cout << sum(1.1, 2.2) << endl;

	return 0;
}