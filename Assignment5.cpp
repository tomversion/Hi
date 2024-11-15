/*
Write a program that takes your full name as input and displays the
abbreviations of the first and middle names except the last name which is
displayed as it is. For example, if your name is Anil Ramchandra Salunke,
then the output should be A. R. Salunke
*/

#include <iostream>
using namespace std;

int main()
{
    string firstname, middlename, lastname;
    cout << "Enter Your Full Name" << endl;
    cin >> firstname >> middlename >> lastname;

    if ((firstname[0] >= 'a' && firstname[0] <= 'z') ||
         (middlename[0] >= 'a' && middlename[0] <= 'z')||
             (lastname[0] >= 'a' && lastname[0] <= 'z'))
            {
                firstname[0] -= 'a' - 'A';
                middlename[0] -= 'a' - 'A';
                lastname[0] -= 'a' - 'A';
            }

    cout << firstname[0] << "." << middlename[0] << "." << lastname<<endl;

    return 0;
}