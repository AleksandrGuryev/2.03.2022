
#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	// 19



/*
	// 18
	int n, counter;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		if (i % 2 != 0 && i % 3 != 0 && i % 5 != 0)
			counter++;
	}
	cout << counter << endl;
}


	// 17
	float n, sred = 0;
	for (int i = 0; i < 10; i++)
	{
		cin >> n;
		sred += n;
	}
	cout << sred / 10 << endl;
}

	// 16 
	float n, m, hour = 0;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		hour += 10;
	}
	cout << ((m * 60) + hour) / 60 << endl;
}


	//15
	float a, b, proizv = 1;
	cout << "Введите число: \n";
	cin >> a ;
	cout << "Введите число (число не может быть отрицательным, если первое введеное число дробное) : \n";
	cin >> b;
	for (int i = 0; i < b; i++)
	{
		proizv *= a;
	}
	cout << proizv << endl;
}


	// 14
	int a, proizv, sum = 0;
	cin >> a;
	for (int i = 1; i <= a; i++)
	{
		proizv = i * i;
		sum += proizv;
	}
	cout << sum << endl;
}


	// 13
	int sum = 0;
	for (int i = 100; i < 200; i++)
	{
		if (i % 17 == 0)
			sum += i;
	}
	cout << sum << endl;
}


	// 12
	int proizv = 1;
	for (int i = 10; i < 100; i++)
	{
		if (i % 2 != 0) {
			if (i % 13 == 0)
				proizv *= i;
		}
	}
	cout << proizv << endl;
}

	
	// 11
	for (int i = 10; i < 100; i++)
	{
		if (i % 4 == 0 && i % 6 != 0)
			cout << i << endl;
	}
}

	 
	// 6
	int sum = 0;

	for (int i = 1; i <= 50; i++)
	{
		if (i % 5 == 0 || i % 7 == 0)
			sum += i;
	}
	cout << sum << endl;
}




	//5
	for (int i = 35; i <= 87; i++)
	{
		if (i % 7 == 1 || i % 7 == 2 || i % 7 == 5)
			cout << i << endl;
	}
}

	// 4
	for (int i = 20; i < 50; i++)
	{
		if (i % 3 == 0){
			if (i % 5 != 0)
			cout << i << endl;
		}
	}
}


	// 3
	int a1, a2, a3, a4, a5, a6, a7, a8, a9, a10;
	cin >> a1 >> a2 >> a3 >> a4 >> a5 >> a6 >> a7 >> a8 >> a9 >> a10;
	if (a1 > a2 && a1 > a3 && a1 > a4 && a1 > a5 && a1 > a6 && a1 > a7 && a1 > a8 && a1 > a9 && a1 > a10)
		cout << a1 << endl;
	else if (a1 > a2 && a1 > a3 && a1 > a4 && a1 > a5 && a1 > a6 && a1 > a7 && a1 > a8 && a1 > a9 && a1 > a10)
		cout << a1 << endl;
	else if (a2 > a3 && a2 > a4 && a2 > a5 && a2 > a6 && a2 > a7 && a2 > a8 && a2 > a9 && a2 > a10)
		cout << a2 << endl;
	else if (a3 > a4 && a3 > a5 && a3 > a6 && a3 > a7 && a3 > a8 && a3 > a9 && a3 > a10)
		cout << a3 << endl;
	else if (a4 > a5 && a4 > a6 && a4 > a7 && a4 > a8 && a4 > a9 && a4 > a10)
		cout << a4 << endl;
	else if (a5 > a6 && a5 > a7 && a5 > a8 && a5 > a9 && a5 > a10)
		cout << a5 << endl;
	else if (a6 > a7 && a6 > a8 && a6 > a9 && a6 > a10)
		cout << a6 << endl;
	else if (a7 > a8 && a7 > a9 && a7 > a10)
		cout << a7 << endl;
	else if (a8 > a9 && a8 > a10)
		cout << a8 << endl;
	else if (a9 > a10)
		cout << a9 << endl;
	else
		cout << a10 << endl;
}


	// 1
	float  a1 = 2.1366, a2 = 2.5, a3 = 0.3048, a4 = 3.7325, a5 = 29.86, a6 = 0.40951, a7 = 0.7112, a8 = 4.2657, a9 = 25.3995;
	float n;
	cin >> n;
	cout << n * a1 << " метров \n" << n * a2 << " сантиметров \n" << n * a3 << " метров \n"
		<< n * a4 << " граммов \n" << n * a5 << " граммов \n" << n * a6 << " килограммов \n"
		<< n * a7 << " метров \n" << n * a8 << " граммов  \n" << n * a9 << " милиметров \n";
}


	// 2
	int contribution, year, summa, percent = 3;
	cin >> contribution >> year;
	cout << ((contribution / 100) * percent) * year  + contribution  << endl;
}

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

