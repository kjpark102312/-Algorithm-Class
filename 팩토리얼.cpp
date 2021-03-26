#include <iostream>
using namespace std;

int Factorial(int a)
{
	if (a == 0)
	{
		return 1;
	}
	else
	{
		return(a * Factorial(a - 1));
	}
}

int main() {

	int a = 0;
	cin >> a;
	cout << Factorial(a);
	return 0;
}