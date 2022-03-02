
#include <iostream>
#include<Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int n, negative = 0, positive = 0, zero = 0;
	cin >> n;
	for (int i = 0; i < 10; i++)
	{
		if (n < 0)
			negative++;
		else if (n > 0)
			positive++;
		else
			zero++;
		cin >> n;
	} 
	cout << negative << " кол-во отрицательных значений \n"
		<< positive << " кол-во положительных значений \n"
		<< zero << " кол-во нулевых значений \n";
}



/*
	int num, sum = 1;
	cin >> num;
	for (int i = 1; i <= num; i++) {
		sum  *= i;
	}
	cout << sum << endl;
}

	int num, sum = 0;
	cin >> num;
	for (size_t i = 1; i <= num; i++)
	{
		sum += i;
	}
	cout << sum;
}

	
	int c, a = 10;
	int b = 20;
	for (int i = a; i <= b; i++) {
		c = i * i;
		cout << c << endl;
	}
}
*/

