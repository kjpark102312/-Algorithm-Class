#include <iostream>
using namespace std;

int main() {
	char Number[13]{ 0, };
	int old = 0;
	char birtharea;


	cout << "�ֹι�ȣ�� ������� �Է����ּ���~" << endl;
	cin >> Number;

	if (Number[6] / 2 == 0)
	{
		cout << "�����Դϴ�!" << endl;
	}
	else
	{
		cout << "�����Դϴ�!" << endl;
	}

	int year = (Number[0] - 48) * 10 + (Number[1]) - '0';
	year += Number[6] <= '2' ? 1900 : 2000;

	old = 2021 - year + 1;

	cout << year << "����Դϴ�" << endl;
	cout << old << "�� �Դϴ�" << endl;

	birtharea = (Number[7] - '0') * 10 + (Number[8] - '0');

	if (birtharea < 9)
	{
		cout << "����";
	}
	else if (birtharea < 13)
	{
		cout << "�λ�";
	}
	else if (birtharea < 16)
	{
		cout << "��õ";
	}
	else if (birtharea < 19)
	{
		cout << "��⵵ �ֿ� ����";
	}
	else if (birtharea < 26)
	{
		cout << "�� ���� ��⵵";
	}
	else if (birtharea < 35)
	{
		cout << "������";
	}
	else if (birtharea < 40)
	{
		cout << "��û�ϵ�";
	}
	else if (birtharea < 48)
	{
		cout << "��û����";
	}
	else if (birtharea < 55)
	{
		cout << "����ϵ�";
	}
	else if (birtharea < 67)
	{
		cout << "���󳲵�";
	}
	else if (birtharea < 91)
	{
		cout << "���";
	}
}