/*
Write a C++ program to create User defined exception to check the
following conditions and throw the exception if the criterion does not met.
a. User has age between 18 and 55
b. User has income between Rs. 50,000 – Rs. 1,00,000 per month
c. User stays in Pune / Mumbai/ Bangalore / Chennai
d. User has 4-wheeler
Accept age, Income, City, Vehicle type from the user and check for the
conditions mentioned above. If any of the condition not met then throw the
exception.
*/

#include<iostream>
using namespace std;

class myException:public exception
{
    public:
    const char*what() const throw()
    {
        return"Invalid Input For Program.";
    }
};

int main()
{
    int age;
    cout<<"Enter Your Age: "<<endl;
    cin>>age;
    try
    {
        if(age >= 18 && age<= 55)
        {
            int income;
            cout<<"Enter Your Income: "<<endl;
            cin>>income;
            if(income>=50000 && income<=100000)
            {
                string city;
                string Pune,Mumbai,Banglore,Chennai;
                cout<<"Which City You Stay In?: "<<endl;
                cin>>city;
                if(city=="Pune" || city=="Mumbai" || city=="Banglore" || city=="Chennai")
                {
                    string wheel;
                    cout<<"Do You Own Four Wheeler?: "<<endl;
                    cin>>wheel;
                    if(wheel=="Y"){
                        cout<<"You Are Applicable For Voting."<<endl;
                    }
                    else{
                        myException a;
                        throw(a);
                    }
                }
                else{myException a;
                throw (a);}
            }else{myException a;
            throw(a);}
        }else{myException a;
        throw(a);}
    }
    catch(myException &a)
    {
        cout<<"Because It Doesn't Meet Criteria."<<endl;
    }
}