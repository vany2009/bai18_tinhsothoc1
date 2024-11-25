#include<iostream>
using namespace std;
int main()
{
	cout << "TINH SO THOC TREN BAN CO VUA\n";
	int so0;
	double tongthoc = 0;
		cout << "nhap so o:"; cin >> so0;

	for (int i = 0; i < so0; i++)
	{
		cout << "o thu " << i + 1 << "co" << pow(2, i) << "thoc\n";
		tongthoc = tongthoc + pow(2, i);
	}
	cout << "tong so thoc la:" << tongthoc;
	return 0;
}



