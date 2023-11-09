#include<iostream>
using namespace std;

class FeetInches{
	public:
	int feet, inches,feet2, inches2;
	void feetinchesinput1(){
		cout << "input 1" << endl;
		cout << "Enter feet : ";
        cin >> feet;
        cout << "Enter inches : ";
        cin >> inches;
	}
	void feetinchesinput2(){
		cout << endl << "input 2" << endl;
		cout << "Enter feet : ";
        cin >> feet2;
        cout << "Enter inches : ";
        cin >> inches2;
    }
	void inputadd(){
    	feet+=feet2;
    	inches+=inches2;
    }
	void output(){
		cout << endl << "output" << endl;
		cout << "feet = " << feet + inches / 12 << endl <<"Inches = " << inches % 12;
	}
};
main()
{
   FeetInches fi=FeetInches();
   
   fi.feetinchesinput1();
   fi.feetinchesinput2();
   fi.inputadd();
   fi.output();
}

