#include <iostream>
using namespace std;

int main() {
	//20407 �ڱ���
	char Number[13]{ 0, };
	int inspection = 0;

	cout << "�ֹι�ȣ�� �Է����ּ���" << endl;
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
		cout << " �� �ֹι�ȣ�� ��ȿ���� �ʴ� �ֹι�ȣ�Դϴ�.";
	}
	else
	{
		cout << " �� �ֹι�ȣ�� ��ȿ�� �ֹι�ȣ �Դϴ�.";
	}
}