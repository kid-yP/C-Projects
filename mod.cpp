#include <iostream>
using namespace std;

template <typename T>
void printArray(T arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout<<endl;
}

int main() {
	int choose;
	
	cout<<"Enter the number 1 to choose integer arrays,"<<endl;
	cout<<"Enter the number 2 to choose float arrays,"<<endl;
	cout<<"Enter the number 3 to choose char arrays."<<endl;
	cin>>choose;
	
	if(choose == 1){
    int intArr[] = {1, 2, 3, 4, 5};
    int intSize = sizeof(intArr) / sizeof(intArr[0]);
    cout << "Integer Array: ";
    printArray(intArr, intSize);
	}
	
	else if(choose == 2){
    float floatArr[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    int floatSize = sizeof(floatArr) / sizeof(floatArr[0]);
    cout << "Float Array: ";
    printArray(floatArr, floatSize);
	}

	else if(choose == 3){
    char charArr[] = {'a', 'b', 'c', 'd', 'e'};
    int charSize = sizeof(charArr) / sizeof(charArr[0]);
    cout << "Character Array: ";
    printArray(charArr, charSize);
	}
	else{
		cout<<"You've entered an invalid number or alphabet!"<<endl;
	}
	
    return 0;
}
