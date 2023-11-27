#include<iostream>
using namespace std;

main()
{
	int a,b;
	cout << "Enter the value a : ";
	cin >> a;
	cout << "Enter the value b : ";
	cin >> b;
	cout << endl << "a=" << a << "\tb=" << b << endl << endl;
	a=a+b;
	b=a-b;
	a=a-b;
	cout << "after swap" << endl << "a=" << a << "\tb=" << b;
}
