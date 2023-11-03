#include<stdio.h>
#include<math.h>

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
	printf("=================================\n");
	printf("##  Calculate __CUBE__ Volume  ##\n");
	printf("=================================\n");
	
	printf("\n");
	
	printf("Enter sides of cube: "); scanf("%lf", &side);
	
	volume = side * side * side;
	
	printf("Cube volume is %.2lf", volume);
}

/*  ##  BLOCK FUNCTION  ##  */
void block(){
	printf("==================================\n");
	printf("##  Calculate __BLOCK__ Volume  ##\n");
	printf("==================================\n");
	
	printf("\n");
	
	printf("Enter length: "); scanf("%lf", &length);
	printf("Enter width: "); scanf("%lf", &width);
	printf("Enter height: "); scanf("%lf", &height);
	
	volume = length * width * height;
	
	printf("Block volume is %.2lf", volume);
}

/*  ##  BALL FUNCTION  ##  */
void ball(){
	printf("=================================\n");
	printf("##  Calculate __BALL__ Volume  ##\n");
	printf("=================================\n");
	
	printf("\n");
	
	printf("Enter ball radius: "); scanf("%lf", &radius);
	
	volume = (4.0 / 3.0) * M_PI * pow(radius, 3);
	
	printf("Ball volume is %.2lf", volume);
}

/*  ##  TUBE FUNCTION  ##  */
void tube(){
	printf("=================================\n");
	printf("##  Calculate __TUBE__ Volume  ##\n");
	printf("=================================\n");
	
	printf("\n");
	
	printf("Enter radius: "); scanf("%lf", &radius);
	printf("Enter height: "); scanf("%lf", &height);
	
	volume = M_PI * pow(radius, 2) * height;
	
	printf("Tube volume is %.2lf", volume);
}

/*  ##  CONE FUNCTION  ##  */
void cone(){
	printf("=================================\n");
	printf("##  Calculate __CONE__ Volume  ##\n");
	printf("=================================\n");
	
	printf("\n");
	
	printf("Enter radius: "); scanf("%lf", &radius);
	printf("Enter height: "); scanf("%lf", &height);
	
	volume = (1.0 / 3.0) * M_PI * pow(radius, 2) * height;
	
	printf("Cone volume is %.2lf", volume);
}

/*  ##  PYRAMID FUNCTION  ##  */
void pyramid(){
	printf("====================================\n");
	printf("##  Calculate __PYRAMID__ Volume  ##\n");
	printf("====================================\n");
	
	printf("\n");
	
	printf("Enter base are: "); scanf("%lf", &base);
	printf("Enter height: "); scanf("%lf", &height);
	
	volume = (1.0 / 3.0) * base * height;
	
	printf("Base area Prism is %.2lf", volume);
}

/*  ##  PRISM FUNCTION  ##  */
void prism(){
	printf("==================================\n");
	printf("##  Calculate __PRISM__ Volume  ##\n");
	printf("==================================\n");
	
	printf("\n");
	
	printf("Enter base are: "); scanf("%lf", &base);
	printf("Enter height: "); scanf("%lf", &height);
	
	volume = base * height;
	
	printf("Base area Prism is %.2lf", volume);
}

/*  ##  CIRCLE FUNCTION  ##  */
void circle(){
	printf("===================================\n");
	printf("##  Calculate __CIRCLE__ Volume  ##\n");
	printf("===================================\n");
	
	printf("\n");
	
	printf("Enter radius: "); scanf("%lf", &radius);
	
	base = M_PI * pow(radius, 2);
	
	printf("Circle area base is %.2lf", base);
}


/*  ##  MAIN  ##  */
int main()
{
	int choice;
	
	printf("==========================\n");
	printf("##  C Geometric Volume  ##\n");
	printf("\n");
	printf("1 Cube Volume\n");
	printf("2 Block Volume\n");
	printf("3 Ball Volume\n");
	printf("4 Tube Volume\n");
	printf("5 Cone Volume\n");
	printf("6 Pyramid Volume\n");
	printf("7 Prism Volume\n");
	printf("8 Circle Volume\n");
	printf("0 End Program");
	printf("\n");
	printf("==========================");
	
	printf("\n");
	
	printf("Select the number above: "); scanf("%d", &choice);
	
	printf("\n");
	
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
			printf("Program end.");
			return 0;
	}
	
	return 0;
}