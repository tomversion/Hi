/*
Write a program by creating an 'Employee' class having the following
functions and print the final salary.
1 - 'getInfo()' which takes the salary, number of hours of work per day of
employee as parameters
2 - 'AddSal()' which adds Rs.10000 to the salary of the employee if it is
less than Rs.50000.
3 - 'AddWork()' which adds Rs. 1000 to the salary of the employee if the
number of hours of work per day is more than 6 hours.
*/

#include <iostream>
using namespace std;

class Employee
{
private:
    string name;
    int sal;
    int hours;

public:
    void AddSal();
    void AddWork();
    void getinfo();
    void showinfo();
};

void Employee::getinfo()
{
    cout << "Enter Your Name: " << endl;
    getline(cin, name);

    cout << "Enter Your Salary: " << endl;
    cin >> sal;

    cout << "Enter Your Working hours: " << endl;
    cin >> hours;
}

void Employee::AddSal()
{
    if (sal < 50000)
    {
        sal += 10000;
    }
}

void Employee::AddWork()
{
    if (hours > 6)
    {
        sal += 1000;
    }
}

void Employee::showinfo()
{
    cout << "Your Name is: " << name << endl;
    cout << "Your Working for " << hours << " hours per day" << endl;
    cout << "Your Final Salary is " << sal << endl;
}

int main()
{
    Employee e;
    int sal, hours;
    string name;
    e.getinfo();
    e.AddSal();
    e.AddWork();
    e.showinfo();

    return 0;
}