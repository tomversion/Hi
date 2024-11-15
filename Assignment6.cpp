/*
Make a class named Fruit with a data member to calculate the number of
fruits in a basket. Create two other class named Apples and Mangoes to
calculate the number of apples and mangoes in the basket. Print the number
of fruits of each type and the total number of fruits in the basket.
*/

#include<iostream>
using namespace std;

class Apples
{   
    public:
    int aple;
    void getdata()
        {
            cout << "Enter The Number of Apples: " << endl;
            cin >> aple;
    }
};

class Mangoes
{   
    public:
    int mango;
    void getdata()
    {
    cout<<"Enter Number of Mangoes: "<<endl;
    cin>>mango;
    }
};

class Fruits:public Apples,public Mangoes
{
    public:
    
    void getdata(){
        Apples::getdata();
        Mangoes::getdata();
    }
    void showdata()
    {
    cout<<"The Number of Apples in Baskets Are: "<<aple<<endl;
    cout<<"The Number of Mangoes in Basket Are: "<<mango<<endl;
    cout<<"Total Number Of Fruits In Baskets Are: "<<aple+mango<<endl;
    }
};

int main()
{
    Fruits f;
    f.getdata();
    f.showdata();

    return 0;
}