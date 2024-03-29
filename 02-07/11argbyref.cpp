#include <iostream>
using namespace std;

const double Pi = 3.14159;

void Area(double Radius, double& Result);

int main()
{
	cout << "Enter radius: ";
	double Radius = 0;
	cin >> Radius;
	
	double AreaFetched = 0;

	cout << "Area before Area() is called is " << AreaFetched << endl;
	Area(Radius, AreaFetched);
	cout << "The area is " << AreaFetched << endl;
	
	return 0;
}

//output parameter Result by reference
void Area(double Radius, double& Result)
{
	Result = Pi * Radius * Radius;
}