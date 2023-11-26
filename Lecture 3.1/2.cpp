#include<iostream>
#include<string.h>
using namespace std;

class CustomerRecord{
	private :
		int id,age,simcardvalidity;
		long long mobile_number;
		string name,city,telecom_brand_name;
	public :
		void settercustomerRecord(){
		  	cout << "Enter the customer id : ";
		  	cin >> id;
		  	cout << "Enter the customer mobile_number : ";
		  	cin >> mobile_number; 
		  	cout <<"Enter the customer name : ";
		  	cin.ignore();
		  	getline(cin,name);
		  	cout << "Enter the customer age : ";
		  	cin >> age ;
		  	cout << "Enter the cust_telecom_brand_name(like Jio, Airtel, Vi, etc.) : ";
		  	cin.ignore();
		  	getline(cin,telecom_brand_name);
			cout << "Enter the simcard_validity(in years) : ";
			cin >> simcardvalidity;
		  	cout << "Enter the city :";
		  	cin.ignore();
		  	getline(cin,city);
		}
		void gettercustomerRecord(){
			cout << endl << "id : " << id << endl << "customer name : " << name << endl;
			cout << "age : " << age << "\tcity : " << city << endl << "mobile number : " << mobile_number << endl;
			cout << "telecom brand name : " << telecom_brand_name << "\tsimcard validity : " << simcardvalidity;
		}
};
main()
{
	CustomerRecord c1;
	for(int i=0; i<5; i++)
	    c1.settercustomerRecord();
	for(int i=0; i<5; i++)
	    c1.gettercustomerRecord();
}