/*
Write a program to create a directory that contains the following
information.
(a) Name of a person
(b) Address
(c) Telephone Number (if available with STD code)
(d) Mobile Number (if available)
(e) Head of the family
*/

#include <iostream>
using namespace std;
int n;

class Directory
{
private:
    string name;
    int telno;
    int mobno;
    string hof;
    string addy;

public:
    void getinfo();               // Function to input information
    void showinfo();              // Function to display information
    void search(const string &s); // Function to search for a name
};


void Directory::getinfo()
{
    cout << "Enter Your Name: " << endl;
    getline(cin, name);

    cout << "Enter Your Address: " << endl;
    getline(cin, addy);

    cout << "Enter Your Telephone Number: " << endl;
    cin >> telno;

    // Clear the input buffer before using getline again
    cin.ignore(); // Ignore the newline character left in the input buffer

    cout << "Enter Your Mobile Number: " << endl;
    cin >> mobno;

    // Clear the buffer again after reading mobno
    cin.ignore();

    cout << "Enter The Name of Head Of Family: " << endl;
    getline(cin, hof);
}

void Directory::showinfo()
{
    cout << "Your Name is: " << name << endl;
    cout << "Your Address is: " << addy << endl;
    cout << "Your Telephone Number is: " << telno << endl;
    cout << "Your Mobile Number is: " << mobno << endl;
    cout << "The Name of Head Of Family: " << hof << endl;
}


void Directory::search(const string &s)
{
    if (name == s)
    {
        showinfo(); // If the name matches, display the information
    }
    else
    {
        cout << "Name not found in the directory!" << endl;
    }
}


int main()
{
    string searchName;
    Directory e;
    e.getinfo(); // Collect employee info
    e.showinfo();
    e.search(searchName);

    
    cout << "Enter the name to search: ";
    getline(cin, searchName); // Get the name to search for

     // Search for the name and show info if found
    e.showinfo();
    return 0;
}
