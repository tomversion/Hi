/*
Write a C++ program which will ask the user to enter his/her marks (out of
100). Define a function that will display grades according to the marks
entered as below:
Marks Grade
91-100 O
81-90 A
71-80 B
61-70 C
51-60 D
CO1
41-50 Pass
<=40 Fail
*/

#include<iostream>
using namespace std;

int main()
{
    while(1){
    int marks; 
    string grade;
    cout<<"Enter Your Marks: "<<endl;
    cin>>marks;
    

    if(marks>100){
        cout<<"Marks Should Be Out Of 100.";
        return 0;
    }
    else

    {
        if(marks>=91){
            grade = "O";
        }
        else if(marks>=81){
            grade = "A" ;
        }
        else if(marks>=71){
            grade = "B";
        }
        else if(marks>=61){
            grade = "C";
        }
        else if(marks>=51){
            grade = "D";
        }
        else if(marks>=41){
            grade = "Pass.";
        }
        else if(marks<=40){
            grade = "Fail";
        }
    }

    cout<<"Your Marks is: "<<marks<<endl;
    cout<<"Your Grade is: "<<grade<<endl;
    }
    return 0;
}