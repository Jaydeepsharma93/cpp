#include<iostream>
using namespace std;

main()
{
  int num1 , num2 , num3 , multiplication;
  
  cout << "enter num1 : ";
  cin >> num1 ;
  cout << "enter num2 : ";
  cin >> num2 ;
  cout << "enter num3 : ";
  cin >> num3 ;
  multiplication = num1*num2*num3;
  
  cout << "multiplication of " << num1 << "*"<< num2 << "*" << num3 << " : " << multiplication;
}