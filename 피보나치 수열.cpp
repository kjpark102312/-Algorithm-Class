#include<iostream>
using namespace std;
//20407 ¹Ú±¤Çö

int Fibo(int a)
{
	if (a == 1 || a == 2)
		return 1;
	else
		return Fibo(a - 1) + Fibo(a - 2);
}

int main()
{

	for (int i = 1; i <= 15; i++)
		cout << Fibo(i) << endl;