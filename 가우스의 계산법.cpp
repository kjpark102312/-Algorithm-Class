#include <iostream>
using namespace std;

//20407 ¹Ú±¤Çö
int Gauss(int a)
{
	if (a == 1)
	{
		return 1;
	}
	else
	{
		return(Gauss(a - 1) + a);
	}

}

int main()
{
	int a = 0;
	cin >> a;
	cout << Gauss(a);


}