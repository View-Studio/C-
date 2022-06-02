#include <iostream>

using namespace std;

int main()
{
	/*int score = { 0 };
	cin >> score;*/

	/*if (score >= 90)
	{
		cout << "A" << endl;
	}
	else if (score < 90 && score >= 80)
	{
		cout << "B" << endl;
	}
	else if (score < 80 && score >= 70)
	{
		cout << "C" << endl;
	}
	else if (score < 70 && score >= 60)
	{
		cout << "D" << endl;
	}
	else if (score < 60 && score >= 50)
	{
		cout << "E" << endl;
	}
	else if (score < 50 && score >= 40)
	{
		cout << "F" << endl;
	}*/

	//score /= 10;

	//switch (score)
	//{
	//case 10:
	//	__fallthrough // 이렇게 break문도 없이 다음 case문으로 넘겨버리는 걸 faltThrough 라고 한다. 하지만 이렇게 하면 에러가 날 수 있기 때문에 fallThrough를 썼다고 명시해 줘야 한다.
	//case 9:
	//	cout << "A" << endl;
	//	break;
	//case 8:
	//	cout << "B" << endl;
	//	break;
	//case 7:
	//	cout << "C" << endl;
	//	break;
	//case 6:
	//	cout << "D" << endl;
	//	break;
	//case 5:
	//	cout << "E" << endl;
	//	break;
	//default:
	//	cout << "F" << endl;
	//	break;
	//}

	/*int a, b = { 0 };
	cout << "A is ? ";
	cin >> a;
	cout << "B is ? ";
	cin >> b;
	
	switch (a - b > 0)
	{
	case true:
		cout << "true" << endl;
		break;
	case false:
		cout << "false" << endl;
		break;
	default:
		break;
	}*/


	//int a, b, c = { 0 };
	//cout << "A is ? ";
	//cin >> a;
	//cout << "B is ? ";
	//cin >> b;
	//cout << "C is ? ";
	//cin >> c;

	//switch (a+b > c)
	//{
	//case true:
	//	cout << a + b << endl;
	//	break;
	//case false:
	//	cout << c << endl;
	//	break;
	//}

	//int colorCode = 0;
	//cout << "색상 코드 입력 : ";
	//cin >> colorCode;

	//switch (colorCode)
	//{
	//case 1:
	//	cout << "Red" << endl;
	//	break;
	//case 2:
	//	cout << "Blue" << endl;
	//	break;
	//case 3:
	//	cout << "Black" << endl;
	//	break;
	//case 4:
	//	cout << "White" << endl;
	//	break;
	//}
    int personNum = { 0 };
	cout << "주민번호 뒷 자리 : ";
	cin >> personNum;

	personNum /= 1000000; // int 형 이니까 실수의 소수점 날라감

	switch (personNum)
	{
	case 1:
		__fallthrough;
	case 3:
		cout << "남자" << endl;
		break;
	case 2:
		__fallthrough;
	case 4:
		cout << "여자" << endl;
		break;
	default:
		cout << "외계인" << endl;
		break;
	}

}