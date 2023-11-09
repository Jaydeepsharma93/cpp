#include<iostream>
#include<string.h>
using namespace std;

class Employee
{
public:
    int id,age,salary;
    string name,role,city,experience,company_name;
};

main()
{
    Employee e[5];
    int i;
    for(i=0; i<5; i++){
    	cout << "Enter your id : ";
    	cin >> e[i].id;
    	cout << "Enter your age : ";
    	cin >> e[i].age;
    	cout << "Enter your salary : ";
    	cin >> e[i].salary;
        cout << "Enter your name : ";
        cin.ignore();
        getline(cin, e[i].name);
		cout << "Enter your role : ";
		cin.ignore();
        getline(cin, e[i].role);
		cout << "Enter your city : ";
		cin.ignore();
        getline(cin, e[i].city);
        cout << "Enter your experience : ";
        cin.ignore();
        getline(cin, e[i].experience);
        cout << "Enter your company name : ";
        cin.ignore();
        getline(cin, e[i].company_name);
	}
	for(i=0; i<5; i++)
	{
		cout << endl << "id : " << e[i].id << "\t" << "age : " << e[i].age << endl;
		cout << "name : " << e[i].name << endl;
		cout << "experience : " << e[i].experience << "\t" << "salary : " << e[i].salary << endl;
		cout << "role : " << e[i].role << "\t" << "city : " << e[i].city << endl ;
		cout << "company name :" << e[i].company_name << endl; 
	}
}
