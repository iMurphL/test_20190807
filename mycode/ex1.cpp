#include <iostream>

using namespace std;

int main()
{
	int a, sum=0;
	for(int i=1; i<11; i++ )
	{
		cout << "Please input " << i << "th number" << endl;
		cin >> a;
		sum +=a;
	}
	cout << "The sum of the numbers equals to: " << sum << endl;
	return 0;
}
