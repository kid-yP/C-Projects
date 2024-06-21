#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
    string answers[20];
    int stud_num, choice, answer(20);
    string studentID;
	cout<<"Welcome to test maker"<<endl;
    cout << "Input the correct letters of choice for the twenty questions, here: ";
    for (int i = 0; i < answer; i++)
        cin >> answers[i];

    cout << "How many students are there(> 150)? ";
    do {
    cin >> stud_num;
    if (stud_num <= 150)
        cout << "The number of students is greater than 150, Try again: ";
    } while (stud_num <= 150);

    string student_answers[stud_num][21];

    // Input blank spaces for all student's answers
    for (int i = 1; i < stud_num; i++)
    {
        for (int j = 0; j < answer; j++)
            student_answers[i][j + 1] = " ";
    }

    cout << "Would you like to input the students' ids and answers(1 for yes, 2 for no)? ";
    cin >> choice;

    if (choice == 1)
    {
        for (int i = 0; i < stud_num; i++)
        {
            cout << "Input student #" << (i + 1) << "'s id and answers: ";
            for (int j = 0; j < (answer + 1); j++)
            {
                cin >> student_answers[i][j];
            }
        }
    }




    float scores[stud_num] = {0};
    string grades[stud_num][2];

    for (int i = 0; i < stud_num; i++)
    {
        for (int j = 0; j < answer; j++)
        {
            if (student_answers[i][j + 1] == answers[j])
                scores[i] += 2;
            else if (student_answers[i][j + 1] == " ")
                scores[i] += 0;
            else
                scores[i] -= 1;
        }
        scores[i] *= 2.5;
        grades[i][0] = student_answers[i][0];
        if (scores[i] <= 100 && scores[i] >= 90)
            grades[i][1] = "A";
        else if (scores[i] >= 80)
            grades[i][1] = "B";
        else if (scores[i] >= 70)
            grades[i][1] = "C";
        else if (scores[i] >= 60)
            grades[i][1] = "D";
        else
            grades[i][1] = "F";
    }

    cout << "Choose:\n\t1 for list of all students' test information\n\t2 for a specific student's test information";
    cout<< "\n\t3 for top 10 student's scores"<<endl;
    cin >> choice;

    switch(choice)
    {
        case 1:
            // Print the list of all student's test information
            cout << setw(14) << left << "Student ID" << setw(21) << left << "Test Answers";
            cout << setw(12) << left << "Test Scores" << setw(12) << left << "Test Grades" <<endl;
            for (int i = 0; i < stud_num; i++)
            {
                cout << setw(14) << left << student_answers[i][0];
                for (int j = 0; j < answer; j++)
                    cout << student_answers[i][j + 1];
                cout << " " << setw(12) << left << scores[i] << setw(12) << left << grades[i][1];

                cout << endl;
            }
            break;
        case 2:
            // Print a specific students information
            cout << "Input Student ID: ";
            cin >> studentID;
            for (int i = 0; i < stud_num; i++)
            {
                if (student_answers[i][0] == studentID)
                {
                    cout << "Student's Information" << endl << setw(14) << left << student_answers[i][0];
                    for (int j = 0; j < answer; j++)
                        cout << student_answers[i][j + 1];
                    cout << " " << setw(12) << left << scores[i] << setw(12) << left << grades[i][1];

                    cout << endl;
                }
            }
            break;
        case 3:
            // Prints top 10 student's grade and id
            int topIndices[10];
            float topScores[10];
            for (int i = 0; i < stud_num; i++)
            {
                if (i < 10)
                {
                    topIndices[i] = i;
                    topScores[i] = scores[i];
                }
                else
                {
                    int minIndex = 0;
                    float minScore = topScores[0];
                    for (int j = 1; j < 10; j++)
                    {
                        if (topScores[j] < minScore)
                        {
                            minIndex = j;
                            minScore = topScores[j];
                        }
                    }
                    if (scores[i] > minScore)
                    {
                        topIndices[minIndex] = i;
                        topScores[minIndex] = scores[i];
                    }
                }
            }

            for (int i = 0; i < 9; i++)
            {
                for (int j = 0; j < 9 - i; j++)
                {
                    if (topScores[j] < topScores[j + 1])
                    {
                        // Swap the scores
                        float tempScore = topScores[j];
                        topScores[j] = topScores[j + 1];
                        topScores[j + 1] = tempScore;

                        int tempIndex = topIndices[j];
                        topIndices[j] = topIndices[j + 1];
                        topIndices[j + 1] = tempIndex;
                    }
                }
            }

            cout << setw(14) << left << "Student ID" << setw(12) << left << "Test Grades" << endl;
            for (int i = 0; i < 10; i++)
            {
                int index = topIndices[i];
                cout << setw(14) << left << student_answers[index][0] << setw(12) << left << grades[index][1] << endl;
            }
            break;
        default:
            cout << "There's no such choice! "<< endl;
    }

    return (0);
}
