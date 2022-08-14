#include<stdio.h>
#include<math.h>

int main() {

	const double pi = 3.14159;
	double radius;
	double circumference;
	double area;

	printf("\n Enter radius: ");
	scanf_s("%lf", &radius);

	circumference = 2 * pi * radius;
	area = pi * pow(radius, 2);

	printf("the circumference is: %lf \n", circumference);
	printf("the area is: %lf \n", area);


	return 0;
}