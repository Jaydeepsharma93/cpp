#include<iostream>
using namespace std;

main()
{
	int h,m,s,s2;
	cout << "Enter the sec : ";
	cin >> s;
	h=s/3600;
    m=(s%3600)/60;
	s2=s%60;
	cout << h << ":" << m << ":" << s2;
}
