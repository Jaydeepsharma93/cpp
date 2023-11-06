#include<iostream>
using namespace std;
main()
{
    int feet, inches;

    cout << "Enter feet : ";
    cin >> feet;
    cout << "Enter inches : ";
    cin >> inches;

    cout << "feet = " << feet + inches / 12 << endl <<"Inches = " << inches % 12;
}
