/*Write a C++ menu driven program to take integer number as input from
user to calculate and display
i. Square
ii. Cube
iii. Square root
iv. Factorial
v. sum
vi. product
*/

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int a,b,sq,n,fact;
    double squ,pow;
    cout<<"1.Square"<<endl
    <<"2.Cube"<<endl
    <<"3.Square Root"<<endl
    <<"4.Factorial"<<endl
    <<"5.Sum"<<endl
    <<"6.Product"<<endl;

while(1)
{
    cout << "Enter Your Choice: " << endl;
    cin >> n;
    switch (n)
    {


    case 1:
    cout<<"Enter The Number: "<<endl;
    cin>>a;

    a=a*a;
    cout<<a<<endl;
    break;

    case 2:
    cout<<"Enter The Number: "<<endl;
    cin>>a;

    a=a*a*a;
    cout << a<<endl;
    break;

    case 3:
    cout<<"Enter The Number: "<<endl;
    cin>>a;

    b=sqrt(a);
    cout<<"Square Root Of Given Number is: "<<b<<endl;
    break;

    case 4:
    cout<<"Enter Your Number: "<<endl;
    cin>>fact;
    for(int i=0;i<fact;i++){
        a=a * i;
        cout<<a<<endl;

    }
    break;

    case 5:
    cout<<"Enter Two Number: "<<endl;
    cin>>a>>b;
    sq=a+b;
    cout<<"Sum is: "<<sq<<endl;
    break;

    case 6:
    cout << "Enter Two Number: " << endl;
    cin>>b>>a;
    sq = a * b;
    cout << "Product Of Given Number is : " << sq<<endl;
    break;

    default:
    break;
}
}
return 0;
}
