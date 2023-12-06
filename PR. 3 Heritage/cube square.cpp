#include<iostream>
using namespace std;
class A{
	protected :
	int a,cube,square;
};
class Cube : public A{
	public:
	void setter(){
		cout << "Enter the any num : ";
		cin >> a;
	} 
	void getter(){
		cube = a*a*a ;
		cout << endl << "cube of " << a <<" is : " << cube << endl << endl;
	}
};
class Square : public A{
	public:
	void setter(){
		cout << "Enter the any num : ";
		cin >> a;
	} 
	void getter(){
		square = a*a ;
		cout << endl << "square of " << a <<" is : " << square << endl << endl;
	}
};
main()
{
    Cube c;
    Square s;
    c.setter();
    c.getter();
    s.setter();
    s.getter();
}