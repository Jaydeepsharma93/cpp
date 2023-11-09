#include<iostream>
using namespace std;

class Hsm{
	public:
	int h,m,s,s2;
	
	void input(){
		cout << "Enter the sec : ";
		cin >> s;
	}
	void op(){
		h=s/3600;
		m=(s%3600)/60;
		s2=s%60;
	}
	void output(){
		cout << h << ":" << m << ":" << s2;
	}
	
};

main()
{
	Hsm hms=Hsm();
	
	hms.input();
	hms.op();
	hms.output();
	
}
