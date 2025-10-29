#include (<iostream>)
#include (<cmath>)

using namespace std;
int main() {
	int calculationType;
	cout << "Select calculation type (1; calculate area for a circle, 2;  Calculate the Area of a Rectangle. 3. Calculate the Area of a Triangle. 4. Quit): ";
	cin >> calculationType;
	switch (calculationType) {
		case 1: {
			int radius;
			cout << "Enter the radius of the circle: ";
			cin >> radius;
			double area = M_PI * radius * radius;
			cout << "The area of the circle is: " << area << endl;
			break;
		}
		case 2: {
			double length, width;
			cout << "Enter the length of the rectangle: ";
			cin >> length;
			cout << "Enter the width of the rectangle: ";
			cin >> width;
			double area = length * width;
			cout << "The area of the rectangle is: " << area << endl;
			break;
		}
		case 3: {
			double sideA, sideB, sideC;
			cout << "Enter the length of side A of the triangle: ";
			cin >> sideA;
			cout << "Enter the length of side B of the triangle: ";
			cin >> sideB;
			cout << "Enter the length of side C of the triangle: ";
			cin >> sideC;
			double s = (sideA + sideB + sideC) / 2;
			double area = sqrt(s * (s - sideA) * (s - sideB) * (s - sideC));
			cout << "The area of the triangle is: " << area << endl;
			break;
		}

}