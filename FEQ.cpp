#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

int main() {
const int MAX_PEOPLE = 100;
const int NUM_ACTIVITIES = 5;
const int calories_burnt[NUM_ACTIVITIES] = {150, 200, 450, 600, 750};

char exercise[MAX_PEOPLE][5];
int duration[MAX_PEOPLE];
int totalCalories[MAX_PEOPLE];
int numPeople = 0;
int choice;

    int num_entries;
    cout << "Enter the number of people: ";
    cin >> num_entries;

    if (numPeople + num_entries > MAX_PEOPLE) {
        cout << "Maximum number of people exceeded." << endl;
        return 0;
    }

    for (int i = 0; i < num_entries; i++) {
        cout << "Enter the person ID (4 characters): ";
        cin >> exercise[numPeople + i];
        cout << "Enter the exercise duration (in minutes): ";
        cin >> duration[numPeople + i];

        int choice;
        cout << "Choose the calories hour rate (1-5): ";
        cin >> choice;

        if (choice >= 1 && choice <= NUM_ACTIVITIES) {
            int index = choice - 1;
            totalCalories[numPeople + i] = calories_burnt[index] * pow(duration[numPeople + i], 2);
        } else {
            cout << "Invalid choice. Skipping calorie calculation." << endl;
        }
    }
    

    if (numPeople == 0) {
        cout << "No data available." << endl;
        return 0;
    }

    cout << "Person ID\tExercise Duration\tTotal Calories" << endl;
    for (int i = 0; i < numPeople; i++) {
        cout << exercise[i] << "\t\t" << duration[i] << "\t\t\t" << totalCalories[i] << endl;
    }
    

    if (numPeople == 0) {
        cout << "No data available." << endl;
        return 0;
    }

    cout << "Person ID\tExercise Duration\tTotal Calories" << endl;

    int count = 0;
    int calories;
    for (int i = 0; i < numPeople; i++) {
        if (totalCalories[i] > calories) {
            cout << exercise[i] << "\t\t" << duration[i] << "\t\t\t" << totalCalories[i] << endl;
            count++;
        }
    }




    if (numPeople == 0) {
        cout << "No data available." << endl;
        return 0;
    }

    char id[5];
    cout << "Enter the person ID to search: ";
    cin >> id;

    std::cout << "Person ID\tExercise Duration\tTotal Calories" << std::endl;
    for (int i = 0; i < numPeople; i++) {
        if (strncmp(exercise[i], id, 4) == 0) {
            cout << exercise[i] << "\t\t" << duration[i] << "\t\t\t" << totalCalories[i] << endl;
            return 1;
        }
	}

    cout << "Person with ID " << id << " not found." << endl;
    


    do {
        cout << "Fitness Tracker Menu" << endl;
        cout << "1. Input Data" << endl;
        cout << "2. Display Whole Record" << endl;
        cout << "3. Display Records with Total Calories Above a Given Calorie" << endl;
        cout << "4. Search Record by Person ID" << endl;
        cout << "5. Terminate Program" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                
                break;
            case 2:
                
                break;
            case 3: {
                int calorie;
                cout << "Enter the calorie threshold: ";
                cin >> calorie;
                
                break;
            }
            case 4:
                
                break;
            case 5:
                cout << "Program terminated." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }

        cout <<endl;

    } while (choice != 5);

    return 0;
}
