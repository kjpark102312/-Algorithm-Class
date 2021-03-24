#include <iostream>
using namespace std;


//20407 박광현


void reverseWord(char a[])
{
	int i = 0;
	int length = 0;

	

	while (a[length] != 0) {

		length++;
	}
	for (i = length - 1; i >= 0; i--)
	{
		cout << a[i];
	}
	cout << endl;
	
}

int main()
{
	cout << "문자열 거꾸로 표현하기" << endl;
	cout << "------단어를 입력해주세요------" << endl;


	char word[3][10] = { 0, };

	for (int i = 0; i < 3 ; i++)
	{
		cin >> word[i];
	}
	reverseWord(word[0]);
	reverseWord(word[1]);
	reverseWord(word[2]);
}



