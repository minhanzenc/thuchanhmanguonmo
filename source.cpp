#include <iostream>
using namespace std;


int hieu(int a, int b)
{
	return a-b;
}

int tong(int a, int b)
{
	return a+b;
}


int main()
{
	int a, b;
	char phepToan;
	cout << "Nhap so nguyen 1: ";
	cin >> a;
	cout << "Nhap so nguyen 2: ";
	cin >> b;
	cout << "Chon phep toan (+,-) ";
	cin >> phepToan;

	if(phepToan=="-")
	{
		cout << "Hieu la:"<<hieu(a,b);

	if(phepToan=="+")
	{
		cout<<"Tong la:"<<tong(a,b);

	}
	system("pause");
	return 0;
}
//Cau 19: