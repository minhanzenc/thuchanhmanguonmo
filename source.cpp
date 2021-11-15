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
bool chanLe(int a)
{
	if(a%2==0)
		return true;
	else
		return false;
}
int main()
{
	int a, b,c;
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
	if(chanLe(a)==true)
		cout<< a<< "Là số chẵn";
	else
		cout<< a<< "Là số lẻ";
	system("pause");
	return 0;
}