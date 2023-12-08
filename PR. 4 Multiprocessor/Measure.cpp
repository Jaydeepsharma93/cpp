#include<iostream>
using namespace std;

class Measure{
	int km, meter;
	public:
		void setter(){
            cout << ">> Kilometer : ";
			cin >> km;
			cout << ">> Meter : ";
			cin >> meter;
		}
		void getter(){
			cout << endl << ">> Kilometer : " << km << "  Meter : " << meter << endl << endl;
		}
		Measure operator+(Measure m2){
		    Measure temp;
			temp.km = this->km + m2.km;
			temp.meter = this->meter + m2.meter;
			temp.km = temp.km + (temp.meter / 1000);
			temp.meter = (temp.meter % 1000); 
			return temp;
		}
};
main(){
	Measure m1, m2, m3;
	m1.setter();
	m2.setter();
	m3 = m1 + m2;
	m3.getter();
}