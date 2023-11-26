#include<iostream>
#include<string.h>
using namespace std;

class Hotels{
	private:
		int id,rating,staff_quantity,room_quantity;
		string location,type;
		static int establish_year;
		static string hotel_name; 
	public:
		void setterHotels()
		{
			cout << "enter the id : ";
			cin >> id;
			cout << "enter the location(city name) : ";
			cin >> location;
			cout << "enter the type (like hotel or motel) : ";
			cin >> type;
			cout << "enter the staff_quantity : ";
			cin >> staff_quantity;
			cout << "enter the room_quantity : ";
			cin >> room_quantity;
			cout << "enter the rating (like 1,2,...,7) : ";
			cin >> rating;
		}
		void getterHostels()
		{
			cout << endl << "id : " << id << "\t establish_year : "<< establish_year << endl << "Hotel name : " << hotel_name << endl;
			cout << "type : " << type << "\tlocation : " << location << "\trating : " << rating << endl;
			cout << "staff_quantity : " << staff_quantity << "\nroom_quantity : " << room_quantity;
		}
};
    int Hotels :: establish_year = 2023;
    string Hotels :: hotel_name = "Four_Seasons_Hotels_and_motel";
main()
{
	Hotels h1;
	h1.setterHotels();
	h1.getterHostels();
}