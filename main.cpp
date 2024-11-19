#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double S;
	double v;
	double t;
	double a;	
	cout << "Enter the speed: ";	
	cin >> v;	
	cout << "Enter the time: ";	
	cin >> t;	
	cout << "Enter the acceleration: ";
	cin >> a;
	S = v * t + (a * pow(t, 2)) / 2;	
	cout << "The distance is: " << S << endl;

	return 0;
}

