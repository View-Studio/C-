/*
#include <iostream>

using namespace std;

constexpr int fac(int n) {
	return n > 1 ? n * fac(n - 1) : 1;
}

int main()
{
	unsigned int x = 2999999999;
	int y = 2999999999;
	cout << "x = " << x << " y = " << y << endl;

	int someInteger = 256;
	short someShort;
	long someLong;
	float someFloat;
	double someDouble;

	someInteger++; // 257
	someInteger *= 2; // 514
	someShort = static_cast<short>(someInteger); // 514
	someLong = someShort * 10000; // 5140000
	someFloat = someLong + 0.785f; // 5.14e+06 === 5140000
	someDouble = static_cast<double>(someFloat) / 100000; // 51.40000
	cout << someFloat << endl;

	int firstNum = 0;
	cout << "firstNum: ";
	cin >> firstNum;
	int secondNum = 0;
	cout << "secondNum: ";
	cin >> secondNum;
	cout << "sum: " << firstNum + secondNum << endl;

	const int a = 0;
	constexpr int b = fac(4); // 컴파일 단계에서 함수를 실행하고 값을 대입해 놓는다.
	int c = fac(4);
}
*/