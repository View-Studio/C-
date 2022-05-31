/*
#include <iostream> // c++ 표준 라이브러리 이기 때문에 <> 사용.
// 전처리 단계에서 처리되는 코드들의 앞에는 #을 붙인다.

int main() //main 함수는 프로그램의 시작점.
{
	int value1; // 그냥 int만 적으면 타입이 기본형인 signed int로 사용된다.
	signed int value2; // 음수, 양수 둘 다 표현 가능
	unsigned int value3; // 양수만 표현 가능
	char c1; // 문자열 하나만 할당 가능

	// 초기화 방법
	int a1 = 0;
	int a2(0);
	int a3 = { 0 };
	int a4{ 0 };
	c1 = 'A'; // char 타입 할당은 무조건 작은 따옴표로.
	c1 = '\101'; // 유니코드 10진법 표기
	c1 = '\x41'; // 유니코드 16진법 표기

	//진법
	value1 = 0b1001011; // 2진법 표기법
	value2 = 0123; // 8진법 표기법
	value3 = 0x412FBA; // 16진법 표기법

	std::cin >> value1;

	std::cout << "Hello, World" << std::endl; //std는 라이브러리, 그래서 std 라이브러리에서 cout, cerr, endl 을 가져다 쓰는거임.
	std::cout << "There are " << value1 << " ways\nI love you" << std::endl;
	std::cout << "A\nBC\nDEF\nGH" << std::endl;


	return 0;
}
// cpp의 위에 있는 전처리 지시자에 따라 전처리를 한다 -> 전처리된 cpp파일을 컴파일러가 컴파일 -> cpp파일 마다 obj파일이 생김 -> 그 obj파일을 링커가 링킹 -> exe파일 탄생
*/