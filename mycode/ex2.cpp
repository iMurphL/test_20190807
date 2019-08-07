#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double money, rate;
	const double hundred = 0.01;
	cout << "The principal value is: ";
	cin >> money;
	cout << "The annual interest rate is: ";
	cin >> rate;
	money *= (1+rate*hundred);
	cout << "The money after one year is: "<< fixed << setprecision(2) << money << endl;
        return 0;
}
