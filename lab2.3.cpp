#include<iostream>

using namespace std;

double PowerN(double a, int n)
{
	if (n == 0) return 1;
	else return pow(a, n);
}

int main()
{
	for (int i = 0; i < 5; i++)
	{
		double a;
		int n;
		cout << "a ";
		cin >> a;
		cout << "n ";
		cin >> n;
		cout << PowerN(a, n) << endl;
	}

	system("pause");
	return 0;
}


