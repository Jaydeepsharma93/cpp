#include<iostream>
#include<string.h>
using namespace std;
class x{
	public:
	int A,B,C;
};
class y : private x{
	public:
		int sum;
		void setter(){
			cout << "Enter the value of A : ";
			cin >> A;
			cout << "Enter the value of B : ";
			cin >> B;
			cout << "Enter the value of C : ";
			cin >> C;
		}
		void getter(){
			A=A*A*A;
		    B=B*B*B;
		    C=C*C*C;
		    sum=A+B+C;
			cout << endl << "cube of A : " << A << endl << "cube of B : " << B << endl << "cube of C : " << C << endl;
			cout << endl << "sum of all A,B and C cube : " << sum;
		}
};

main()
{
	y y1;
	y1.setter();
	y1.getter();
} 