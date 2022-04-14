#include <iostream>
using namespace std;
void main()
{
	float a1, a2, a3, a4, a5, a6, a7, a8, a9, b1, b2, b3, b4, b5, b6, b7, b8, b9, detA, detB, A1, A2, A3, A4, A5, A6, A7, A8, A9, B1, B2, B3, B4, B5, B6, B7, B8, B9;
	string again1, again2;
	int line1 = 0, line2 = 0;
	do {
		cout << "Enter the Matrix A = [a1 a2 a3 ; a4 a5 a6 ; a7 a8 a9]" << "\n" << "*Note* a1 a2 a3 is the first row and notice that write every number in one line then press Enter" << endl;
		cout << "a1 = "; cin >> a1;
		cout << "a2 = "; cin >> a2;
		cout << "a3 = "; cin >> a3;
		cout << "a4 = "; cin >> a4;
		cout << "a5 = "; cin >> a5;
		cout << "a6 = "; cin >> a6;
		cout << "a7 = "; cin >> a7;
		cout << "a8 = "; cin >> a8;
		cout << "a9 = "; cin >> a9;
		cout << "Matrix A = [ " << a1 << " " << a2 << " " << a3 << " ; " << a4 << " " << a5 << " " << a6 << " ; " << a7 << " " << a8 << " " << a9 << " ]" << endl;
		cout << "Enter the Matrix B = [b1 b2 b3 ; b4 b5 b6 ; b7 b8 b9]" << "\n" << "*Note* b1 b2 b3 is the first row and notice that write every number in one line then press Enter" << endl;
		cout << "b1 = "; cin >> b1;
		cout << "b2 = "; cin >> b2;
		cout << "b3 = "; cin >> b3;
		cout << "b4 = "; cin >> b4;
		cout << "b5 = "; cin >> b5;
		cout << "b6 = "; cin >> b6;
		cout << "b7 = "; cin >> b7;
		cout << "b8 = "; cin >> b8;
		cout << "b9 = "; cin >> b9;
		cout << "Matrix B = [ " << b1 << " " << b2 << " " << b3 << " ; " << b4 << " " << b5 << " " << b6 << " ; " << b7 << " " << b8 << " " << b9 << " ]" << endl;
		detA = a1 * a5 * a9 + a2 * a6 * a7 + a3 * a4 * a8 - a3 * a5 * a7 - a1 * a6 * a8 - a2 * a4 * a9;
		detB = b1 * b5 * b9 + b2 * b6 * b7 + b3 * b4 * b8 - b3 * b5 * b7 - b1 * b6 * b8 - b2 * b4 * b9;
		A1 = (1 / detA) * (a5 * a9 - a8 * a6);
		A4 = -(1 / detA) * (a4 * a9 - a7 * a6);
		A7 = (1 / detA) * (a4 * a8 - a7 * a5);
		A2 = -(1 / detA) * (a2 * a9 - a8 * a3);
		A5 = (1 / detA) * (a1 * a9 - a7 * a3);
		A8 = -(1 / detA) * (a1 * a8 - a7 * a2);
		A3 = (1 / detA) * (a2 * a6 - a5 * a3);
		A6 = -(1 / detA) * (a1 * a6 - a3 * a4);
		A9 = (1 / detA) * (a1 * a5 - a2 * a4);
		B1 = (1 / detB) * (b5 * b9 - b8 * b6);
		B4 = -(1 / detB) * (b4 * b9 - b7 * b6);
		B7 = (1 / detB) * (b4 * b8 - b7 * b5);
		B2 = -(1 / detB) * (b2 * b9 - b8 * b3);
		B5 = (1 / detB) * (b1 * b9 - b7 * b3);
		B8 = -(1 / detB) * (b1 * b8 - b7 * b2);
		B3 = (1 / detB) * (b2 * b6 - b5 * b3);
		B6 = -(1 / detB) * (b1 * b6 - b3 * b4);
		B9 = (1 / detB) * (b1 * b5 - b2 * b4);
		do {
			cout << "What operation do you want ?" << "\n" << "*Note* wirte your operation like this ONLY(Mat.A , Mat.B , detA , detB , A+B , A-B , B-A , A*B , B*A , trn.A , trn.B , A^-1 , B^-1 , A/B , B/A)" << endl;
			string operation;
			cin >> operation;
			while (operation != "detA" && operation != "detB" && operation != "A+B" && operation != "A-B" && operation != "A*B" && operation != "B*A" && operation != "trn.A" && operation != "trn.B" && operation != "A/B" && operation != "B/A" && operation != "Mat.B" && operation != "Mat.A" && operation != "B-A" && operation != "A^-1" && operation != "B^-1")
			{
				cout << "*wirte your operation like this ONLY(Mat.A , Mat.B , detA , detB , A+B , A-B , B-A , A*B , B*A , trn.A , trn.B , A^-1 , B^-1 , A/B , B/A)*" << endl;
				cin >> operation;
			}
			if (operation == "detA")
			{
				cout << "det A = " << detA << endl;
			}
			else if (operation == "detB")
			{
				cout << "det B = " << detB << endl;
			}
			else if (operation == "trn.A")
			{
				cout << "trn.A = [ " << a1 << " " << a4 << " " << a7 << " ; " << a2 << " " << a5 << " " << a8 << " ; " << a3 << " " << a6 << " " << a9 << " ]" << endl;
			}
			else if (operation == "trn.B")
			{
				cout << "trn.B = [ " << b1 << " " << b4 << " " << b7 << " ; " << b2 << " " << b5 << " " << b8 << " ; " << b3 << " " << b6 << " " << b9 << " ]" << endl;
			}
			else if (operation == "Mat.A")
			{
				cout << "Matrix A = [ " << a1 << " " << a2 << " " << a3 << " ; " << a4 << " " << a5 << " " << a6 << " ; " << a7 << " " << a8 << " " << a9 << " ]" << endl;
			}
			else if (operation == "Mat.B")
			{
				cout << "Matrix B = [ " << b1 << " " << b2 << " " << b3 << " ; " << b4 << " " << b5 << " " << b6 << " ; " << b7 << " " << b8 << " " << b9 << " ]" << endl;
			}
			else if (operation == "A+B")
			{
				cout << "A + B = [ " << a1 + b1 << " " << a2 + b2 << " " << a3 + b3 << " ; " << a4 + b4 << " " << a5 + b5 << " " << a6 + b6 << " ; " << a7 + b7 << " " << a8 + b8 << " " << a9 + b9 << " ]" << endl;
			}
			else if (operation == "A-B")
			{
				cout << "A - B = [ " << a1 - b1 << " " << a2 - b2 << " " << a3 - b3 << " ; " << a4 - b4 << " " << a5 - b5 << " " << a6 - b6 << " ; " << a7 - b7 << " " << a8 - b8 << " " << a9 - b9 << " ]" << endl;
			}
			else if (operation == "B-A")
			{
				cout << "B - A = [ " << b1 - a1 << " " << b2 - a2 << " " << b3 - a3 << " ; " << b4 - a4 << " " << b5 - a5 << " " << b6 - a6 << " ; " << b7 - a7 << " " << b8 - a8 << " " << b9 - a9 << " ]" << endl;
			}
			else if (operation == "A*B")
			{
				cout << "A * B = [ " << a1 * b1 + a2 * b4 + a3 * b7 << " " << a1 * b2 + a2 * b5 + a3 * b8 << " " << a1 * b3 + a2 * b6 + a3 * b9 << " ; " << a4 * b1 + a5 * b4 + a6 * b7 << " " << a4 * b2 + a5 * b5 + a6 * b8 << " " << a4 * b3 + a5 * b6 + a6 * b9 << " ; " << a7 * b1 + a8 * b4 + a9 * b7 << " " << a7 * b2 + a8 * b5 + a9 * b8 << " " << a7 * b3 + a8 * b6 + a9 * b9 << " ]" << endl;
			}
			else if (operation == "B*A")
			{
				cout << "B * A = [ " << b1 * a1 + b2 * a4 + b3 * a7 << " " << b1 * a2 + b2 * a5 + b3 * a8 << " " << b1 * a3 + b2 * a6 + b3 * a9 << " ; " << b4 * a1 + b5 * a4 + b6 * a7 << " " << b4 * a2 + b5 * a5 + b6 * a8 << " " << b4 * a3 + b5 * a6 + b6 * a9 << " ; " << b7 * a1 + b8 * a4 + b9 * a7 << " " << b7 * a2 + b8 * a5 + b9 * a8 << " " << b7 * a3 + b8 * a6 + b9 * a9 << " ]" << endl;
			}
			else if (operation == "A^-1")
			{
				cout << "A^-1 = [ " << A1 << " " << A2 << " " << A3 << " ; " << A4 << " " << A5 << " " << A6 << " ; " << A7 << " " << A8 << " " << A9 << " ]" << endl;
			}
			else if (operation == "B^-1")
			{
				cout << "B^-1 = [ " << B1 << " " << B2 << " " << B3 << " ; " << B4 << " " << B5 << " " << B6 << " ; " << B7 << " " << B8 << " " << B9 << " ]" << endl;
			}
			else if (operation == "A/B" && detB != 0)
			{
				cout << "A / B = [ " << a1 * B1 + a2 * B4 + a3 * B7 << " " << a1 * B2 + a2 * B5 + a3 * B8 << " " << a1 * B3 + a2 * B6 + a3 * B9 << " ; " << a4 * B1 + a5 * B4 + a6 * B7 << " " << a4 * B2 + a5 * B5 + a6 * B8 << " " << a4 * B3 + a5 * B6 + a6 * B9 << " ; " << a7 * B1 + a8 * B4 + a9 * B7 << " " << a7 * B2 + a8 * B5 + a9 * B8 << " " << a7 * B3 + a8 * B6 + a9 * B9 << " ]" << endl;
			}
			else if (operation == "B/A" && detA != 0)
			{
				cout << "B / A = [ " << b1 * A1 + b2 * A4 + b3 * A7 << " " << b1 * A2 + b2 * A5 + b3 * A8 << " " << b1 * A3 + b2 * A6 + b3 * A9 << " ; " << b4 * A1 + b5 * A4 + b6 * A7 << " " << b4 * A2 + b5 * A5 + b6 * A8 << " " << b4 * A3 + b5 * A6 + b6 * A9 << " ; " << b7 * A1 + b8 * A4 + b9 * A7 << " " << b7 * A2 + b8 * A5 + b9 * A8 << " " << b7 * A3 + b8 * A6 + b9 * A9 << " ]" << endl;
			}
			else if (operation == "A/B" && detB == 0)
			{
				cout << "Math Error" << endl;
			}
			else if (operation == "B/A" && detA == 0)
			{
				cout << "Math Error" << endl;
			}
			cout << "do you want to do another operation? {yes (Y) or no (N)}: ";
			cin >> again1;
			while (again1 != "n" && again1 != "N" && again1 != "y" && again1 != "Y")
			{
				cout << "please write (Y) or (N): ";
				cin >> again1;
			}
			cout << "\n";
		} while (again1 == "y" || again1 == "Y");
		cout << "do you want to enter another Matrices ? {yes (Y) or no (N)}: ";
		cin >> again2;
		while (again2 != "n" && again2 != "N" && again2 != "y" && again2 != "Y")
		{
			cout << "please write (Y) or (N): ";
			cin >> again2;
		}
		cout << "\n";
	} while (again2 == "y" || again2 == "Y");
	while (line1 <= 41)
	{
		cout << ".";
		line1 = line1 + 1;
	}
	cout << "\n";
	cout << "Thanks for use this application,see you later." << "\n";
	while (line2 <= 41)
	{
		cout << ".";
		line2 = line2 + 1;
	}
	cout << "\n";
	system("pause");
}