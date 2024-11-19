#include <iostream>
#include <cmath>

using namespace std;	

int main()
{
	double S;
	double R2;
	double pi = 3.14159;
	cout << "Enter the value of R2: ";	
	cin >> R2;	
	S = pi * R2;
	cout << "The area of the circle is: " << S << endl;
	double L;
	L = 2 * pi * R2;
	cout << "The length of the circle is: " << L << endl;	
		

	return 0;
}	