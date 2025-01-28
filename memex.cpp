/*
#include <iostream>
using namespace std;
int main(){
	string *ptr = new string;
	
	cout<<"Enter your full name: ";
	getline(cin, *ptr);
	
	cout<<"Welcome "<<*ptr<<" !"<<endl;
	return 0;
}
#include <iostream>

using namespace std;

int main(){
    int n;
    
    cout<<"Enter the number of students: ";
    cin>>n;

    int student_mark[100];
    char status[][10] = {"Excellent","Very Good" ,"Fair", "Poor", "Fail"};

    cout<<"Enter the marks of the students space separated: ";
    for(int i = 0; i < n; i++){
        cin>>student_mark[i];
    }

    cout<<"\n\n___________________________________________________\n";
    cout<<"  Student\t |  Mark\t |  Status\n";
    
    for(int i = 0; i < n; i++){
        int stat;
        if(student_mark[i] >= 80){
            stat = 0;
        }
        else if(student_mark[i] >= 60){
            stat = 1;
        }
        else if(student_mark[i] >= 50){
            stat = 2;
        }
        else if(student_mark[i] >= 40){
            stat = 3;
        }
        else{
            stat = 4;
        }
        cout<<"___________________________________________________\n";
        cout<<"  "<<i + 1<<"\t\t |  "<<student_mark[i]<<"\t\t |  "<<status[stat]<<endl;
    }
    cout<<"____________________________________________________\n";
return 0;
}

#include <iostream>
using namespace std;
int main(){
	int num; 
	int temp[num];
	cout<<"How many numbers do you want to enter? ";
	cin>>num;
	
	cout<<"Enter the numbers "<<endl;
	for(int i = 0; i < num; i++){
		cout<<
		i + 1<<": ";
		cin>>temp[i];
	}
cout << "The reversed even numbers are: " << endl;

    for (int i = num - 1; i >= 0; i--) {
        if (temp[i] % 2 == 0) {
            cout << temp[i] << " ";
        }
    }

	cout << endl;
	
	return 0;
}

#include <iostream>
#define MAX 3
using namespace std;

int main(){
    
    int array[MAX][MAX] = {};
    int col_sum[MAX] = {};
    int row_pro[MAX] = {};
    int sum = 0, product = 1;

    for(int i = 0; i < MAX; i++){
        cout<<"Enter the elements of row "<<i+1<<" space separated: ";
        for(int j = 0; j < 3; j++){
            cin>>array[i][j];
        }
    }

    for(int i = 0; i < MAX; i++){
        for(int j = 0; j < MAX; j++){
            sum += array[i][j];
            product *= array[j][i];
        }
        col_sum[i] = sum;
        row_pro[i] = product;
        product = 1;
        sum = 0;
    }

    for(int i = 0; i < MAX; i++){
        cout<<"Sum of column "<<i + 1<<" is: "<<col_sum[i]<<endl;
        cout<<"Product of row "<<i + 1<<" is: "<<row_pro[i]<<endl;
    }
	return 0;
}
#include <iostream>
#define rmax 3
#define cmax 3
using namespace std;
int main(){
	int row, col;
	int mat1[cmax][rmax];
	int mat2[cmax][rmax];
	int resm[cmax][rmax];
	
	cout<<"Enter the rows of the matrix: ";
	cin>>row;
	cout<<"Enter the column of the matrix: ";
	cin>>col;
	
	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			cout<<"Enter the elements of matrix 1: "<<"Row "<<i<<", column "<<j<<":";
			cin>>mat1[i][j];
		}
	cout<<"\n";
	}
	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			cout<<"Enter the elements of matrix 2: "<<"Row "<<i<<", column "<<j<<":";
			cin>>mat2[i][j];
		}
	cout<<"\n";
	}
	
	cout<<"\n|***********MATRIX 1:******************|\n";
	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			cout<<mat1[i][j]<<" ";
		}
	cout<<"\n";
	}

	cout<<"\n|***********MATRIX 2:******************|\n";
	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			cout<<mat2[i][j]<<" ";
		}
	cout<<"\n";
	}
	
	cout<<"\n|**********The resultant matrix is:******************|\n";
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			resm[i][j] = mat1[i][j] + mat2[i][j];
			cout<<resm[i][j]<<" ";		
		}
		cout<<"\n";
	}
	return 0;
}
#include <iostream>
using namespace std;
int main()
{
char name[10], dest[10];
cout<< "\n enter your name : ";
cin>>name;
int c = 0;
while(name[c] != '\0') {
dest[c] = name[c];
c++;
}
dest[c] = '\0';
cout<< "\n your name after copying : "<<dest;
return 0;
}
#include <iostream>
using namespace std;
int main ()
{
char mybuffer [100];
cout<<"What's your name? ";
cin.getline (mybuffer,100);
cout<<"Hello " << mybuffer << ".\n";
cout<<"Which is your favourite team? ";
cin.getline (mybuffer,100);
cout<<"I like "<< mybuffer <<" too.\n";
return 0;
}
#include <iostream>
#include <string.h>
using namespace std;
int main(){
char School[] = "Manchester United";
int length = strlen(School);
cout << "The length of \"" << School << "\" is " << length << " characters\n\n";
return 0;
}
#include <iostream>
using namespace std;
int main(){
	
	char name[6];
	int arr[6] = {2,4,6,2,4,7};
	cout<<"What is your name? ";
	cin.getline(name, 6);
	
	cout<<"Hi "<<name<<", The first frequent element is "<<arr[0]<<" and the first non frequent element is "<<arr[2]<<endl;
	return 0; 
}
#include <iostream>
#include <string.h>
using namespace std;
int main(){
char *FirstName1 = "Andy";
char *FirstName2 = "Charles";
char *LastName1 = "Stanley";
char *LastName2 = "Stanley";
int Value1 = strcmp(FirstName1, FirstName2);
int Value2 = strcmp(FirstName2, FirstName1);
int Value3 = strcmp(LastName1, LastName2);
cout << "The result of comparing " << FirstName1
<< " and " << FirstName2 << " is\t" << Value1 << endl;
cout << "The result of comparing " << FirstName2
<< " and " << FirstName1 << " is\t" << Value2 << endl;
cout << "The result of comparing " << LastName1
<< " and " << LastName2 << " is\t" << Value3;
return 0;
}

#include <iostream>
#include <string.h>

int main() {
    const char* sentence = "Hello, World!";
    char searchChar = 'o';
    const char* nullptr;

    const char* result = strchr(sentence, searchChar);

    if (result != nullptr) {
        std::cout << "The character '" << searchChar << "' was found in the string.\n";
        std::cout << "The remaining string starting from the first occurrence: " << result << std::endl;
    } else {
        std::cout << "The character '" << searchChar << "' was not found in the string.\n";
    }

    return 0;
}

#include <iostream>
using namespace std;
int main(){
	signed int arr[4][5] = {16, 22, 99, 4, 18, -258, 4, 101, 5, 98, 105, 6, 15, 2, 45, 33, 88, 72, 16, 3};
	
	return 0;
}	
#include <iostream>
#define max 8
using namespace std;
int main(){
	
	int temp[max];
	int sum = 0, ave;
	
	for(int i = 0; i < max; i++){
	cout<<"Enter the numbers: "<<i+1<<":";
		cin>>temp[i];
		sum += temp[i];
	}
	cout<<"The average of the numbers is: "<<sum/max<<endl;
	return 0; 
}*/
/*
#include <iostream>
#define max 3
using namespace std;
int main(){
	int row, col;
	int first[max][max];
	int second[max][max];
	int result[max][max];

	cout<<"Enter the rows: ";
	cin>>row;
	cout<<"Enter the columns: ";
	cin>>col;
	
	cout << "\nEnter elements for the first array:" << endl;
	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			cout<<"Enter value for ROW "<<i<<" , COL "<<j<<" : ";
			cin>>first[i][j];
		}
	}
    cout << "\nEnter elements for the second array:" <<endl;
	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			cout<<"Enter value for ROW "<<i<<" , COL "<<j<<" : ";
			cin>>second[i][j];
		}
	}

	
	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			result[i][j]= first[i][j] + second[i][j];
		}
	}
	cout<<"\n";

	cout<<"/_____result for the sum of the two arrays_______/"<<endl;
	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			cout<<result[i][j]<<"\t";
		}
		cout<<endl;
	}
	return 0;	
}
*/
/*
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	float volts[9] = {11.95, 16.32, 12.15, 8.22, 15.98, 26.22, 13.54, 6.45, 17.59};
	
	for(int i= 0; i < 9; i++){
		cout<<volts[i]<<setw(20);
		
		if((i + 1) % 3 == 0){
			cout<<"\n";
		}
		
	}
	return 0;
}

#include <iostream>
#define max 100
using namespace std;
int main(){
	int mark[max];
	char status[][10] = {"excellent", "very_good", "fair", "poor", "fail"};
	int n;
	cout<<"How many students? ";
	cin>>n; 
	
	for(int i = 0; i < n; i++){
		cout<<"Enter the mark of the student "<<i + 1<<": ";
		cin>>mark[i];
	}
	
	for(int i = 0; i < n; i++){
		int stat;
		
		if(mark[i] >= 80){
			stat = 0;
		}
		else if(mark[i] >= 60){
			stat = 1;
		}
		else if(mark[i] >= 50){
			stat = 2;
		}
		else if(mark[i] >= 40){
			stat = 3;
		}
		else{
			stat = 4;
		}
	cout<<" "<<i + 1<<": "<<mark[i]<<": "<<status[stat]<<endl;
	}
	return 0;
}
#include <iostream>
#define max 10
using namespace std;
int main(){
	int arr[max];
	int even[max]; 
	
	for(int i = 0; i < max; i++){
	cout<<"Enter the numbers "<<i + 1<<": ";
	cin>>arr[i];
	}
	int k=0;
	for(int i = 0; i < max; i++){
		if(arr[i] % 2 == 0){
			even[k]=arr[i];
			k++;
		}
	}
	if(k > 0){
		cout<<"Even numbers: ";
	for(int i = k - 1; i >= 0; i--){
		cout<<even[i]<<" ";
		}
	}
	else{
		cout<<"No even numbers.";
	}
	return 0;
}

#include <iostream>
#define max 3
using namespace std;
int main(){
	int row, col, unidentical = 0;
	int first[max][max];
	int second[max][max];
	int result[max][max];

	cout<<"Enter the rows: ";
	cin>>row;
	cout<<"Enter the columns: ";
	cin>>col;
	
	cout << "\nEnter elements for the first array:" << endl;
	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			cout<<"Enter value for ROW "<<i<<" , COL "<<j<<" : ";
			cin>>first[i][j];
		}
	}
    cout << "\nEnter elements for the second array:" <<endl;
	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			cout<<"Enter value for ROW "<<i<<" , COL "<<j<<" : ";
			cin>>second[i][j];
			if(first[i][j] != second[i][j]){
				unidentical++;
			}
		}
	}
	if(unidentical > 0){
		cout<<"There are no identical elements!";
	}
	else{
		cout<<"The two sets are identical!";
	}
	cout<<endl;
	return 0;	
}*/
/*
//Write a C++ program to that accepts a two-dimensional array and displays the multiplication of row elements and the sum of column elements.
#include <iostream>
#define max 3
using namespace std;
int main(){
	int arr[max][max];
	int sum = 0, product = 1;
	int col_sum[max];
	int	row_pro[max];
	
	 cout<<"Enter the elements"<<endl;
	for(int i = 0; i < max; i++){
		for(int j = 0; j < max; j++){
		cout<<"Enter value for ROW "<<i<<" , COL "<<j<<": ";
			cin>>arr[i][j];
		}
	}
	
	for(int i = 0; i < max; i++){
		for(int j = 0; j < max; j++){
			sum += arr[i][j];
			product *= arr[j][i];
		}
		col_sum[max] = sum;
		row_pro[max] = product;
		sum = 0;
		product = 1;
	}
	
	 for(int i = 0; i < max; i++){
        cout<<"Sum of column "<<i + 1<<" is: "<<col_sum[i]<<endl;
        cout<<"Product of row "<<i + 1<<" is: "<<row_pro[i]<<endl;
	}	
	return 0;
}
*/
//not finished

