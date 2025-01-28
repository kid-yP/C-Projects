#include <iostream>
#include <fstream>
using namespace std;
struct student{
    string name;
    int roll_no;
    int year;
    int section;
}stud1;

void getRecord()
{
    cout<<"Enter student name: ";
    cin>>stud1.name;
    cout<<"Enter roll number: ";
    cin>>stud1.roll_no;
    cout<<"Enter year: ";
    cin>>stud1.year;
    cout<<"Enter section: ";
    cin>>stud1.section;
}
void addRecord()
{
    fstream outf;
    outf.open("D:\\Test.txt",ios::app);
    getRecord();
    outf.write((char*)&stud1, sizeof(stud1));
    outf.close();
}
void displayRecord()
{
    fstream test;
    test.open("D:\\Test.txt",ios::in);
    char choice = choose();
    if (choice == 1)
    {
        while(!test.eof())
        {
            test.read((char*)&stud1,sizeof(stud1));
            display();
        }
    }
    else
    {
        cout<<"Enter thr roll number of the student you would like to view";
        int r;
        cin>>r;
        char s = 'f';
        while(!test.eof())
        {
            test.read((char*)&stud1,sizeof(stud1));
            if (stud1.roll_no == r)
            {
                display();
                s = 't';
                break;
            }
        }
        if (s == 'f')
        {
            cout<<"No student record found.";
        }
    }   
}
int choose()
{
    int ch;
    do{
        cout<<"Would you like to display the entire record or a single student's record?(Enter 1/2)";
        cin>>ch;
    }while(ch!=1 || ch!=2);
    return ch;
}
void display()
{
    cout<<"Name: "<<stud1.name;
    cout<<"\nRoll number: "<<stud1.roll_no;
    cout<<"\nYear: "<<stud1.year;
    cout<<"\nSection: "<<stud1.section;
}
