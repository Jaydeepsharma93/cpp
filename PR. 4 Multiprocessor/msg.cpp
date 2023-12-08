#include<iostream>
#include<string.h>
using namespace std;
class Message{
	string message ;
	public : 
	 Message(string message){
		this->message = message ;
	}
	void print(){
		cout << endl << message << endl;
	}
	void print(string message){
		cout << endl << this->message << " " << message;
	}
};
main()
{
	Message m("Hello");
	m.print();
	m.print("World");
}