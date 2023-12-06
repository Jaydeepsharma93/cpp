#include<iostream>
#include<string.h>
using namespace std;

class A{
	protected :
	    int id;
	    long long int contact,salary;
	    string name,role,experience,comp_name,address,email;
	public:
		void setter_A(){
			cout << "Enter id : ";
			cin >> id;
			cout << "Enter name : ";
			cin.ignore();
			getline(cin,name);
			cout << "Enter role : ";
			cin.ignore();
			getline(cin,role);
			
		}
};
class B : public A{
	public :
		void setter_B(){
			cout << "Enter salary : ";
			cin >> salary;
			cout << "Enter experience : ";
			cin.ignore();
			getline(cin,experience);
		}
};
class C : public B{
	public :
		void getter_C(){
			cout << endl << "name : "<< name << endl << "role : " << role << endl << "salary :" << salary << endl<<endl ;
		}
	    void setter_C(){
		    cout << "Enter comp_name : ";
			cin.ignore();
			getline(cin,experience);
			cout << "Enter address : ";
			cin.ignore();
			getline(cin,address);
	}
};
class D : public C{
	public :
		void setter_D(){
			cout << "Enter emal : ";
			cin.ignore();
		    getline(cin,email);
			cout << "Enter contact : ";
		}
		void getter_D(){
			cout << endl <<"id : "<< id << endl <<"Name : "<< name << endl <<"Role : "<< role <<"\t Salary : "<< salary << endl <<"Experience :"<< experience << endl;
			cout <<"Company name : "<< comp_name << endl <<"Address :" << address << endl <<"email : "<< email <<"\t Contact : " << contact; 
		}
};
main()
{
	D d;
	d.setter_A();
	d.setter_B();
	d.getter_C();
	d.setter_C();
	d.setter_D();
	d.getter_D();
}