/*
#include <iostream>

using namespace std;
int main(){
	int a = 21, c ;
c = a++; 
cout<<"Value of c after assigned a++ is :"<<c<<endl;
cout<<"Value of a is after a++:" << a << endl ;
c = ++a; 
cout <<" Value of c after assigned ++a is :"<<c<<endl;
cout<<"Value of a is after ++a:" << a << endl ;
}
*/
/*
#include <iostream>

using namespace std;
int main(){
	int a = 21, c ;
c = a++;
cout<<"Value of c after assigned a++ is :"<<c<<endl;
cout<<"Value of a is after a++:" << a << endl ;
c = ++a; 
cout <<" Value of c after assigned ++a is :"<<c<<endl;
cout<<"Value of a is after ++a:" << a << endl ;

	return 0;
}
*/
/*
#include <iostream>
using namespace std;
int main(){
	int const size = 5;
	
	int row, col;
	int mat1[size][size];
	int mat2[size][size];
	int rest[size][size];

	cout<<"Enter the number of rows: ";
	cin>>row;
	
	cout<<"Enter the number of columns: ";
	cin>>col;
	
	cout<<"Enter the element of: "<<endl;
	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			cout<<"Row"<<i + 1<<", Column"<<j + 1<<": ";
			cin>>mat1[i][j];
		}
		cout<<endl;
	}
	
	cout<<"Enter the element of: "<<endl;
		for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			cout<<"Row"<<i + 1<<", Column"<<j + 1<<": ";
			cin>>mat2[i][j];
		}
		cout<<endl;
	}
	
	cout<<"The sum of matrix 1 and matrix 2 is: "<<endl;
		for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
		rest[i][j] = mat1[i][j] + mat2[i][j];	
		cout<<rest[i][j]<<"\t";
		}
		cout<<endl;
	}	
	return 0;	
}
*/

