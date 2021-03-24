#include <iostream>
using namespace std;

int main() {
	char Number[13]{ 0, };
	int old = 0;
	char birtharea;


	cout << "주민번호를 공백없이 입력해주세요~" << endl;
	cin >> Number;

	if (Number[6] / 2 == 0)
	{
		cout << "여자입니다!" << endl;
	}
	else
	{
		cout << "남자입니다!" << endl;
	}

	int year = (Number[0] - 48) * 10 + (Number[1]) - '0';
	year += Number[6] <= '2' ? 1900 : 2000;

	old = 2021 - year + 1;

	cout << year << "년생입니다" << endl;
	cout << old << "살 입니다" << endl;

	birtharea = (Number[7] - '0') * 10 + (Number[8] - '0');

	if (birtharea < 9)
	{
		cout << "서울";
	}
	else if (birtharea < 13)
	{
		cout << "부산";
	}
	else if (birtharea < 16)
	{
		cout << "인천";
	}
	else if (birtharea < 19)
	{
		cout << "경기도 주요 도시";
	}
	else if (birtharea < 26)
	{
		cout << "그 밖의 경기도";
	}
	else if (birtharea < 35)
	{
		cout << "강원도";
	}
	else if (birtharea < 40)
	{
		cout << "충청북도";
	}
	else if (birtharea < 48)
	{
		cout << "충청남도";
	}
	else if (birtharea < 55)
	{
		cout << "전라북도";
	}
	else if (birtharea < 67)
	{
		cout << "전라남도";
	}
	else if (birtharea < 91)
	{
		cout << "경상도";
	}
}