//#include<iostream>
//using namespace std;
//
////#define Abs(X)(X>0?X:-X)
///*
//* int형 값에 대한 절대값을 반환하는 함수 Abs를
//* 매크로와 인라인 함수로 구현해 보라.
//* 두 경우 모두 다음 코드의 반환값은 2가 되어야 한다.
//* Abs(-4 + 2);
//* 매크로 작성 시에서는 매개 변수의 처리에 대해 주의해야 할 것이다.
//* 이를 통해 매크로보다 인라인 함수의 작성이 보다 쉽다는 것을 느끼게 될 것이다.
//*/
//
//inline int Abs(int x) {
//	if ( x > 0)
//		return x;
//	else
//		return -x;
//}
//    
//int main() {
//	cout << Abs((-4 + 2)) << endl;
//}