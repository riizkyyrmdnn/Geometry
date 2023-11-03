#include<iostream>
#include<cmath>
using namespace std;

/* ##  Global Variable  ## */
double side;
double volume;
double width;
double length;
double height;
double radius;
double base;


/*  ##  CUBE FUNCTION  ##  */
void cube(){
	cout << "=================================" << endl;
	cout << "##  Calculate __CUBE__ Volume  ##" << endl;
	cout << "=================================" << endl;
	cout << endl;
	
	cout << "Enter the sides of the cube: "; cin >> side;
	
	volume = side * side * side;
	
	cout << "Cube volume is " << volume;
}

/*  ##  BLOCK FUNCTION  ##  */
void block(){
	cout << "==================================" << endl;
	cout << "##  Calculate __BLOCK__ Volume  ##" << endl;
	cout << "==================================" << endl;
	
	cout << endl;
	
	cout << "Enter length: "; cin >> length;
	cout << "Enter width: "; cin >> width;
	cout << "Enter height: "; cin >> height;
	
	volume = length * width * height;
	
	cout << "Block volume is " << volume;
}

/*  ##  BALL FUNCTION  ##  */
void ball(){
	cout << "=================================" << endl;
	cout << "##  Calculate __BALL__ Volume  ##" << endl;
	cout << "=================================" << endl;
	
	cout << endl;
	
	cout << "Enter ball radius: "; cin >> radius;
	
	volume = (4.0 / 3.0) * M_PI * pow(radius, 3);
	
	cout << "Ball volume is " << volume;
}

/*  ##  TUBE FUNCTION  ##  */
void tube(){
	cout << "=================================" << endl;
	cout << "##  Calculate __TUBE__ Volume  ##" << endl;
	cout << "=================================" << endl;
	
	cout << endl;
	
	cout << "Enter radius: "; cin >> radius;
	cout << "Enter height: "; cin >> height;
	
	volume = M_PI * pow(radius, 2) * height;
	
	cout << "Tube volume is " << volume;
}

/*  ##  CONE FUNCTION  ##  */
void cone(){
	cout << "=================================" << endl;
	cout << "##  Calculate __CONE__ Volume  ##" << endl;
	cout << "=================================" << endl;
	
	cout << endl;
	
	cout << "Enter radius: "; cin >> radius;
	cout << "Enter height: "; cin >> height;
	
	volume = (1.0 / 3.0) * M_PI * pow(radius, 2) * height;
	
	cout << "Cone volume is " << volume;
}

/*  ##  PYRAMID FUNCTION  ##  */
void pyramid(){
	cout << "====================================" << endl;
	cout << "##  Calculate __PYRAMID__ Volume  ##" << endl;
	cout << "====================================" << endl;
	
	cout << endl;
	
	cout << "Enter base area: "; cin >> base;
	cout << "Enter height: "; cin >> height;
	
	volume = (1.0 / 3.0) * base * height;
	
	cout << "Base area pyramid is " << volume;
}

/*  ##  PRISM FUNCTION  ##  */
void prism(){
	cout << "==================================" << endl;
	cout << "##  Calculate __PRISM__ Volume  ##" << endl;
	cout << "==================================" << endl;
	
	cout << endl;
	
	cout << "Enter base area: "; cin >> base;
	cout << "Enter height: "; cin >> height;
	
	volume = base * height;
	
	cout << "Base area prism is " << volume;
}

/*  ##  CIRCLE FUNCTION  ##  */
void circle(){
	cout << "===================================" << endl;
	cout << "##  Calculate __CIRCLE__ Volume  ##" << endl;
	cout << "===================================" << endl;
	
	cout << endl;
	
	cout << "Enter radius: "; cin >> radius;
	
	base = M_PI * pow(radius, 2);
	
	cout << "Circle area base is " << base;
}


/*  ##  MAIN  ##  */
int main()
{
	int choice;
	
	cout << "============================" << endl;
	cout << "##  C++ Geometric Volume  ##" << endl;
	cout << endl;
	cout << "1 Cube Volume" << endl;
	cout << "2 Block Volume" << endl;
	cout << "3 Ball Volume" << endl;
	cout << "4 Tube Volume" << endl;
	cout << "5 Cone Volume" << endl;
	cout << "6 Pyramid Volume" << endl;
	cout << "7 Prism Volume" << endl;
	cout << "8 Circle Area" << endl;
	cout << "0 End Program" << endl;
	cout << endl;
	cout << "============================" << endl;
	
	cout << endl;
	
	cout << "Select the number above: "; cin >> choice;
	
	cout << endl;
	
	switch(choice){
		case 1: cube(); break;
		case 2: block(); break;
		case 3: ball(); break;
		case 4: tube(); break;
		case 5: cone(); break;
		case 6: pyramid(); break;
		case 7: prism(); break;
		case 8: circle(); break;
		default:
			cout << "Program end." << endl;
			return 0;
	}
	
	
	return 0;
}