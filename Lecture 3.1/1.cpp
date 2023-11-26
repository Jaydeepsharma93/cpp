#include<iostream>
#include<string.h>
using namespace std;

class Student{
	private:
	int id , age;
    string name , course , city , email , college;
    
    public:
    void setterstudent(){
    	cout << "Enter student id : ";
    	cin >> id ;
    	cout << "Enter student age : ";
    	cin >> age ;
    	cout << "Enter student name : ";
    	cin.ignore();
    	getline(cin,name);
    	cout << "Enter student course : ";
    	cin.ignore();
    	getline(cin,course);
    	cout << "Enter city : ";
    	cin.ignore();
    	getline(cin,city);
    	cout << "Enter student email : ";
    	cin.ignore();
    	getline(cin,email);
    	cout << "Enter student college name : ";
    	cin.ignore();
    	getline(cin,college);
    }
    void getterstudent(){
    	cout << endl << "student id : " << id << endl;
    	cout << "name : " << name << endl;
    	cout << "email : " << email << endl;
    	cout << "age : " << age << "\tcourse : "<< course << endl;
    	cout << "city : " << city << endl ;
		cout << "college name : " << college;
    }
};
main()
{
	Student s[5];
	for(int i=0; i<5; i++)
		s[i].setterstudent();
	for(int i=0; i<5; i++)
		s[i].getterstudent();
}