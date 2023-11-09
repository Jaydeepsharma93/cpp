#include<iostream>
#include<string.h>
using namespace std;

class Cars{
public:
	int car_id,car_release_year;
    string car_company_name,car_color,car_model;
};
main()
{
	Cars c[3];
	int i;
	for(i=0; i<3; i++){
	    cout << "Enter your car id : ";
	    cin >> c[i].car_id;
		cout << "Enter your car release year : ";
		cin >> c[i].car_release_year;
		cout << "Enter your car model : ";
        cin.ignore();
        getline(cin, c[i].car_model);
		cout << "Enter your car color : ";
		cin.ignore();
		getline(cin, c[i].car_color);
		cout << "Enter your car company name : ";
		cin.ignore();
		getline(cin, c[i].car_company_name);
	}
	
	for(i=0; i=3; i++){
		cout << endl << "car id : " << c[i].car_id << "\t" << "car model : " << c[i].car_model; 
		cout << endl <<"car release year : " << c[i].car_release_year << "\t" << "car color : " << c[i].car_color;
		cout << endl << c[i].car_company_name ; 
	}
}