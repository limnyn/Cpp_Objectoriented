//#include<iostream>
//using namespace std;
//
///*
//* int형 배열과 원소 개수를 매개 변수로 전달받아
//* 배열 원소들 전체를 곱한 결과와 더한 결과를
//* 반환하는 함수 하나를 작성하고 main 함수를 통해 테스트해 보라
//* 함수의 반환값은 2개 이상이 될 수 없다. 
//* 따라서 본 문제에서 요구하는 곱한 결과와 더한 결과 2개를 전달하기 위해서는
//* 다른 방법을 모색해야 한다.
//* 아마도 참조 변수가 가장 적절한 선택이 되지 않을까 생각된다.
//*/
//
//void SumAndMul(int arr[], int len, int &sum, int &mul) {
//
//	for (int i = 0; i < len; i++) {
//		sum += arr[i];
//		mul *= arr[i];
//	}
//
//}
//
//int main() {
//
//	int arr[5] = { 1, 2, 3, 4, 5 };
//	int x = 5;
//	int sum = 0, mul = 1;
//	SumAndMul(arr, 5, sum, mul);
//	cout << "sum : " << sum << endl;
//	cout << "mul : " << mul << endl;
//
//}