#include <iostream>
#include<iomanip>

using namespace std;

int main(){
	string answers[20];
	int stud_num, choice, answer(20);
	string studentID;
	string stud_answers[20][20];
	
	cout<<"Welcome to test maker"<<endl;
	cout<<"Input the correct letters of choice for the twenty questions, here: ";
	for(int i = 0; i < answer; i++){
	cin>>answers[i];
	}
	
	cout<<"How many students are there(>150)? ";
	do{
		cin>>stud_num;
		if(stud_num < 150){
			cout<<"The number of students is greater than 150, Try again: ";
		}
	}while(stud_num <= 150);
	
	string student_answers[stud_num][21];
	
	// Input blank spaces for all student's answers
	for(int i = 0; i < stud_num; i++){
		for(int j = 0; j< answer; j++){
			stud_answers[i][j+1]=" "; 	
		}
	} 
	
	cout << "Would you like to input the students' ids and answers(1 for yes, 2 for no)? ";
    cin >> choice;
	
	if(choice = 1){
		for(int i = 0; i < stud_num; i++){
			cout<<"Input student # "<<(i + 1)<<"'s id and answers: ";
			for(int j = 0; j < (answer + 1); j++){
				cin>>student_answers[i][j];
			}
		}
	}
	
	float scores[stud_num] = {0};
    string grades[stud_num][2];

	for(int i = 0; i < stud_num; i++){
		for(int j = 0; j < answer; j++){
			if(student_answers[i][j + 1] == answers[j]){
				scores[i] += 2;
			}
			else if(student_answers[i][j +1] == " "){
				scores[i] += 0;
			}
			else{
				scores[i] -= 1;
			}
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
	return 0;
}
