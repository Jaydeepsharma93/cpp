/*Q.1 Write a Program to abstract some attributes of class Admin to prevent them to be inherited by its child classes.
- Class Admin -> Class Manager
- Class Manager -> Class Employee
- Class Admin has the following members:
company_name
manager_salary
employee_salary
total_staff
total_annual_revenue
can_terminate*/

#include<iostream>
#include<string.h>
using namespace std;
class Employee{
	protected:
    	string company_name ="Data craft solutions";
	public:
    	void getter(){
    		cout << "company_name : " << company_name << endl << endl;
    	}
};
class Manager : public Employee{
	protected:
		int employee_salar=15000;
		int total_staff=15;
		long long int total_annual_revenue=9200000000;
		string can_terminate="2 employee";
	public:
	    void getter(){
  		cout << "company_name : " << company_name << endl;
  		cout << "employee_salar : " << employee_salar << endl;
  		cout << "total_staff : " << total_staff << endl;
  		cout << "total_annual_revenue : " << total_annual_revenue << endl;
  		cout << "can_terminate : " << can_terminate << endl << endl;
    	}
};
class Admin : public Manager{
	protected:
		int manager_salary=30000;
	public:
	    void getter(){
  		cout << "company_name : " << company_name << endl;
  		cout << "employee_salar : " << employee_salar << endl;
  		cout << "total_staff : " << total_staff << endl;
  		cout << "total_annual_revenue : " << total_annual_revenue << endl;
  		cout << "can_terminate : " << can_terminate << endl;
  		cout << "manager_salary : " << manager_salary << endl;
    	}		
};
main()
{
	Employee e1;
	Manager m1;
	Admin a1;
	e1.getter();
	m1.getter();
	a1.getter();
}