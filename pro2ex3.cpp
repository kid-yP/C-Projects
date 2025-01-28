#include <iostream>
#include <cmath>
using namespace std;

struct QuadEqu {
    double a, b, c;

    void inputCoe() {
        cout << "Enter the coefficients of the quadratic equation (a, b, c): ";
        cin >> a >> b >> c;
    }

    void calcRoots() {
        double disc = b * b - 4 * a * c;
       

        if (disc > 0) {
            double root1 = -1 * (-b + sqrt(disc)) / (2 * a);
            double root2 = -1 * (-b - sqrt(disc)) / (2 * a);

            cout << "Roots are real and different." <<endl;
            cout << "Root 1 = " << root1 <<endl;
            cout << "Root 2 = " << root2 <<endl;
        } else if (disc == 0) {
            double root = -b / (2 * a);

            cout << "Roots are real and same." << endl;
            cout << "Root = " << root << endl;
        }
    }
};

int main(){
    QuadEqu equation;
    equation.inputCoe();
    equation.calcRoots();

    return 0;
}
