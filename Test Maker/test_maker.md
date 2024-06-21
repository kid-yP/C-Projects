## Test Maker Program
### Description
Your English teacher needs help in grading a True/False, Multiple, and short answers test. The
test answer stored in 1D array and the students’ IDs and test answers are stored in 2D array. The
first entry in the student array contains students’ IDs and other entries in the array are student’s
answers to the question. The exam has 20 questions, and the class has more than 150 students.
Each correct answer is awarded two points, each wrong answer gets one point deducted, and no answer gets zero points. The program processes the test data and should display the student’s ID,
followed by the answers, followed by the test score, followed by the test grade. When it is
required, the program should print the 5/10 top test scores along with the student’s ID in order
the top score first and forth. The program should allow your teacher to search for a student with
his/her id.
### Pseudocode
Step 1: Start <br />
step 2: Reads input of the correct answers for the twenty multiple choices. <br />
step 3: Read the number of students, number of student should be greater than 150. <br />
step 4: Read input students' IDs and answers<br />
step 5: Calculate scores: <br />
        if students answer is correct: 2 points is added <br />
        if students answer is incorrect: 1 point is deducted <br />
        if student didnt answer: nothing happens <br />
        total score = score * 2.5 <br />
step 6: Calculate grade: <br />
        if score is greater than 90: grade is A <br />
        if score is greater than 80: grade is B <br />
        if score is greater than 70: grade is C <br />
        if score is greater than 60: grade is D <br />
        otherwise: grade is F <br />
        
step 7: Output User menu for displaying information <br />
Choose: <br />
    1 for list of all students' test information <br />
    2 for a specific student's test information <br />
    3 for top 10 student's scores<br />
step 8: Read input using Switch functon based on user choice <br />
switch choice <br />
    case 1: <br />
        Print the list of all student's test information <br />
        output formatted table with student IDs, test answers, scores, and grades <br />
        break <br />
    case 2: <br />
        Print a specific student's information <br />
        output "Input Student ID: " <br />
        input studentID <br />
        search for studentID in student_answers array and print relevant information <br />
        break <br />
    case 3: <br />
        calculate top 10 scores and corresponding indices <br />
        sort the top 10 scores and indices <br />
        Output table with top 10 student IDs and grades <br />
        break  <br />
    default: <br />
        output "There's no such choice!" <br />
step 8: End <br />

### Flowchart
```mermaid
        flowchart TD
A([Start]) --> B[/Input correct answers/];
B --> C[/Input number of students/];
C --> D[/Input student's ids and answers/];
D --> E["Calculate score: + 2 if answer is correct - 1 if incorrect 0 if nothing is input"];
E --> F["Calculate grade"];
F --> G[/Output students information/];
G --> H["Compare students grades and store top 10"];
H --> I["Output top 10 students' scores"];
I --> J([End]);
```
