#include<iostream>
using namespace std;
#define WHILE_1


void main()
{
	setlocale(LC_ALL, "");
//	int temperature;

	//cout << "������� ����������� �������: "; cin >> temperature;
	//if (temperature > 0)
	//{
//		cout << "�� ����� �����";
	//}
	//else
	//{
		//cout << "�� ����� �������" << endl;
//}

#ifdef DEBUG
	int i = 0;//�������� �����
	int n;//���������� ��������
	cout << "������� ���������� ��������: "; cin >> n;

	while (++i < n)
	{
		cout << i << " Hello World" << endl;
		//i++;
	}
#endif // DEBUG

	
}