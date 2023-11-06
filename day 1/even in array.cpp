#include<iostream>
using namespace std;

main()
{
	int n,i;
	cout << "enter the size of array : ";
	cin >> n ;
	int ar[n];
	
	for(i=0; i<n; i++)
	{
		cout << "a[" <<i << "] :";
		cin >> ar[i];
	}
	cout << "even num of array : ";
	for(i=0; i<n; i++)
	{
		if(ar[i]%2==0)
		    cout << ar[i] << "  ";

	}
}

