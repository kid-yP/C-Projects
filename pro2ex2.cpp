#include <iostream>

using namespace std;
class Area{
	private:
		double length;
		double breadth;
		double area;
	public: 	
		double setDim(double len, double bre){	
			length = len;
			breadth = bre;	
			}
		double getArea(){
			return area = length * breadth; 
		}
};
int main() {
    double length, breadth;

    cout << "Enter length of the rectangle: ";
    cin >> length;

    cout << "Enter breadth of the rectangle: ";
    cin >> breadth;

    Area rectangle;
    rectangle.setDim(length, breadth);

    double area = rectangle.getArea();
    cout << "Area of the rectangle: " << area <<endl;

    return 0;
}
