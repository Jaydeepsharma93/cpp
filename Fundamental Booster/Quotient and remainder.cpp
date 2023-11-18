#include<iostream>
using namespace std;

main()
{
  int num1 , num2 , Quotient , remainder ;
  
  cout << "enter Dividend : ";
  cin >> num1 ;
  cout << "enter Divisor : ";
  cin >> num2 ;
  
  Quotient =  num1/num2;
  remainder = num1%num2;
  
  cout << "Quotient=" << Quotient << endl << "remainder=" << remainder ;
}