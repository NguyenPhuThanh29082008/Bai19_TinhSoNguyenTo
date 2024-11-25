// Bai19_TinhSoNguyenTo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	cout << "Kiem tra so co phai la so nguyen to hay khong\n";
	int so;
	cout << "Nhap so: "; cin >> so;
	int dem = 0;


	for (int m = 1; m <= so; m++)
	{
		dem = 0;
		for (int i = 1; i <= so; i++)
		{
			if (m % i == 0)
			{
				dem++;
			}
		}
		if (dem == 2)
		{
			cout << m << " ";
		}

	}

	/*
	for (int i = 1; i <= so; i++)
	{
		if (so %i == 0)
		{
			dem++;
		}
	}
	cout << "So dem = " << dem << endl;
	if (dem == 2)
	{
		cout << "So " << so << " La so nguyen to\n";
	}
	else
	{
		cout << "So " << so << " Khong phai la so nguyen to\n";
	}
	*/

	return 0;
}
