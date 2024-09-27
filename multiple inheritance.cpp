//Ayush Shambharkar
//23070123034
//Aim - To study the concepts of inheritance (multiple inheritance).

#include<iostream>
#include<string>
using namespace std;

class Vehicle 
{
    public:
    string company="Ford";
    void type()
    {
        cout<<"Mustang"<<endl;
    }
};

class Specs 
{
    public:
    string mileage="8 kmpl";
    void colour()
    {
        cout<<"Grey and Black"<<endl;
    }
};

class Car: public Vehicle, public Specs 
{
    public:
    string seater="4 seater";
};

int main()
{
    Car f1;
    f1.colour();
    cout<<f1.company<<" ";
    f1.type();
    cout<<"("<<f1.seater<<")"<<endl<<"MILEAGE: "<<f1.mileage<<endl;
}

/*
OUTPUT
Grey and Black
Ford Mustang
(4 seater)
MILEAGE: 8 kmpl
*/
