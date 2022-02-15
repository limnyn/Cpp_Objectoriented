//#include <iostream>
//using namespace std;
//
//
///*
//* 직사각형과 원의 면적을 계산하는 GetArea라는 함수를 작성하고자 한다. 
//* 사용자로부터 계산하고자 하는 모양을 입력받고, 직사각형일 경우 가로와 세로값을 입력받고,
//* 원일 경우 반지름을 입력받는다.
//* 그리고 GetArea 함수를 통해 면적을 계산하여 화면에 출력하라.
//* 직사각형에 대한 GetArea 함수의 경우 가로, 세로값을 필요로 하고 
//* 원에 대한 GetArea 함수는 반지름 값을 필요로 한다.
//* 매개 변수의 개수가 서로 다르므로 함수 오버로딩이 가능할 것이다.
//*/
//
//int GetArea(int w, int h) {
//	return w * h;
//}
//int GetArea(int r) {
//	return r*r;
//}
//int main() {
//	
//	int shape = 0;
//	while (1) {
//		cout << "면적을 구할 도형을 선택" << endl;
//		cout << "1 = 직사각형" << endl;
//		cout << "2 = 원" << endl;
//		cin >> shape;
//		if (shape == 1) {
//			int x, y;
//			cout << "가로 세로 입력 : ";
//			cin >> x >> y;
//			cout << "직사각형의 면적은 " << GetArea(x, y) << "입니다" << endl << endl;
//		}
//		else if (shape == 2)
//		{
//			int r;
//			cout << "반지름 입력 : ";
//			cin >> r;
//			cout << "원의 면적은 " << GetArea(r) << "입니다" << endl << endl;
//		}
//		else
//	 	{
//			cout << "다시 입력해주세요" << endl;
//			continue;
//		}
//			
//	}
//
//}