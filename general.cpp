// Area of cube = A=6*a*a
#include <iostream>

using namespace std;

CubeArea(int a)
{
	cout << "Area of cube is\n" << 6*a*a;
}

int main()
{
	int a;
	cout << "Please enter the edge of cube\n";
	cin >> a;
	CubeArea(a);
}
