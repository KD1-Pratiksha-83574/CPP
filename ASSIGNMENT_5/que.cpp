/*
Q1. Implement following classes. Test all functionalities in main().
Create a class Date with data memebrs day,month and year.
Cretae a class Person with data members name,address and birthdate. The birthdate shoud be of
type date.
Cretae a class Employee with data members id, sal, dept and joining date. The joining date should
be of type date.
*/

#include<iostream>
#include<string.h>
using namespace std;

class Date{

    private:

    int day;
    int month;
    int year;

    public:
    Date()
    {
        day= 10;
        month = 01;
        year = 2002;
    }
    void acceptDate()
    {
        cout<< "Enter Day :" << endl;
        cin >> day;

        cout << "Enter Month : " << endl;
        cin >> month;

        cout << "Enter Year :" << endl;
        cin >> year;

    }

    void displayDate()
    {
        cout<< day << "/" << month << "/" << year; 
    }


};

class Person{
    private:
    string name;
    string address;
    Date birthDate;

    public:

    Person(){

    }
    void acceptData()
    {
        cout << "Enter the Name :" << endl;
        cin >> name;

        cout << "Enter Address : " << endl;
        cin >> address;

        cout << "Enter Birth date : " ;
        birthDate.acceptDate();
        cout << endl;
    }

    void displayData()
    {
        cout << "Name :" << name << endl;
        cout << "Address : " << address << endl;
        cout << "Date of Birth :" ;
        birthDate.displayDate();
        cout<< endl;
     }
};

class Employee{

    private:
    int id;
    double sal;
    // string name;
    // string address;
    Date doj;

    public:

    Employee()
    {

    }
    void acceptEmployeeDetail()
    {
        cout << "Enter ID :" << endl;
        cin >> id;

        cout << "Enter Salary :" << endl;
        cin >> sal;

        cout << "Date of joining : ";
        doj.acceptDate();
        cout<< endl;
    }

    void displayEmployeeDetail()
    {
        cout << "ID :" << id << endl;
        cout << "Salary : " << sal << endl;
        cout << "Date of Joining :" ;
        doj.displayDate();
        cout << endl;

    }
};


int main()
{
    Employee e;
    Person p;

     p.acceptData();
    p.displayData();
    e.acceptEmployeeDetail();
    e.displayEmployeeDetail();

   

}