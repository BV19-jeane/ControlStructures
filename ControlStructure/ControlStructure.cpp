#include<iostream>
using namespace std;
#define WHILE_1


void main()
{
	setlocale(LC_ALL, "");
//	int temperature;

	//cout << "Введите температуру воздуха: "; cin >> temperature;
	//if (temperature > 0)
	//{
//		cout << "На улице тепло";
	//}
	//else
	//{
		//cout << "На улице холодно" << endl;
//}

#ifdef DEBUG
	int i = 0;//смчетчик цикла
	int n;//количество итераций
	cout << "Введите количество итераций: "; cin >> n;

	while (++i < n)
	{
		cout << i << " Hello World" << endl;
		//i++;
	}
#endif // DEBUG

	
}