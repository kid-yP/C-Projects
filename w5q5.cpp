//part 1 array question no 5, 6,
#include <iostream>

using namespace std;

int main()
{
	double balances[4][6] = {{1, 2, 3}, {7, 8}, {13}, {19, 20, 21}};
	cout<<"Display the array elements: "<<endl;
	
	for(int i=0; i<4; i++){
		for(int j=0; j<6; j++){
		cout<<balances[i][j]<<"\t";
		}
		cout<<endl;
	}

int rows = 0;
int columns = 0;
cout<<"enter the number of rows: ";
cin>>rows;
cout<<"Enter the number of columns: ";
cin>>columns;

double sales[rows][columns];

    cout << "Enter the elements of the sales array:" <<endl;
    for (int i = 1; i < rows + 1; i++) {
        for (int j = 1; j < columns + 1; j++) {
            cout << "Enter element at row " << i << ", column " << j << ": ";
            cin >> sales[i][j];
        }
    }
     for (int i = 1; i < rows + 1; i++) {
        for (int j = 1; j < columns + 1; j++) {
            cout << sales[i][j]<<"\t";
        }
        cout<<endl;
    }

    double sum1 = sales[0][0] + sales[1][2] + sales[2][3];

    cout << "Sum of the numbers stored in the first row, first column; "
              "second row, third column; and third row, fourth column: " << sum1 <<endl;
	
	return 0;
}
