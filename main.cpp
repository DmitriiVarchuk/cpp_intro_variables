#include	<iostream>
#include <cmath>

using namespace std;

int main()
{
	double R0;
	double R1,R2,R3;
	cout << "Enter the value of R1: ";
	cin >> R1;
	cout << "Enter the value of R2: ";
	cin >> R2;
	cout << "Enter the value of R3: ";
	cin >> R3;
	R0 = 1 / ((1 / R1) + (1 / R2) + (1 / R3));
	cout << "The equivalent resistance is: " << R0 << endl;
	cout <<  "R1 = " << R1  << ", R2 = " <<  R2 << ", R3 = " << R3 << ", R0 = " << R0 << endl;


	return 0;
}

