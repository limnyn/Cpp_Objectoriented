#include<iostream>
using namespace std;

int main() {
	int var1 = 2, var2 = 3;
	/*잘못된 부분
	int& ref1;
	int& ref2;
	
	ref1 = var1;
	ref2 = var2;*/

	//수정부분
	int& ref1 = var1;
	int& ref2 = var2;

	int var3 = ref1; //2
	ref1 = ref2;
	ref2 = var3;

	cout << "var1 : " << var1 << endl;
	cout << "var2 : " << var2 << endl;


}