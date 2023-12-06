/*Q.1 Write a Program that defines a shape class with a constructor that gives value to width and height. Then define two sub-classes triangle and rectangle, 
that calculate the area of the shape area (). In the main, define two objects a triangle and a rectangle, and then call the area() function using these two 
objects.*/

#include<iostream>
using namespace std;
class area{
	protected :
	int width,height,area_of_triangle,area_of_rectangle;
};
class triangle : public area{
	public:
	void setter(){
		cout << "Enter the height : ";
		cin >> height;
		cout << "Enter the width : ";
		cin >> width;
	} 
	void getter(){
		area_of_triangle = (width * height)/2 ;
		cout << endl <<"area_of_triangle : " << area_of_triangle << endl <<endl;
	}
};
class rectangle : public area{
	public:
	void setter(){
		cout << "Enter the height : ";
		cin >> height;
		cout << "Enter the width : ";
		cin >> width;
	} 
	void getter(){
		area_of_rectangle = width * height;
		cout << endl << "area_of_rectangle : " << area_of_rectangle << endl;
	}
};
main()
{
	triangle t;
	rectangle r;
	t.setter();
	t.getter();
	r.setter();
	r.getter();
}