#include<iostream>
using namespace std;
//20407 ¹Ú±¤Çö
int factorial(int a)
{
    int num = 1;
    
    for (int i = 1; i <= a; ++i)
    {
        num = num * i;
    }
    return num;
}

int main(void)
{
    int a = 0;
    cin >> a;
    int result = 0;


    result = factorial(a);


    cout << "ÆÑÅä¸®¾ó " << a << " : " << result << endl;

    return 0;
}