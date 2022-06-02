//#include <iostream>
//#include "employeestruct.h"
//
//using namespace std;
//
//enum PieceType1 {
//	PieceTypeKing = 1,
//	PieceTypeQueen,
//	PieceTypeRook = 10,
//	PieceTypePawn
//};
//
//enum class PieceType2 {
//	King = 1,
//	Queen,
//	Rook = 10,
//	Pawn
//};
//
//enum class PieceType3 : unsigned long {
//	King = 1,
//	Queen,
//	Rook = 10,
//	Pawn
//};
//
//int main()
//{
//	PieceType1 myPiece1 = PieceTypeKing;
//	int a = myPiece1;
//	PieceType2 myPiece2 = PieceType2::King;
//	//cout << myPiece2 << endl; // enum class는 출력스트림으로 출력을 못 한다.
//	// int b = myPiece; // enum class는 엄격한 타입관리를 한다.
//	Employee anEmployee;
//	anEmployee.firstInitial = 'M';
//	anEmployee.lastInitial = 'g';
//	anEmployee.employeeNumber = 42;
//	anEmployee.salary = 80000;
//	cout << "Employee: " << anEmployee.firstInitial << anEmployee.lastInitial << endl;
//	cout << "Number: " << anEmployee.employeeNumber << endl;
//	cout << "Salary: $" << anEmployee.salary << endl;
//
//	return 0;
//}