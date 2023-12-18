#include<iostream>
using namespace std;

main()
{
	float num1;
	float num2;
	cout << "Enter the num1 : ";
	cin >> num1;
	cout << "Enter the num2 : ";
	cin >> num2;
	try {
		if(num2==0)
		    throw num2;
		else{
			float Divided=num1/num2;
			cout << endl << Divided ;
		}
	}
	catch(int num2) {
		cout << "Exception Caught " << endl; 
		cout << "Zero is not Divided" << endl;
	}
}