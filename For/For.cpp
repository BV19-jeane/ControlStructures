#include<iostream>
//#include<>
using namespace std;
//#define FOR_SYNTAX;
//#define FACTORIAL
//#define POWER
//#define ASCII
//#define FIBONACCI_1
//#define SYMPLEX_NUMBERS
//#define MULTUPLEX_NUMBERS
//#define TRIANGL_1

# define ROMB_3



void main()
{
	setlocale(LC_ALL, "");



#ifdef FOR_SYNTAX
	int i = 0; //счетчик цикла
	int n;     //количество итераций
	cout << "¬ведите количество операций: "; cin >> n;
	for (
		int i = 0;
		i < n;
		i++)
	{
		cout << i << "\t";
	}
	cout << endl;
#endif // FOR_SYNTAX

#ifdef  FACTORIAL
	int n;
	cout << "¬ведите число: "; cin >> n;
	int f = 1;
	for (int i = 1; i <= n; i++)
	{
		cout << i << "! = ";
		f *= i;
		cout << f << "\n";
	}
	cout << "¬ведите число";

#endif //  FACTORIAL

#ifdef POWER
	int a; //
	int n;
	int N = 1; // степень
	cout << "¬ведите основание степени:"; cin >> a;
	cout << "¬ведите показатель степени:"; cin >> n;
	if (n < 0)
	{
		a = 1 / a;
		n = -n;
	}
	for (int i = 0; i < n; i++)
	{
		N *= a;
	}
	cout << N << endl;

	

#endif // POWER

#ifdef ASCII
	for (int i = 0; i < 256; i++)
	{
		if (i % 16 == 0)cout << endl;
		cout << (char)i << "";
	}
#endif // ASCII
#ifdef FIBONACCI_1
	int n;
	cout << "¬ведите предельное число:"; cin >> n;
	for (int a = 0, b = 1, c = a + b; a < n; a = b, b = c, c = a + b)
	{
		cout << a << "\t";			
	}
	cout << endl;

#endif // FIBONACCI_1

#ifdef SYMPLEX_NUMBERS
	int n;
	cout << "¬ведите предельное число: "; cin >> n;
	int simplex_counter = 0;
	for (int i = 0; i <= n; i++)
	{
		bool simple = true;// предположим, что число простое, но это нужно проверить
		for (int j = 2; j < i; j++)
		{
			if (i%j == 0)
			{
				simple = false;
				break;
			}
		}
		//if(simple)cout << i << "\t";
		if (simple)simplex_counter++;
	}
	time_t end = clok();
	cout << endl;
	cout << "Amount of simplex numbers: " << simplex_counter << endl;
#endif

#ifdef MULTUPLEX_NUMBERS
	for (int i = 0; i <= 10; i++)
	{
		cout << "“аблица умножени€ на " << i << ":\n";
		for (int j = 1; j <= 10; j++)
		{
			if (i < 10) cout << " ";
			cout << i << " *";
			//if (i = 10) cout << " ";
			if (j < 10) cout << " ";
			cout << j << " =";
			if (i*j < 100) cout << " ";
			if (i*j < 10) cout << " ";
			cout << i * j << endl;
		}
	}

#endif

#ifdef TRIANGL_1
	int n;
	cout << "¬ведите число: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++) cout << "  ";
		for (int j = i; j < n; j++) cout << "* ";
		
		cout << endl;
	}
#endif

//#ifdef ROMB
	///*int n;
	//cout << "¬ведите число: "; cin >> n;
	//for (int i = 0; i < n; i++)
	//{
	//	for (int j = i; j < n; j++) cout << " ";
	//	for (int j = i; j < n; j++) cout << "* ";

	//	cout << endl;
	//}*/

//#endif

#ifdef ROMB_3
	int n;
	cout << "¬ведите число: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			//if (i % 2 == j%2) cout << "+ "; else cout << "- ";
			//(i % 2 == j % 2) ? cout << "+ " : cout << "- ";
			//i % 2 == j % 2 ? cout << "+ " : cout << "- ";
			cout << (i % 2 == j % 2 ? "+ " : "- ");
		}
		cout << endl;
	}

#endif



	
}