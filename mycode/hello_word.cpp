//#include <iostream>
//
//using namespace std;
//int main()
//{
//	cout << "Hello, world!" << endl;
//}

#include <iostream>
#include <thread>

using namespace std;

void hello()
{
cout << "Hello, world!" << endl;
}
int main()
{
thread t1(hello);
t1.join();
}
