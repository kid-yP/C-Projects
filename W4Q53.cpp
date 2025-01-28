#include <iostream>

using namespace std;

int main(){
	int numExercise; 
	float totalPointsEarned = 0, totalPointsPossible = 0;
	
	cout<<"Enter the number of exercise: "<<endl;
	cin>>numExercise;

    for (int i = 1; i <= numExercise; ++i) {
        
		float scoreReceived, pointsPossible;
        cout << "Score received for exercise " << i << ": ";
        cin >> scoreReceived;
        
		cout << "Total points possible for exercise " << i << ": ";
        cin >> pointsPossible;

        totalPointsEarned += scoreReceived;
        totalPointsPossible += pointsPossible;
    }

    float percentage = (totalPointsEarned / totalPointsPossible) * 100;

    cout << "Your total is " << totalPointsEarned << " out of " << totalPointsPossible<< ", or " << percentage << "%." << endl;
    return 0;
}
