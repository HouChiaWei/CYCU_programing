#include <iostream>
#include <iomanip>
using namespace std;

#define pi 3.14159

int main()
{
	float a,b;
	cin >> a >> b;
	cout << fixed << setprecision(2) << (a+a)*pi*b + 2*a*a*pi << endl;

	return 0;
}
