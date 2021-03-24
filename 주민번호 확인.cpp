#include <iostream>
using namespace std;

int main() {
	//20407 박광현
	char Number[13]{ 0, };
	int inspection = 0;

	cout << "주민번호를 입력해주세요" << endl;
	cin >> Number;

	for (int i = 0; i < 10; i++)
	{
		inspection += Number[i] * (i + 2);
	}
	for (int i = 0; i < 6; i++)
	{
		inspection += Number[i] * (i + 1);
	}

	inspection = (11 - (inspection) % 11) % 10;
	if (inspection == Number[12])
	{
		cout << " 이 주민번호는 유효하지 않는 주민번호입니다.";
	}
	else
	{
		cout << " 이 주민번호는 유효한 주민번호 입니다.";
	}
}