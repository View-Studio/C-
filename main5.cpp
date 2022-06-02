//#include <iostream>
//#include <bitset>
//
//using namespace std;
//
//int main()
//{
//	{
//		//int a = 10;
//		//int b = 0;
//		////b = a++;
//		////b = ++a;
//		////b = a--;
//		//b = --a;
//		//cout << "a= " << a << " b= " << b << endl;
//	}
//
//	{
//		//int a = 10;
//		//int b = -5;
//		//bool result = false;
//		//result = (a > b) ? true : false;
//		//result = (a == b) ? true : false;
//		//result = (a > 0 && b > 0) ? true : false;
//		//result = (a > 0 || b > 0) ? true : false;
//		//result = (a < 0 && --b > 0) ? true : false; // c++ 에서는 && 연산자를 사용할 때 앞의 식이 false면 뒤에는 실행을 안 하는 단락 기능을 제공한다. 그래서 비교연산자에서 증감연산자를 쓸 때는 단락 기능을 염두해 두고 써야한다.
//		//result = !(a > 0) ? true : false;
//		//cout << "result= " << boolalpha << result << noboolalpha << " b= " << b << endl; // boolalpha는 앞 뒤로 써도 되고 앞에만 써도 된다. noboolalpha는 boolalpha를 끊어주는 애다.
//	}
//
//	{
//		int num = 10;
//		cout << "2진법 표기: " << bitset<16>(num) << endl;
//		cout << "8진법 표기: " << oct << num << endl;
//		cout << "10진법 표기: " << dec << num << endl;
//		cout << "16진법 표기: " << hex << num << endl;
//
//		// 비트 단위에서 연산을 하는 연산자들
//		int x = 0x35;
//		int y = 0xf0;
//		cout << "x= " << bitset<8>(x) << endl;
//		cout << "y= " << bitset<8>(y) << endl;
//		cout << "x & y = " << bitset<8>(x & y) << endl; // 출력 값으로 나오는 0, 1 로 & 연산 수행
//		cout << "x | y = " << bitset<8>(x | y) << endl; // 출력 값으로 나오는 0, 1 로 | 연산 수행
//		cout << "x ^ y = " << bitset<8>(x ^ y) << endl; // 베타적 논리학 -> 두 수가 같은면 0, 다르면 1
//		cout << "~x = " << bitset<8>(~x) << endl;
//
//		int x1 = x << 2;
//		cout << "x= " << bitset<8>(x) << endl;
//		cout << "x1 = " << bitset<8>(x1) << endl; // 왼쪽에 나온 표현식의 비트 값을 오른 쪽에 나온 수만큼 왼쪽으로 이동한다.
//
//		char cX = 0b10010100; // 자료형의 비트를 넘어가는 비트들은 제일 앞에 넣은 비트가 복사가 된다.
//		cout << "cX = " << bitset<8>(cX) << endl;
//		cX = cX >> 2;
//		cout << "cX = " << bitset<8>(cX) << endl;
//	}
//
//	{
//		// 암묵적 형변환
//		int intVar = 7;
//		double doubleVar = 1.5;
//		float floatVar = 3.7f;
//
//		intVar = doubleVar;
//		floatVar = intVar;
//
//		// 자료형 우선 순위
//		// 낮음 < char < int < long < float < double < long double < 높음
//		intVar = doubleVar + intVar * floatVar;
//		//                         float
//		//       doubleVar + (intVar * floatVar);
//		//               double
//		//intVar = doubleVar + (intVar * floatVar);
//		//      int
//	}
//
//	{
//		//static_cast : 실행 중에 형 검사를 하지 않으며, 컴파일 할 때 수식에 지정된 그대로 변환함. 가볍다
//		//dynamic_cast : 기초 클래스와 파생 클래스 간의 포인터 또는 참조 형 변환이 프로그램 실행 중에 일어나도록 지시함. 무겁다.
//		//reinterpret_cast : 포인터를 다름 자료형의 포인터나 정수 자료형으로, 또는 그 역으로 변환함
//		//const_cast : const 지정을 일시 해제함
//
//		double d = 10.5;
//		int a = static_cast<int>(d);
//	}
//
//
//	return 0;
//}