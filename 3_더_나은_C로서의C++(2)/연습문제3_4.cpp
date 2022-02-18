//#include<iostream>
//using namespace std;
//
//
//void updata(int  var1, int& var2) {
//	var1 += var1;
//	var2 += var2;
//}
//
//int main() {
//	int a = 1, b = 1;
//
//	for (int i = 0; i < 5; i++)
//		updata(a, b);
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//
//	return 0;
//	// 결과
//	// a == 1
//	// b == 1 + 1 + 2 + 4 + 8 + 16 = 32
//}