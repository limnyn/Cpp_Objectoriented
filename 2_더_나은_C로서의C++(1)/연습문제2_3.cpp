#include<iostream>
using namespace std;

/*
* "ns.h" 파일을 만들고 MyNS라는 네임스페이스를 만들어 보라.
* MyNS 네임스페이스에는 2개의 int 값 중 최대값을 반환하는 MyMax라는 함수와 최소값을 반환하는 MyMin이라는 함수를 추가하라.
* 단 함수 프로토타입만 추가해야 한다. 그리고 ns.cpp 파일에는 이 두 함수의 정의 부분을 추가하도록 하라.
* main.cpp의 main 함수에서는 MyNS의 MyMax, MyMin 함수룰 사용해보도록 하라.
* 이 연습문제에서는 네임스페이스도 해더 파일과 소스 파일로 나누어 구현될 수 있음을 보여주고 있다.
*/

ns.h{

				#include <iostream>
			using namespace std;

			namespace MyNS {
				int MyMax(int, int);
				int MyMin(int, int);
			}
}

ns.cpp{
			#include"ns.h"

		int MyNS::MyMax(int x, int y)
		{
			if (x > y)
				return x;
			else if (x < y)
				return y;
			else
				cout << "x == y" << endl;
		}
		int MyNS::MyMin(int x, int y)
		{
			if (x < y)
				return x;
			else if (x > y)
				return y;
			else
				cout << "x == y" << endl;
		}
}

main.cpp{
			#include "ns.h"

		int main() {
			int x, y;
			cin >> x >> y;
			cout << "최대값 : " << MyNS::MyMax(x, y) << endl;
			cout << "최소값 : " << MyNS::MyMin(x, y) << endl;
			return 0;
		}
}